/* Destroys a breakable object after a hit: when its descriptor has a damage factor at 0x1D, scaled
   by D_800C6B74, and the object is forced at 0xE6, or the hit's team byte at 0xCA matches both ids at
   0x108 and 0x10A and either the hit at 0xCB bypasses an object without flag 0x400 or the scaled count
   reaches its limit (the count at 0x12C against 0x134 while flagged 0x400 below three hits at 0x10C,
   otherwise the hits against 0x104), it raises event 7 at its position through func_802671B0 and
   releases it through func_80285D80. Written from its own assembly with the destroy decision as an
   if/else chain on a byte-sized damage factor. */
#include "basetypes.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

typedef struct {
    s32 a;
    s32 b;
} Pair;

extern f32 D_800C6B74;
extern s32 D_8011FE88;
extern void func_802671B0(void *, void *, s32, Triple, Pair);
extern void func_80285D80(void *, void *, s32);

void func_80204A68(void *arg0, void *arg1) {
    Pair local;
    s8 factor;
    f32 scale;
    s32 destroy;
    s8 team;

    factor = *(s8 *) (*(char **) ((char *) arg0 + 0x18) + 0x1D);
    if (factor == -1) {
        return;
    }
    scale = factor * D_800C6B74;
    if (*(s8 *) ((char *) arg0 + 0xE6) == 1) {
        destroy = 1;
    } else {
        team = *(s8 *) ((char *) arg1 + 0xCA);
        if (*(s16 *) ((char *) arg0 + 0x108) != team || *(s16 *) ((char *) arg0 + 0x10A) != team) {
            destroy = 0;
        } else if (*(s8 *) ((char *) arg1 + 0xCB) != 0 && !(*(s32 *) ((char *) arg0 + 0x100) & 0x400)) {
            destroy = 1;
        } else if (*(s16 *) ((char *) arg0 + 0x10C) < 3 && (*(s32 *) ((char *) arg0 + 0x100) & 0x400)) {
            destroy = *(s16 *) ((char *) arg0 + 0x12C) * scale <= *(f32 *) ((char *) arg0 + 0x134);
        } else {
            destroy = *(s16 *) ((char *) arg0 + 0x10C) * scale <= *(f32 *) ((char *) arg0 + 0x104);
        }
    }
    if (destroy) {
        local.a = 0;
        func_802671B0(arg0, arg0, 7, *(Triple *) ((char *) arg0 + 8), local);
        func_80285D80(&D_8011FE88, arg0, 0);
    }
}

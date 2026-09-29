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

typedef struct func_80204A68_S1 func_80204A68_S1;
typedef struct func_80204A68_S2 func_80204A68_S2;
struct func_80204A68_S1 {
    char pad0[0x8];
    Triple unk8;
    char pad8[0x18 - 0x8 - sizeof(Triple)];
    char* unk18;
    char pad18[0xE6 - 0x18 - sizeof(char*)];
    s8 unkE6;
    char padE6[0x100 - 0xE6 - sizeof(s8)];
    s32 unk100;
    char pad100[0x104 - 0x100 - sizeof(s32)];
    f32 unk104;
    char pad104[0x108 - 0x104 - sizeof(f32)];
    s16 unk108;
    char pad108[0x10A - 0x108 - sizeof(s16)];
    s16 unk10A;
    char pad10A[0x10C - 0x10A - sizeof(s16)];
    s16 unk10C;
    char pad10C[0x12C - 0x10C - sizeof(s16)];
    s16 unk12C;
    char pad12C[0x134 - 0x12C - sizeof(s16)];
    f32 unk134;
};
struct func_80204A68_S2 {
    char pad0[0xCA];
    s8 unkCA;
    char padCA[0xCB - 0xCA - sizeof(s8)];
    s8 unkCB;
};

void func_80204A68(void *arg0, void *arg1) {
    Pair local;
    s8 factor;
    f32 scale;
    s32 destroy;
    s8 team;

    factor = *(s8 *) (((func_80204A68_S1 *)(arg0))->unk18 + 0x1D);
    if (factor == -1) {
        return;
    }
    scale = factor * D_800C6B74;
    if (((func_80204A68_S1 *)(arg0))->unkE6 == 1) {
        destroy = 1;
    } else {
        team = ((func_80204A68_S2 *)(arg1))->unkCA;
        if (((func_80204A68_S1 *)(arg0))->unk108 != team || ((func_80204A68_S1 *)(arg0))->unk10A != team) {
            destroy = 0;
        } else if (((func_80204A68_S2 *)(arg1))->unkCB != 0 && !(((func_80204A68_S1 *)(arg0))->unk100 & 0x400)) {
            destroy = 1;
        } else if (((func_80204A68_S1 *)(arg0))->unk10C < 3 && (((func_80204A68_S1 *)(arg0))->unk100 & 0x400)) {
            destroy = ((func_80204A68_S1 *)(arg0))->unk12C * scale <= ((func_80204A68_S1 *)(arg0))->unk134;
        } else {
            destroy = ((func_80204A68_S1 *)(arg0))->unk10C * scale <= ((func_80204A68_S1 *)(arg0))->unk104;
        }
    }
    if (destroy) {
        local.a = 0;
        func_802671B0(arg0, arg0, 7, ((func_80204A68_S1 *)(arg0))->unk8, local);
        func_80285D80(&D_8011FE88, arg0, 0);
    }
}

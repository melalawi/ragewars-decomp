/* Destroys a breakable object hit by an attack as func_80204A68 does, with event 6 and release mode
   1, then runs its hit timer: a descriptor flagged 1 hit by an attack carrying 0xCB reloads the timer
   at 0x64 from the descriptor (clearing 0x40 when the timer was idle), and a running timer that has
   not passed 0x40 triggers func_80214178 with 1. */
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

extern f32 D_800C6B70;
extern s32 D_8011FE88;
extern void func_802671B0(void *, void *, s32, Triple, Pair);
extern void func_80285D80(void *, void *, s32);
extern void func_80214178(void *, void *, s32);

void func_80204870(void *arg0, void *arg1) {
    char *table;
    s8 factor;
    f32 scale;
    s32 destroy;
    s8 team;
    Pair local;

    table = *(char **)((char *)arg0 + 0x18) + 0x14;
    factor = *(s8 *)(table + 8);
    if (factor != -1) {
        scale = factor * D_800C6B70;
        if (*(s8 *)((char *)arg0 + 0xE6) == 1) {
            destroy = 1;
        } else {
            team = *(s8 *)((char *)arg1 + 0xCA);
            if (*(s16 *)((char *)arg0 + 0x108) != team || *(s16 *)((char *)arg0 + 0x10A) != team) {
                destroy = 0;
            } else if (*(s8 *)((char *)arg1 + 0xCB) != 0 && !(*(s32 *)((char *)arg0 + 0x100) & 0x400)) {
                destroy = 1;
            } else if (*(s16 *)((char *)arg0 + 0x10C) < 3 && (*(s32 *)((char *)arg0 + 0x100) & 0x400)) {
                destroy = *(s16 *)((char *)arg0 + 0x12C) * scale <= *(f32 *)((char *)arg0 + 0x134);
            } else {
                destroy = *(s16 *)((char *)arg0 + 0x10C) * scale <= *(f32 *)((char *)arg0 + 0x104);
            }
        }
        if (destroy) {
            local.a = 0;
            func_802671B0(arg0, arg0, 6, *(Triple *)((char *)arg0 + 8), local);
            func_80285D80(&D_8011FE88, arg0, 1);
        }
    }

    if (*(s32 *)table & 1) {
        if (*(s8 *)((char *)arg1 + 0xCB) != 0) {
            f32 timerVal = *(f32 *)(table + 4);
            if (timerVal == 0.0f || *(f32 *)((char *)arg1 + 0x64) < timerVal) {
                if (*(f32 *)((char *)arg1 + 0x64) == 0.0f) {
                    *(f32 *)((char *)arg1 + 0x40) = 0.0f;
                }
                *(f32 *)((char *)arg1 + 0x64) = timerVal;
            }
        }
    }

    if (*(f32 *)((char *)arg1 + 0x64) != 0.0f) {
        if (*(f32 *)((char *)arg1 + 0x64) <= *(f32 *)((char *)arg1 + 0x40)) {
            func_80214178(arg0, arg1, 1);
        }
    }
}

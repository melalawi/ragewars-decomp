/* Picks an animation slot from a global mode, then plays the slot's effect, spawns its object at the owner or a fixed position, plays its sound, and flags the owner. Adapted from func_8027CA7C, with the slot chosen by a switch on D_801042C4 (the extra case below 7 that shares the default body is needed for the decision tree; its value is not recoverable), the constant triple, one argument, the dropped func_8027200C call, and the final test changed. */
#include "basetypes.h"

typedef struct { s32 x, y; } Pair;
typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
extern s32 D_801042C4;
extern Triple D_801042B8;
extern Triple D_801042C8;
extern char D_80121990;

extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80271888(Quad *, Triple *);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_80284544(void *, void *);
extern s32 func_80284408(void *);

void func_8027C5A0(void *arg0) {
    Pair pair;
    Quad rotation;
    Triple position;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 sound;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    switch (D_801042C4) {
    case 1:
    default:
        var_a0 = 1;
        break;
    case 7:
        var_a0 = 7;
        break;
    case 8:
        var_a0 = 8;
        break;
    }
    temp_s1 = *(void **)((char *)arg0 + 0x118);
    temp_a1 = var_a0 * 2;
    temp_v0 = *(s32 *)((char *)temp_s1 + 0x18);
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = *(u16 *)((char *)temp_v1 + 0x70);
    temp_a2 = *(u16 *)((char *)temp_v1 + 0x8C);
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    sound = *(u16 *)((char *)*(s32 *)((char *)temp_s1 + 0x18) +
                   temp_a1 + 0xA8);
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1, D_801042B8, pair);
    }
    if (temp_s2 != 0xFFFF) {
        if ((**(s32 **)((char *)arg0 + 0x118) & 0x10) != 0) {
            position = D_801042C8;
        } else {
            position = *(Triple *)((char *)arg0 + 0x1C);
        }
        func_80271888(&rotation, &position);
        func_80280094(&D_80121990, arg0,
                      *(void **)((char *)arg0 + 0x12C),
                      *(s32 *)((char *)arg0 + 0x130),
                      *(s32 *)((char *)arg0 + 0x134), temp_s2,
                      position, rotation, D_801042B8, 0,
                      -5,
                      (*(s32 *)((char *)arg0 + 0x5C) & 0x200006) | 1);
    }
    if (sound != 0xFFFF) {
        func_8025DE74((s16)sound, D_801042B8.x,
                      D_801042B8.y, D_801042B8.z, 0, -1);
    }
    *(s32 *)((char *)arg0 + 0x5C) |= 0x200;
    if ((**(s32 **)((char *)arg0 + 0x118) & 0x20000) != 0) {
        func_80284544(&D_80121990, arg0);
        func_80284408(arg0);
    }
}

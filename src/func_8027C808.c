#include "basetypes.h"

typedef struct { s32 x, y; } Pair;
typedef struct { s32 x, y, z; } Triple;
typedef struct { s32 x, y, z, w; } Quad;
extern Triple D_801042A8;
extern Triple D_801042C8;
extern char D_80121990;

extern s32 func_80275854(s32);
extern s32 func_802760F8(s32);
extern s32 func_802760C4(s32);
extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80271888(Quad *, Triple *);
extern s32 func_80280094(void *, void *, void *, s32, s32, s32, Triple, Quad, Triple, s32, s32, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);
extern void func_8027200C(void *, void *, s32);
extern void func_80284544(void *, void *);
extern s32 func_80284408(void *);

void func_8027C808(void *arg0) {
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

    if (func_80275854(0) != 0) {
        var_a0 = func_802760F8(0);
    } else {
        var_a0 = func_802760C4(0);
    }
    if (var_a0 == 10) {
        var_a0 = 0;
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
        func_80265E30(arg0, arg0, temp_a2, -1, D_801042A8, pair);
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
                      position, rotation, D_801042A8, 0,
                      -3,
                      (*(s32 *)((char *)arg0 + 0x5C) & 0x200006) | 1);
    }
    if (sound != 0xFFFF) {
        func_8025DE74((s16)sound, D_801042A8.x,
                      D_801042A8.y, D_801042A8.z, 0, -1);
    }
    func_8027200C((char *)arg0 + 0x18C, (char *)arg0 + 0x18C,
                  *(s32 *)((char *)arg0 + 0x1C4));
    *(s32 *)((char *)arg0 + 0x5C) |= 0x200;
    if (*(s8 *)((char *)arg0 + 0x1BA) == 1) {
        func_80284544(&D_80121990, arg0);
        func_80284408(arg0);
    }
}

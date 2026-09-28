#include "basetypes.h"

extern s32 func_8028403C(void *arg0);

typedef struct Pair {
    s32 x;
    s32 y;
} Pair;

typedef struct Triple {
    s32 x;
    s32 y;
    s32 z;
} Triple;

extern void func_80265E30(void *, void *, s32, s32, Triple, Pair);
extern void func_80279BB0(void *, s32, s8, s32);
extern s32 func_8025DE74(s16, s32, s32, s32, s32, s32);

void func_80283E2C(void *arg0) {
    Pair pair;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 temp_s3;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    temp_s1 = *(void **)((char *)arg0 + 0x118);
    if (func_8028403C(arg0) != 0) {
        var_a0 = 0xD;
    } else {
        var_a0 = 0xB;
    }
    temp_a1 = var_a0 * 2;
    temp_v0 = *(s32 *)((char *)temp_s1 + 0x18);
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = *(u16 *)((char *)temp_v1 + 0x70);
    temp_a2 = *(u16 *)((char *)temp_v1 + 0x8C);
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(Pair *)temp_v0_2;
    temp_s3 = *(u16 *)((char *)*(s32 *)((char *)temp_s1 + 0x18) + temp_a1 + 0xA8);
    if (temp_a2 != 0xFFFF) {
        func_80265E30(arg0, arg0, temp_a2, -1,
                     *(Triple *)((char *)arg0 + 8), pair);
    }
    if (temp_s2 != 0xFFFF) {
        func_80279BB0(arg0, temp_s2, *(s8 *)((char *)arg0 + 0x1D0), 1);
    }
    if (temp_s3 != 0xFFFF) {
        func_8025DE74((s16)temp_s3,
                      *(s32 *)((char *)arg0 + 8),
                      *(s32 *)((char *)arg0 + 0xC),
                      *(s32 *)((char *)arg0 + 0x10),
                      (s32)((char *)arg0 + 8), (s32)arg0);
    }
}

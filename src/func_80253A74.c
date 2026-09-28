/* Under the queue lock, takes the table entry indexed by the current slot, marks the slot empty with -1, and returns that entry. Adapted from func_8025398C, with the slot read and cleared instead of set, and the entry returned; the table is indexed through a byte offset so the read stays ahead of the clear. */
#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

extern s32 D_80104598[];
extern s32 D_801045A8;
extern s32 D_8010515C;

s32 func_80253A74(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 *base;
    u32 temp_a0;
    u32 temp_v0;
    s32 result;

    temp_a0 = func_802C2020();
    temp_v1 = D_8010515C + 1;
    D_8010515C = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)((char *)&D_801045A8 + 0xB98), 0, 1);
    } else {
        func_802C2040(temp_a0);
    }
    base = &D_801045A8;
    result = *(s32 *)((char *)D_80104598 + (*base << 2));
    *base = -1;
    temp_v0 = func_802C2020();
    temp_v1_2 = D_8010515C - 1;
    D_8010515C = temp_v1_2;
    if (temp_v1_2 != 0) {
        func_802C2040(temp_v0);
        func_802C0510((char *)base + 0xB98, 0, 1);
    } else {
        func_802C2040(temp_v0);
    }
    return result;
}

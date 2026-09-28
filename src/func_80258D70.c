#include "basetypes.h"

/* Counts how many of an object's seventeen 0xCC-byte slots at 0x1DC0 hold a given owner, holding the object's lock at 0x110 (raised and released under interrupts disabled through func_802C2020 and func_802C2040) around the scan. */

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

s32 func_80258D70(char *obj, s32 owner)
{
    s32 count;
    s32 i;

    count = 0;
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_a0;

        temp_s0 = (s32 *)(obj + 0x110);
        temp_a0 = func_802C2020();
        temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) + 1;
        *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
        if (temp_v1 != 1) {
            func_802C2040(temp_a0);
            func_802C0390((s32)temp_s0, 0, 1);
        } else {
            func_802C2040(temp_a0);
        }
    }
    for (i = 0; i < 17; i++) {
        if (*(s32 *)(obj + i * 0xCC + 0x1DC0) == owner) {
            count++;
        }
    }
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = (s32 *)(obj + 0x110);
        temp_v0 = func_802C2020();
        temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) - 1;
        *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
        if (temp_v1 != 0) {
            func_802C2040(temp_v0);
            func_802C0510(temp_s0, 0, 1);
        } else {
            func_802C2040(temp_v0);
        }
    }
    return count;
}

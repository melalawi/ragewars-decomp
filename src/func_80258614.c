#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);
extern s32 func_8025C19C(void *arg0, s32 arg1);
extern s32 func_80259AD8(void *arg0, s32 arg1);

s32 func_80258614(void *arg0, s32 arg1) {
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_a0;

        temp_s0 = (s32 *)((char *)arg0 + 0x110);
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
    if (func_8025C19C((char *)arg0 + 0x1DB8, arg1) != 0) {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = (s32 *)((char *)arg0 + 0x110);
        temp_v0 = func_802C2020();
        temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) - 1;
        *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
        if (temp_v1 != 0) {
            func_802C2040(temp_v0);
            func_802C0510(temp_s0, 0, 1);
        } else {
            func_802C2040(temp_v0);
        }
        return 1;
    }
    if (func_80259AD8((char *)arg0 + 0x138, arg1) != 0) {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = (s32 *)((char *)arg0 + 0x110);
        temp_v0 = func_802C2020();
        temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) - 1;
        *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
        if (temp_v1 != 0) {
            func_802C2040(temp_v0);
            func_802C0510(temp_s0, 0, 1);
        } else {
            func_802C2040(temp_v0);
        }
        return 1;
    }
    {
        s32 *temp_s0;
        s32 temp_v1;
        u32 temp_v0;

        temp_s0 = (s32 *)((char *)arg0 + 0x110);
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
    return 0;
}

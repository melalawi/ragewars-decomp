#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0390(s32, s32, s32);
extern void func_8025BF28(void *, s32);
extern void func_80259A0C(void *, s32);
extern void func_802C0510(void *, s32, s32);

void func_802588F4(void *arg0, s32 arg1) {
    void *temp_s0;
    void *var_a0;
    s32 temp_v1;
    u32 temp_a0;
    u32 temp_v0;

    temp_s0 = (char *)arg0 + 0x110;
    temp_a0 = func_802C2020();
    temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) + 1;
    *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
    if (temp_v1 != 1) {
        func_802C2040(temp_a0);
        func_802C0390((s32)temp_s0, 0, 1);
        var_a0 = (char *)arg0 + 0x1DB8;
    } else {
        func_802C2040(temp_a0);
        var_a0 = (char *)arg0 + 0x1DB8;
    }
    func_8025BF28(var_a0, arg1);
    func_80259A0C((char *)arg0 + 0x138, arg1);
    temp_s0 = (char *)arg0 + 0x110;
    temp_v0 = func_802C2020();
    temp_v1 = *(s32 *)((char *)temp_s0 + 0x1C) - 1;
    *(s32 *)((char *)temp_s0 + 0x1C) = temp_v1;
    if (temp_v1 != 0) {
        func_802C2040(temp_v0);
        func_802C0510(temp_s0, 0, 1);
        return;
    }
    func_802C2040(temp_v0);
}

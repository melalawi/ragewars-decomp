#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_802C0510(void *arg0, s32 arg1, s32 arg2);

void func_802587C4(s32 *arg0) {
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
        return;
    }
    func_802C2040(temp_v0);
}

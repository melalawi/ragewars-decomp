#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern s32 D_800D9288;

void func_802C06A0(s32 arg0) {
    u32 temp_v0;
    s32 *p;

    temp_v0 = func_802C2020();
    p = &D_800D9288;
    *p |= arg0;
    func_802C2040(temp_v0);
}

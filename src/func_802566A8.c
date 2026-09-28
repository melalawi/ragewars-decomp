#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void func_802566A8(s32 arg0, void *arg1) {
    u32 temp_s2;

    temp_s2 = func_802C2020();
    func_80255E78((char *)arg0 + 0x507C, arg1);
    *(s32 *)((char *)arg1 + 0x14) = 0;
    func_80255C58((char *)arg0 + 0x5068, (s32) arg1);
    func_802C2040(temp_s2);
}

#include "basetypes.h"

extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern void func_80255E78(void *, s32);
extern s32 func_80255C58(void *, s32);

void *func_8025663C(void *arg0) {
    u32 temp_s2;
    void *temp_s0;

    temp_s2 = func_802C2020();
    temp_s0 = *(void **)((char *)arg0 + 0x5068);
    if (temp_s0 != 0) {
        func_80255E78((char *)arg0 + 0x5068, (s32) temp_s0);
        *(s32 *)((char *)temp_s0 + 0x14) = 1;
        func_80255C58((char *)arg0 + 0x507C, (s32) temp_s0);
    }
    func_802C2040(temp_s2);
    return temp_s0;
}

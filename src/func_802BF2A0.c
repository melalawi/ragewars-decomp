#include "basetypes.h"

extern void *D_800D8444;
extern u32 func_802C2020(void);
extern void func_802C2040(u32);

void func_802BF2A0(s32 arg0) {
    u32 temp_a0;
    u16 *ptr;
    u16 v;

    temp_a0 = func_802C2020();
    if (arg0 & 0xFF) {
        ptr = (u16 *)D_800D8444;
        v = *ptr | 0x20;
    } else {
        ptr = (u16 *)D_800D8444;
        v = *ptr & 0xFFDF;
    }
    *ptr = v;
    func_802C2040(temp_a0);
}

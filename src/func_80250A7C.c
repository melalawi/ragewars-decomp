#include "basetypes.h"

extern s32 D_800D2640;
extern u8 D_800D297B;
extern void func_80253F2C(s32 arg0, s32 arg1);

void func_80250A7C(void *arg0) {
    if (!(*(u16 *)((char *)arg0 + 0xD8) & 0x40) && (*(u8 *)((char *)arg0 + 0xDA) != D_800D297B)) {
        func_80253F2C(0, *(s32 *)((char *)arg0 + 0xD0) | D_800D2640);
    }
}

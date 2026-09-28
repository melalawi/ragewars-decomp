#include "basetypes.h"

extern f32 D_800C6D8C;
extern f32 D_800C6D90;
extern f32 D_800C6D94;

f32 func_80209B64(void *arg0) {
    f32 value;
    u8 state;
    void *base;

    base = *(void **)arg0;
    state = *(u8 *)((char *)*(void **)((char *)base + 0x5D8) + 0x93);
    value = *(f32 *)((char *)*(void **)((char *)base + 0x18) + 0x28);
    value *= D_800C6D8C;
    switch (state) {
    case 1:
        break;
    default:
        *(s8 *)((char *)*(void **)((char *)*(void **)arg0 + 0x5D8) + 0x93) = 0;
    case 0:
        value *= D_800C6D90;
        break;
    case 2:
        value *= D_800C6D94;
        break;
    }
    return value;
}

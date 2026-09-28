#include "basetypes.h"

extern s32 D_801468C4;
extern f32 D_800C73B8;
extern void func_80219124(void *arg0, s32 arg1, void *arg2);
extern s32 func_80218988(void *arg0);

void func_802191B8(volatile char *arg0, void *arg1) {
    s32 flags;
    s32 state;
    s32 result;
    s32 value;
    char *entry;

    flags = *(s32 *)(*(char **)((char *)arg1 + 0x698) + 0xB0) & 0x8000;
    state = *(volatile s32 *)arg0;
    if ((state == 0) || (state == 3)) {
        if ((D_801468C4 != 0) &&
            (*(u8 *)(*(char **)((char *)arg1 + 0x5D8) + 0x92) == 0xFF)) {
            func_80219124((void *)arg0, flags, arg1);
            *(volatile s32 *)arg0 = 1;
        } else {
            return;
        }
    }

    *(f32 *)((char *)arg1 + 0x670) = D_800C73B8;
    *(s32 *)((char *)arg1 + 0x11B4) = 1;
    *(s32 *)((char *)arg1 + 0x11B8) = 1;
    result = func_80218988(arg1);
    if (result != *(s32 *)((char *)arg0 + 0x70)) {
        if (result != -1) {
            entry = (char *)arg0 + result * 0x14;
            value = *(u16 *)(entry + 0x1E);
            if (*(s32 *)(entry + 0x20) != 0) {
                if ((s16)value < 0) {
                    *(s32 *)((char *)arg0 + 0x70) = -1;
                    return;
                }
                if (result != *(s32 *)((char *)arg0 + 0x6C)) {
                    *(s32 *)((char *)arg0 + 0x6C) = result;
                }
                *(u8 *)(*(char **)((char *)arg1 + 0x5D8) + 0x92) = value;
            } else {
                return;
            }
        }
        *(s32 *)((char *)arg0 + 0x70) = result;
    }
}

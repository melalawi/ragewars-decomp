#include "basetypes.h"

extern void func_802227D0(void *, void *, s32);
extern f32 D_800C7E4C;

s32 func_8022C7E8(void *arg0, void *arg1) {
    f32 field6E4;

    if (*(s32 *)((char *)arg0 + 0x7E8) == 0) {
        field6E4 = *(f32 *)((char *)arg0 + 0x6E4);
        if (!(D_800C7E4C < field6E4)) {
            if (!(*(s32 *)((char *)arg1 + 0x38) & 0xC0000)) {
                if (*(s32 *)((char *)*(void **)((char *)arg1 + 0x18) + 0x14) & 2) {
                    if ((*(s32 *)((char *)arg0 + 0x6B0) & 0x10) && (*(f32 *)((char *)arg0 + 0x11D8) <= 0.0f)) {
                        func_802227D0(arg0, arg1, 5);
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

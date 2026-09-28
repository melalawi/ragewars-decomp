#include "basetypes.h"

extern s32 func_80204308(s32 arg0, s32 arg1, s32 arg2);
extern s32 D_8011FFC0;
extern s32 D_8013B294;

s32 func_80279490(void *arg0, s32 arg1) {
    s32 temp_a1;

    if (*(u16 *)((char *)arg0 + 0xA) == D_8013B294) {
        if (arg1 != 0) {
            temp_a1 = D_8011FFC0 + (*(u16 *)((char *)arg0 + 4) * 0x2E8);
            if ((*(u8 *)((char *)arg0 + 0x11) == 0xA) && (*(u8 *)((char *)arg0 + 0x12) == 1)) {
                return func_80204308(temp_a1, temp_a1 + 0x170, arg1);
            }
        }
        return 1;
    }
    return 1;
}

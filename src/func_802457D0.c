#include "basetypes.h"

extern void *D_800E2830;

s32 func_802457D0(void) {
    if (*(s32 *)((char *)D_800E2830 + 0x38) != 0) {
        if (*(f32 *)((char *)D_800E2830 + 0x1C) > *(f32 *)((char *)D_800E2830 + 0x34)) {
            return 1;
        }
        return 0;
    }
    return 1;
}

#include "basetypes.h"

extern f32 D_800D2988;

s32 func_8021846C(void *arg0, void *arg1) {
    f32 temp_f1;

    temp_f1 = *(f32 *) ((char *) arg0 + 4);
    if (temp_f1 > 0.0f) {
        *(f32 *) ((char *) arg0 + 4) = temp_f1 - D_800D2988;
        return 0;
    }
    if (*(s32 *) ((char *) (*(void **) ((char *) arg1 + 0x698)) + 0xB0) & 0x8000) {
        return 0;
    }
    *(s32 *) ((char *) arg0 + 0x37C) = -1;
    return 1;
}

#include "basetypes.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 func_8022AAC4(void *, s32);

s32 func_8020F5A4(void **arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    temp_v0 = func_8022AAC4(temp_a0, (s32) M2C_FIELD(temp_a0, s16 *, 0x62E));
    switch (temp_v0) {
        case 0:
            return 5;
        case 1:
            return 6;
        case 2:
            return 7;
        default:
            return 4;
    }
}

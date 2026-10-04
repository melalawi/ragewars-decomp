#include "span_1000/code_8020F2A8.h"
#include "types.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern s32 func_8022AAD4_de(void *, s32);

s32 func_8020F5A4_de(void **arg0) {
    s32 temp_v0;
    void *temp_a0;

    temp_a0 = *arg0;
    temp_v0 = func_8022AAD4_de(temp_a0, (s32) M2C_FIELD(temp_a0, s16 *, 0x62E));
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

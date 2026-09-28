#include "basetypes.h"

f32 func_8024E3B4(void *arg0) {
    void *temp_a0 = *(void **)((char *)arg0 + 0x18);
    s32 temp_v1 = *(s32 *)temp_a0;

    switch (temp_v1) {
    case 11:
        return *(f32 *)((char *)temp_a0 + 0xF8);
    case 4:
    case 1:
        return *(f32 *)((char *)temp_a0 + 0x34);
    default:
        return 0.0f;
    }
}

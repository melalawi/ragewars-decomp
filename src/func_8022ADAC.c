#include "basetypes.h"

extern f32 D_800C7DF0;
extern f32 D_800C7DF4;

f32 func_8022ADAC(void *arg0) {
    void *temp_v0;

    temp_v0 = *(void **)((char *)arg0 + 0x18);
    if (temp_v0 != 0) {
        return *(f32 *)((char *)temp_v0 + 0xF4) * D_800C7DF4;
    }
    return D_800C7DF0;
}

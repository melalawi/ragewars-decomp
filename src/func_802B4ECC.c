#include "basetypes.h"

void func_802B4ECC(void *arg0, f32 arg1) {
    void *temp_v0;

    temp_v0 = *(void **)((char *)arg0 + 0x18);
    if (temp_v0 != 0) {
        *(s32 *)((char *)arg0 + 0x24) = (s32)(arg1 * *(f32 *)((char *)temp_v0 + 8));
        return;
    }
    *(s32 *)((char *)arg0 + 0x24) = 0x1E8;
}

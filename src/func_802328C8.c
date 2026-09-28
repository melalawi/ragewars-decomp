#include "basetypes.h"

extern void *D_800D052C[];
extern f32 D_800C8100;
extern void func_8022AF64(void *arg0, s32 arg1);

void func_802328C8(void *arg0, void *arg1) {
    void *temp_a0;
    s16 idx;

    temp_a0 = *(void **)((char *)arg0 + 0x1D8);
    idx = *(s16 *)((char *)temp_a0 + 0x62E);
    *(f32 *)((char *)arg1 + 0x130) = *(f32 *)((char *)D_800D052C[idx] + 0x18) * *(f32 *)((char *)&D_800C8100 + 4);
    if ((*(s16 *)((char *)temp_a0 + 0x62E) == 5) && (*(s32 *)((char *)temp_a0 + 0x11C0) == 0)) {
        func_8022AF64(temp_a0, 0x46A);
    }
}

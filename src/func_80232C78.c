#include "basetypes.h"

extern void *D_800D052C[];
extern f32 D_800C8110;
extern void func_8022AF64(void *arg0, s32 arg1);

void func_80232C78(void *arg0, void *arg1) {
    void *temp_a0;
    s16 idx;

    temp_a0 = *(void **)((char *)arg0 + 0x1D8);
    idx = *(s16 *)((char *)temp_a0 + 0x62E);
    *(f32 *)((char *)arg1 + 0x130) = *(f32 *)((char *)D_800D052C[idx] + 0x18) * D_800C8110;
    if ((*(s16 *)((char *)temp_a0 + 0x62E) == 8) && (*(s32 *)((char *)temp_a0 + 0x11C0) == 0)) {
        func_8022AF64(temp_a0, 0xA3C);
    }
}

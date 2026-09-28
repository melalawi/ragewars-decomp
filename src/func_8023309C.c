#include "basetypes.h"

extern s32 D_801450B8;
extern void *D_800D052C[];
extern f32 D_800C8130;

extern void func_8021A9A4(void *arg0, s32 arg1);
extern void func_8022AE90(void *arg0, s32 arg1);
extern void func_8022AF64(void *arg0, s32 arg1);

void func_8023309C(void *arg0, void *arg1) {
    void *temp_s0;
    void *temp_a0;
    s16 index;

    temp_s0 = *(void **)((char *)arg0 + 0x1D8);
    *(s32 *)((char *)arg1 + 0x64) = 0;
    if ((*(s32 *)((char *)temp_s0 + 0x1450) == 0) &&
        (D_801450B8 == 1)) {
        func_8021A9A4(*(void **)((char *)arg0 + 0x1D8), 0x3F9);
    } else {
        func_8021A9A4(*(void **)((char *)arg0 + 0x1D8), 0x4CB);
    }
    func_8022AE90(temp_s0, 0x78A);
    func_8022AF64(temp_s0, 0x780);

    temp_a0 = *(void **)((char *)arg0 + 0x1D8);
    index = *(s16 *)((char *)temp_a0 + 0x62E);
    *(f32 *)((char *)arg1 + 0x130) =
        *(f32 *)((char *)D_800D052C[index] + 0x18) *
        *(f32 *)((char *)&D_800C8130 + 4);
    if ((*(s16 *)((char *)temp_a0 + 0x62E) == 8) &&
        (*(volatile s32 *)((char *)temp_a0 + 0x11C0) == 0)) {
        func_8022AF64(temp_a0, 0xA3C);
    }
}

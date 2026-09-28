#include "basetypes.h"

extern s32 D_8011FE88;
extern void ***D_800D052C[];
extern s32 D_800D2980;
extern char D_80145088;

extern s32 func_80232770(s32);
extern s32 func_80232790(s32);
extern s32 func_802327C4(s32);
extern void func_80237E70(void *, void *, void *);

void func_8022FEF4(void *arg0, void *arg1) {
    s16 temp_s0;
    u16 temp_s2;
    void *temp_a1;
    char *temp_s1;

    temp_s1 = *(char **)((char *)arg0 + 0x1D8);
    temp_s0 = *(s16 *)(temp_s1 + 0x770);
    temp_s2 = *(u16 *)(temp_s1 + 0x770);
    if ((*(s16 *)(temp_s1 + 0x62E) != temp_s0) || (D_8011FE88 != 4)) {
        if (func_80232770(temp_s0) != 0) {
            *(s32 *)(temp_s1 + 0x13B8) = 1;
        } else if (func_80232790(temp_s0) != 0) {
            *(s32 *)(temp_s1 + 0x13BC) = 1;
        } else if (func_802327C4(temp_s0) != 0) {
            *(s32 *)(temp_s1 + 0x13C0) = 1;
        }
        *(s16 *)(temp_s1 + 0x62E) = temp_s2;
        *(s32 *)((char *)arg1 + 0x2C) = *(s32 *)((char *)D_800D052C[(s16)temp_s2] + 0x54);
        *(s32 *)((char *)arg1 + 0x120) = *(s32 *)((char *)D_800D052C[*(s16 *)(temp_s1 + 0x62E)] + 0x58);
        temp_a1 = *(void **)(temp_s1 + 0x5DC);
        if ((temp_a1 != 0) && ((u32)D_800D2980 >= 5U)) {
            func_80237E70(&D_80145088, temp_a1,
                          **D_800D052C[*(s16 *)(temp_s1 + 0x62E)]);
        }
        *(s32 *)((char *)arg1 + 0x124) = 0;
        *(s32 *)((char *)arg1 + 0x128) = 0;
        *((s8 *)arg0 + 1) = 0;
        *(s32 *)((char *)arg1 + 0x130) = 0;
    }
    *(s32 *)((char *)arg1 + 0x13C) = 1;
    *(s32 *)((char *)arg1 + 0x144) = 1;
}

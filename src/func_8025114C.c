#include "basetypes.h"

extern s32 D_80105140;
extern s32 D_80105134[];
extern s32 D_801045A8;
extern s32 D_801045A0[];
extern s32 D_80104598[];
extern s32 D_8010515C;
extern s32 D_80105160;

extern void func_80254CE4(s32, s32);
extern u32 func_802C2020(void);
extern void func_802C2040(u32);
extern s32 func_802C0510(void *, s32, s32);
extern s32 func_802C0390(s32, s32, s32);

void func_8025114C(void) {
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s1;
    u32 temp_a0;
    u32 temp_v0;

    var_s1 = 0;
    var_s0 = 0;
    do {
        if (D_80105134[var_s0] != 0) {
            if (D_801045A8 != var_s0) {
                var_s1 += 1;
                D_801045A0[var_s0] = 1;
                goto block_7;
            }
            D_80104598[var_s0] = 0;
            func_80254CE4(0, var_s0);
            var_s0 += 1;
        } else {
block_7:
            var_s0 += 1;
        }
    } while (var_s0 < 2);
    if (var_s1 != 0) {
        temp_v0 = func_802C2020();
        temp_v1 = D_8010515C - 1;
        D_8010515C = temp_v1;
        if (temp_v1 != 0) {
            func_802C2040(temp_v0);
            func_802C0510(&D_80105140, 0, 1);
            var_s0_2 = 0;
        } else {
            func_802C2040(temp_v0);
            var_s0_2 = 0;
        }
        if (var_s1 > 0) {
            do {
                func_802C0390((s32) &D_80105160, 0, 1);
                var_s0_2 += 1;
            } while (var_s0_2 < var_s1);
        }
        temp_a0 = func_802C2020();
        temp_v1_2 = D_8010515C + 1;
        D_8010515C = temp_v1_2;
        if (temp_v1_2 != 1) {
            func_802C2040(temp_a0);
            func_802C0390((s32) &D_80105140, 0, 1);
            return;
        }
        func_802C2040(temp_a0);
    }
}

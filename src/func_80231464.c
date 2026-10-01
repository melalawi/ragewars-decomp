#include "basetypes.h"

extern f32 D_800C8058[];
extern f32 D_800C8060;
extern f32 D_800C8064;
extern f32 D_800C8068;
extern f32 D_800C806C;
extern f32 D_800C8070;
extern f32 D_800C8074;
extern f32 D_800C8078[];
extern f32 D_800C8080;
extern f32 D_800C8084;
extern f32 D_800D2988;
extern f32 func_80274810(f32, f32);
extern void func_802748E0(f32 *, f32, f32);

#define FIELD(p, t, o) (*(t *)((s8 *)(p) + (o)))

void func_80231464(void *arg0, void *arg1) {
    f32 temp_f12;
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = FIELD(arg0, void *, 0x1D8);
    if (FIELD(arg1, s8, 0x34) != 4) {
        temp_f12 = FIELD(arg1, volatile f32, 0x128);
        if (temp_f12 > 0.0f) {
            FIELD(arg1, f32, 0x128) = func_80274810(temp_f12, D_800C8058[0]);
        } else {
            f32 value = FIELD(arg1, f32, 0x124);
            f32 period = D_800C8058[1];
            FIELD(arg1, f32, 0x128) = 0.0f;
            if (period <= value) {
                do {
                    value -= period;
                    FIELD(arg1, f32, 0x124) = value;
                } while (period <= value);
            }
            period = FIELD(arg1, f32, 0x124);
            if (period < D_800C8060) {
                func_802748E0(arg1 + 0x124, 0.0f, 0.125f);
            } else if (period < D_800C8064) {
                func_802748E0(arg1 + 0x124, 2.0943952f, 0.125f);
            } else if (period < D_800C8068) {
                func_802748E0(arg1 + 0x124, 4.1887903f, 0.125f);
            } else {
                func_802748E0(arg1 + 0x124, 6.2831855f, 0.125f);
            }
        }
    }
    FIELD(arg1, f32, 0x124) += (FIELD(arg1, f32, 0x128) * D_800D2988) * 2.0f;
    temp_f1 = FIELD(arg1, f32, 0x128);
    temp_v0 = FIELD(temp_s1, void *, 0x698);
    if (!(temp_f1 < 0.0f
              ? D_800C8070 < (-temp_f1 * D_800C806C)
              : D_800C8078[0] < (temp_f1 * D_800C8074))) {
        temp_f2 = FIELD(arg1, f32, 0x128);
        if (temp_f2 < 0.0f) {
            FIELD(temp_v0, f32, 0x168) = (f32) (-temp_f2 * D_800C8078[1]);
            return;
        }
        FIELD(temp_v0, f32, 0x168) = (f32) (temp_f2 * D_800C8080);
        return;
    }
    FIELD(temp_v0, f32, 0x168) = (f32) D_800C8084;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2E98_4 = 0.0136135686f;
const float unbake_rodata_800C2E9C_4 = 6.28318548f;
const float unbake_rodata_800C2EA0_4 = 1.04719758f;
const float unbake_rodata_800C2EA4_4 = 3.14159274f;
const float unbake_rodata_800C2EA8_4 = 5.23598766f;
const float unbake_rodata_800C2EAC_4 = 1.79049289f;
const float unbake_rodata_800C2EB0_4 = 1.0f;
const float unbake_rodata_800C2EB4_4 = 1.79049289f;
const float unbake_rodata_800C2EB8_4 = 1.0f;
const float unbake_rodata_800C2EBC_4 = 1.79049289f;
const float unbake_rodata_800C2EC0_4 = 1.79049289f;
const float unbake_rodata_800C2EC4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8058_4 = 0.0136135686f;
const float unbake_rodata_800C805C_4 = 6.28318548f;
const float unbake_rodata_800C8060_4 = 1.04719758f;
const float unbake_rodata_800C8064_4 = 3.14159274f;
const float unbake_rodata_800C8068_4 = 5.23598766f;
const float unbake_rodata_800C806C_4 = 1.79049289f;
const float unbake_rodata_800C8070_4 = 1.0f;
const float unbake_rodata_800C8074_4 = 1.79049289f;
const float unbake_rodata_800C8078_4 = 1.0f;
const float unbake_rodata_800C807C_4 = 1.79049289f;
const float unbake_rodata_800C8080_4 = 1.79049289f;
const float unbake_rodata_800C8084_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3218_4 = 0.0136135686f;
const float unbake_rodata_800C321C_4 = 6.28318548f;
const float unbake_rodata_800C3220_4 = 1.04719758f;
const float unbake_rodata_800C3224_4 = 3.14159274f;
const float unbake_rodata_800C3228_4 = 5.23598766f;
const float unbake_rodata_800C322C_4 = 1.79049289f;
const float unbake_rodata_800C3230_4 = 1.0f;
const float unbake_rodata_800C3234_4 = 1.79049289f;
const float unbake_rodata_800C3238_4 = 1.0f;
const float unbake_rodata_800C323C_4 = 1.79049289f;
const float unbake_rodata_800C3240_4 = 1.79049289f;
const float unbake_rodata_800C3244_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3258_4 = 0.0136135686f;
const float unbake_rodata_800C325C_4 = 6.28318548f;
const float unbake_rodata_800C3260_4 = 1.04719758f;
const float unbake_rodata_800C3264_4 = 3.14159274f;
const float unbake_rodata_800C3268_4 = 5.23598766f;
const float unbake_rodata_800C326C_4 = 1.79049289f;
const float unbake_rodata_800C3270_4 = 1.0f;
const float unbake_rodata_800C3274_4 = 1.79049289f;
const float unbake_rodata_800C3278_4 = 1.0f;
const float unbake_rodata_800C327C_4 = 1.79049289f;
const float unbake_rodata_800C3280_4 = 1.79049289f;
const float unbake_rodata_800C3284_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2F68_4 = 0.0136135686f;
const float unbake_rodata_800C2F6C_4 = 6.28318548f;
const float unbake_rodata_800C2F70_4 = 1.04719758f;
const float unbake_rodata_800C2F74_4 = 3.14159274f;
const float unbake_rodata_800C2F78_4 = 5.23598766f;
const float unbake_rodata_800C2F7C_4 = 1.79049289f;
const float unbake_rodata_800C2F80_4 = 1.0f;
const float unbake_rodata_800C2F84_4 = 1.79049289f;
const float unbake_rodata_800C2F88_4 = 1.0f;
const float unbake_rodata_800C2F8C_4 = 1.79049289f;
const float unbake_rodata_800C2F90_4 = 1.79049289f;
const float unbake_rodata_800C2F94_4 = 1.0f;
#endif

#include "span_1000/code_80232B44.h"
#include "span_C76B0/data.h"
#include "types.h"





extern f32 D_800C3068_de[];


extern s32 D_800CA2D8_de;
extern void func_80274870_de(f32 *, f32, f32);

#define FIELD(p, t, o) (*(t *)((s8 *)(p) + (o)))

void func_802335EC_de(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    void *temp_s1;
    void *temp_v0;

    temp_s1 = FIELD(arg0, void *, 0x1D8);
    if (FIELD(arg1, s8, 0x34) == 5) {
        func_80274870_de(arg1 + 0x128, (f32) D_800CA2D8_de * D_800C3058_de, 0.4f);
    } else {
        func_80274870_de(arg1 + 0x128, 0.0f, 0.4f);
    }
    temp_f1 = FIELD(arg1, f32, 0x128);
    temp_v0 = FIELD(temp_s1, void *, 0x698);
    if (!(temp_f1 < 0.0f
              ? D_800C3060_de < (-temp_f1 * D_800C305C_de)
              : D_800C3068_de[0] < (temp_f1 * D_800C3064_de))) {
        temp_f2 = FIELD(arg1, f32, 0x128);
        if (temp_f2 < 0.0f) {
            FIELD(temp_v0, f32, 0x168) = (f32) (-temp_f2 * D_800C3068_de[1]);
            return;
        }
        FIELD(temp_v0, f32, 0x168) = (f32) (temp_f2 * D_800C3070_de);
        return;
    }
    FIELD(temp_v0, f32, 0x168) = (f32) D_800C3074_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F88_4 = 0.0174532942f;
const float unbake_rodata_800C2F8C_4 = 1.79049289f;
const float unbake_rodata_800C2F90_4 = 1.0f;
const float unbake_rodata_800C2F94_4 = 1.79049289f;
const float unbake_rodata_800C2F98_4 = 1.0f;
const float unbake_rodata_800C2F9C_4 = 1.79049289f;
const float unbake_rodata_800C2FA0_4 = 1.79049289f;
const float unbake_rodata_800C2FA4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8148_4 = 0.0174532942f;
const float unbake_rodata_800C814C_4 = 1.79049289f;
const float unbake_rodata_800C8150_4 = 1.0f;
const float unbake_rodata_800C8154_4 = 1.79049289f;
const float unbake_rodata_800C8158_4 = 1.0f;
const float unbake_rodata_800C815C_4 = 1.79049289f;
const float unbake_rodata_800C8160_4 = 1.79049289f;
const float unbake_rodata_800C8164_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3308_4 = 0.0174532942f;
const float unbake_rodata_800C330C_4 = 1.79049289f;
const float unbake_rodata_800C3310_4 = 1.0f;
const float unbake_rodata_800C3314_4 = 1.79049289f;
const float unbake_rodata_800C3318_4 = 1.0f;
const float unbake_rodata_800C331C_4 = 1.79049289f;
const float unbake_rodata_800C3320_4 = 1.79049289f;
const float unbake_rodata_800C3324_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3348_4 = 0.0174532942f;
const float unbake_rodata_800C334C_4 = 1.79049289f;
const float unbake_rodata_800C3350_4 = 1.0f;
const float unbake_rodata_800C3354_4 = 1.79049289f;
const float unbake_rodata_800C3358_4 = 1.0f;
const float unbake_rodata_800C335C_4 = 1.79049289f;
const float unbake_rodata_800C3360_4 = 1.79049289f;
const float unbake_rodata_800C3364_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3058_4 = 0.0174532942f;
const float unbake_rodata_800C305C_4 = 1.79049289f;
const float unbake_rodata_800C3060_4 = 1.0f;
const float unbake_rodata_800C3064_4 = 1.79049289f;
const float unbake_rodata_800C3068_4 = 1.0f;
const float unbake_rodata_800C306C_4 = 1.79049289f;
const float unbake_rodata_800C3070_4 = 1.79049289f;
const float unbake_rodata_800C3074_4 = 1.0f;
#endif

#include "common/types.h"
#include "span_16E000/code_8043E364.h"
#include "span_C76B0/data.h"
#include "types.h"
/* Steps the selection D_800E1DF8_de through func_804423BC_de (a second step when func_802643A0_de or
   func_8026437C_de reports the object's controller busy), then sets D_80142228 to the chosen entry of the
   float table D_00450854 plus the offset in D_800DE328, clamped between D_800DE330_de and (2.0f). */





extern s32 D_800E1DF8_de;
extern Extra D_800DE328;


extern f32 D_0044FC28_de[];

extern s32 func_804423BC_de(struct Shape_typemap_114 *, s32, s32, s32, s32, s32);
extern s32 func_802643A0_de(s32);
extern s32 func_8026437C_de(s32);

s32 func_8043E6A4_de(void *arg0, struct Shape_typemap_114 *obj)
{
    f32 scale;

    D_800E1DF8_de = func_804423BC_de(obj, D_800E1DF8_de, 1, 0, 15, 0);
    if (func_802643A0_de(obj->field_20) != 0 || func_8026437C_de(obj->field_20) != 0) {
        func_804423BC_de(obj, D_800E1DF8_de, 1, 0, 15, 0);
    }
    scale = D_0044FC28_de[D_800E1DF8_de] + D_800DE328.scale;
    if (!(scale < D_800DE330_de)) {
        if (!(scale > (2.0f))) {
            if (scale < D_800DE330_de) {
                scale = D_800DE330_de;
            }
        } else {
            scale = (2.0f);
        }
    } else {
        scale = D_800DE330_de;
    }
    D_80142228 = scale;
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DCFDC_4 = 1.0f;
const float unbake_rodata_800DCFE0_4 = 0.5f;
const float unbake_rodata_800DCFE4_4 = 2.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E235C_4 = 1.0f;
const float unbake_rodata_800E2360_4 = 0.5f;
const float unbake_rodata_800E2364_4 = 2.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800EE9AC_4 = 1.0f;
const float unbake_rodata_800EE9B0_4 = 0.5f;
const float unbake_rodata_800EE9B4_4 = 2.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9B6C_4 = 1.0f;
const float unbake_rodata_800E9B70_4 = 0.5f;
const float unbake_rodata_800E9B74_4 = 2.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800DE32C_4 = 1.0f;
const float unbake_rodata_800DE330_4 = 0.5f;
const float unbake_rodata_800DE334_4 = 2.0f;
#endif

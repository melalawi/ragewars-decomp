/* Steps the selection D_800E5E48 through func_8044252C (a second step when func_802643C0 or
   func_8026439C reports the object's controller busy), then sets D_801462E8 to the chosen entry of the
   float table D_00450854 plus the offset in D_800E2358, clamped between D_800E2360 and D_800E2364. */
#include "basetypes.h"

typedef struct {
    s32 unk0;
    f32 offset;
} ScaleBase;

typedef struct {
    u8 pad0[0x20];
    s32 controller;
} MenuObject;

extern s32 D_800E5E48;
extern ScaleBase D_800E2358;
extern f32 D_800E2360;
extern f32 D_800E2364;
extern f32 D_801462E8;
extern f32 D_00450854[];

extern s32 func_8044252C(MenuObject *, s32, s32, s32, s32, s32);
extern s32 func_802643C0(s32);
extern s32 func_8026439C(s32);

s32 func_8043E81C(void *arg0, MenuObject *obj)
{
    f32 scale;

    D_800E5E48 = func_8044252C(obj, D_800E5E48, 1, 0, 15, 0);
    if (func_802643C0(obj->controller) != 0 || func_8026439C(obj->controller) != 0) {
        func_8044252C(obj, D_800E5E48, 1, 0, 15, 0);
    }
    scale = D_00450854[D_800E5E48] + D_800E2358.offset;
    if (!(scale < D_800E2360)) {
        if (!(scale > D_800E2364)) {
            if (scale < D_800E2360) {
                scale = D_800E2360;
            }
        } else {
            scale = D_800E2364;
        }
    } else {
        scale = D_800E2360;
    }
    D_801462E8 = scale;
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

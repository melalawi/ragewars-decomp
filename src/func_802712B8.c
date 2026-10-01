#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C98E0;
extern f32 D_800C98E8;
extern s32 func_80274544(void);
extern f32 func_802BC380(f32);

Vec3 func_802712B8(Vec3 *in, f32 amount) {
    Vec3 random;
    Vec3 result;
    Vec3 *randomPtr;
    f32 randomMagnitude;
    f32 randomScale;
    f32 inputMagnitude;
    f32 inputScale;

    random.x = (f32)((func_80274544() % 20000) - 0x2710) *
               *(&D_800C98E0 + 1);
    random.y = in->y;
    random.z = in->z;
    randomPtr = &random;

    randomMagnitude = func_802BC380((randomPtr->x * randomPtr->x) +
                                    (randomPtr->y * randomPtr->y) +
                                    (randomPtr->z * randomPtr->z));
    if (randomMagnitude != 0.0f) {
        randomScale = D_800C98E8 / randomMagnitude;
        randomPtr->x *= randomScale;
        randomPtr->y *= randomScale;
        randomPtr->z *= randomScale;
    }

    inputMagnitude = func_802BC380((in->x * in->x) +
                                   (in->y * in->y) +
                                   (in->z * in->z));
    if (inputMagnitude != 0.0f) {
        inputScale = *(&D_800C98E8 + 1) / inputMagnitude;
        in->x *= inputScale;
        in->y *= inputScale;
        in->z *= inputScale;
    }

    result.x = in->x + amount * (randomPtr->x - in->x);
    result.y = in->y + amount * (randomPtr->y - in->y);
    result.z = in->z + amount * (randomPtr->z - in->z);
    return result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4724_4 = 9.99999975e-05f;
const float unbake_rodata_800C4728_4 = 1.0f;
const float unbake_rodata_800C472C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C98E4_4 = 9.99999975e-05f;
const float unbake_rodata_800C98E8_4 = 1.0f;
const float unbake_rodata_800C98EC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4AA4_4 = 9.99999975e-05f;
const float unbake_rodata_800C4AA8_4 = 1.0f;
const float unbake_rodata_800C4AAC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4AE4_4 = 9.99999975e-05f;
const float unbake_rodata_800C4AE8_4 = 1.0f;
const float unbake_rodata_800C4AEC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C47F4_4 = 9.99999975e-05f;
const float unbake_rodata_800C47F8_4 = 1.0f;
const float unbake_rodata_800C47FC_4 = 1.0f;
#endif

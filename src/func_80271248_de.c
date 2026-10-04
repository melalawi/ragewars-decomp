#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"





extern s32 func_802744D4_de(void);
extern f32 func_802B72B0_de(f32);

Vec3 func_80271248_de(Vec3 *in, f32 amount) {
    Vec3 random;
    Vec3 result;
    Vec3 *randomPtr;
    f32 randomMagnitude;
    f32 randomScale;
    f32 inputMagnitude;
    f32 inputScale;

    random.x = (f32)((func_802744D4_de() % 20000) - 0x2710) *
               *(&D_800C47F0_de + 1);
    random.y = in->y;
    random.z = in->z;
    randomPtr = &random;

    randomMagnitude = func_802B72B0_de((randomPtr->x * randomPtr->x) +
                                    (randomPtr->y * randomPtr->y) +
                                    (randomPtr->z * randomPtr->z));
    if (randomMagnitude != 0.0f) {
        randomScale = D_800C47F8_de / randomMagnitude;
        randomPtr->x *= randomScale;
        randomPtr->y *= randomScale;
        randomPtr->z *= randomScale;
    }

    inputMagnitude = func_802B72B0_de((in->x * in->x) +
                                   (in->y * in->y) +
                                   (in->z * in->z));
    if (inputMagnitude != 0.0f) {
        inputScale = *(&D_800C47F8_de + 1) / inputMagnitude;
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

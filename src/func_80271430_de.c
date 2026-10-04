#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"





extern s32 func_802744D4_de(void);
extern f32 func_802B72B0_de(f32);

Vec3 func_80271430_de(Vec3 *in, f32 amount) {
    Vec3 random;
    Vec3 result;
    Vec3 *randomPtr;
    f32 randomMagnitude;
    f32 randomScale;
    f32 inputMagnitude;
    f32 inputScale;

    random.x = in->x;
    random.y = ((f32)(func_802744D4_de() % 20000) - D_800C4800_de) * *(&D_800C4800_de + 1);
    random.z = in->z;
    randomPtr = &random;

    randomMagnitude = func_802B72B0_de((randomPtr->x * randomPtr->x) +
                                    (randomPtr->y * randomPtr->y) +
                                    (randomPtr->z * randomPtr->z));
    if (randomMagnitude != 0.0f) {
        randomScale = D_800C4808_de / randomMagnitude;
        randomPtr->x *= randomScale;
        randomPtr->y *= randomScale;
        randomPtr->z *= randomScale;
    }

    inputMagnitude = func_802B72B0_de((in->x * in->x) +
                                   (in->y * in->y) +
                                   (in->z * in->z));
    if (inputMagnitude != 0.0f) {
        inputScale = *(&D_800C4808_de + 1) / inputMagnitude;
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
const float unbake_rodata_800C4730_4 = 10000.0f;
const float unbake_rodata_800C4734_4 = 9.99999975e-05f;
const float unbake_rodata_800C4738_4 = 1.0f;
const float unbake_rodata_800C473C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C98F0_4 = 10000.0f;
const float unbake_rodata_800C98F4_4 = 9.99999975e-05f;
const float unbake_rodata_800C98F8_4 = 1.0f;
const float unbake_rodata_800C98FC_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4AB0_4 = 10000.0f;
const float unbake_rodata_800C4AB4_4 = 9.99999975e-05f;
const float unbake_rodata_800C4AB8_4 = 1.0f;
const float unbake_rodata_800C4ABC_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4AF0_4 = 10000.0f;
const float unbake_rodata_800C4AF4_4 = 9.99999975e-05f;
const float unbake_rodata_800C4AF8_4 = 1.0f;
const float unbake_rodata_800C4AFC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4800_4 = 10000.0f;
const float unbake_rodata_800C4804_4 = 9.99999975e-05f;
const float unbake_rodata_800C4808_4 = 1.0f;
const float unbake_rodata_800C480C_4 = 1.0f;
#endif

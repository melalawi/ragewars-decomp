#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"





extern s32 func_802744D4_de(void);
extern f32 func_802B72B0_de(f32);

Vec3 func_80270FE8_de(Vec3 *in, f32 amount) {
    Vec3 random;
    Vec3 result;
    Vec3 *randomPtr;
    f32 randomMagnitude;
    f32 randomScale;
    f32 inputMagnitude;
    f32 inputScale;

    random.x = (f32)((func_802744D4_de() % 20000) - 0x2710);
    random.y = (f32)((func_802744D4_de() % 20000) - 0x2710);
    random.z = (f32)((func_802744D4_de() % 20000) - 0x2710);
    randomPtr = &random;

    randomMagnitude = func_802B72B0_de((randomPtr->x * randomPtr->x) +
                                    (randomPtr->y * randomPtr->y) +
                                    (randomPtr->z * randomPtr->z));
    if (randomMagnitude != 0.0f) {
        randomScale = D_800C47EC_de / randomMagnitude;
        randomPtr->x *= randomScale;
        randomPtr->y *= randomScale;
        randomPtr->z *= randomScale;
    }

    inputMagnitude = func_802B72B0_de((in->x * in->x) +
                                   (in->y * in->y) +
                                   (in->z * in->z));
    if (inputMagnitude != 0.0f) {
        inputScale = D_800C47F0_de / inputMagnitude;
        in->x *= inputScale;
        in->y *= inputScale;
        in->z *= inputScale;
    }

    result.x = in->x + amount * (randomPtr->x - in->x);
    result.y = in->y + amount * (randomPtr->y - in->y);
    result.z = in->z + amount * (randomPtr->z - in->z);
    return result;
}

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

#include "basetypes.h"

typedef struct {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_800C9900;
extern f32 D_800C9908;
extern s32 func_80274544(void);
extern f32 func_802BC380(f32);

Vec3 *func_80271694(Vec3 *out, Vec3 *in, f32 amount) {
    Vec3 random;
    Vec3 result;
    Vec3 *randomPtr;

    random.x = in->x;
    random.y = in->y;
    random.z = ((f32)(func_80274544() % 20000) - D_800C9900) *
               *(&D_800C9900 + 1);

    randomPtr = &random;
    {
        f32 magnitude;
        f32 scale;

        magnitude = func_802BC380((randomPtr->x * randomPtr->x) +
                                  (randomPtr->y * randomPtr->y) +
                                  (randomPtr->z * randomPtr->z));
        if (magnitude != 0.0f) {
            scale = D_800C9908 / magnitude;
            randomPtr->x *= scale;
            randomPtr->y *= scale;
            randomPtr->z *= scale;
        }
    }
    {
        f32 magnitude;
        f32 scale;

        magnitude = func_802BC380((in->x * in->x) +
                                  (in->y * in->y) +
                                  (in->z * in->z));
        if (magnitude != 0.0f) {
            scale = *(&D_800C9908 + 1) / magnitude;
            in->x *= scale;
            in->y *= scale;
            in->z *= scale;
        }
    }

    result.x = in->x + amount * (randomPtr->x - in->x);
    result.y = in->y + amount * (randomPtr->y - in->y);
    result.z = in->z + amount * (randomPtr->z - in->z);
    *out = result;
    return out;
}

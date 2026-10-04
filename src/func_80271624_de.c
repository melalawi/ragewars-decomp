#include "common/types.h"
#include "span_1000/code_8026E5DC.h"
#include "span_C76B0/data.h"
#include "types.h"





extern s32 func_802744D4_de(void);
extern f32 func_802B72B0_de(f32);

Vec3 *func_80271624_de(Vec3 *out, Vec3 *in, f32 amount) {
    Vec3 random;
    Vec3 result;
    Vec3 *randomPtr;

    random.x = in->x;
    random.y = in->y;
    random.z = ((f32)(func_802744D4_de() % 20000) - D_800C4810_de) *
               *(&D_800C4810_de + 1);

    randomPtr = &random;
    {
        f32 magnitude;
        f32 scale;

        magnitude = func_802B72B0_de((randomPtr->x * randomPtr->x) +
                                  (randomPtr->y * randomPtr->y) +
                                  (randomPtr->z * randomPtr->z));
        if (magnitude != 0.0f) {
            scale = D_800C4818_de / magnitude;
            randomPtr->x *= scale;
            randomPtr->y *= scale;
            randomPtr->z *= scale;
        }
    }
    {
        f32 magnitude;
        f32 scale;

        magnitude = func_802B72B0_de((in->x * in->x) +
                                  (in->y * in->y) +
                                  (in->z * in->z));
        if (magnitude != 0.0f) {
            scale = *(&D_800C4818_de + 1) / magnitude;
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

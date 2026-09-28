#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_80146890;
extern s32 D_8010C080;

extern s32 func_8025828C(void *, s32, Vec3, s32);

s32 func_8025E008(s32 arg0, Vec3 arg1, s32 arg2) {
    if (D_80146890 != 0) {
        return -1;
    }
    return func_8025828C(&D_8010C080, arg0, arg1, arg2);
}

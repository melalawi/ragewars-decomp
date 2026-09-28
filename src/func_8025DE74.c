#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_80146890;
extern s32 D_8010C080;

extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

s32 func_8025DE74(s16 arg0, Vec3 arg1, s32 arg4, s32 arg5) {
    if (D_80146890 != 0) {
        return -1;
    }
    return func_80257DF4(&D_8010C080, arg0, arg1, arg4, arg5);
}

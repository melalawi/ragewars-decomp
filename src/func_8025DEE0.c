#include "basetypes.h"

extern s32 D_80146890;
extern s32 D_8010C080;

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 func_80258A9C(void *arg0, s32 arg1, Vec3 arg2,
                         s32 arg3, s32 arg4, f32 arg5);

s32 func_8025DEE0(s32 arg0, Vec3 arg1, s32 arg4, s32 arg5, f32 arg6) {
    if (D_80146890 != 0) {
        return -1;
    }
    return func_80258A9C(&D_8010C080, (s16)arg0, arg1, arg4, arg5, arg6);
}

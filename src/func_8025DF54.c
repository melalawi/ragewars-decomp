#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_80146890;
extern s32 D_8010C080;

extern s32 func_80258D30(void *arg0);
extern void func_80258D28(void *arg0, s32 arg1);
extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

s32 func_8025DF54(s32 arg0) {
    s32 temp_s0;
    s32 temp_s1;

    if (D_80146890 != 0) {
        return -1;
    }
    {
        Vec3 vec;
        register f32 zero = 0.0f;

        vec.z = zero;
        vec.y = zero;
        vec.x = zero;
        temp_s1 = func_80258D30(&D_8010C080);
        func_80258D28(&D_8010C080, 1);
        temp_s0 = func_80257DF4(&D_8010C080, (s16)arg0, vec, 0, -1);
        func_80258D28(&D_8010C080, temp_s1);
    }
    return temp_s0;
}

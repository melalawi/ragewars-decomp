#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern s32 D_800D0960;
extern char D_80145088;

extern s32 func_802934DC(void);
extern void *func_80239594(s32 *arg0, Vec3 *arg1);
extern s32 func_80257DF4(void *, s32, Vec3, s32, s32);

void func_80258B00(void *arg0) {
    Vec3 zero;
    void *result;
    Vec3 *vec;

    if (D_800D0960 != 0 &&
        *(s32 *)((char *)arg0 + 0x2BB4) != 0 &&
        func_802934DC() != 0 &&
        *(s32 *)((char *)arg0 + 0x134) > 0) {
        {
            register f32 value = 0.0f;

            zero.z = value;
            zero.y = value;
            zero.x = value;
        }
        result = func_80239594(&D_80145088, &zero);
        vec = (Vec3 *)((char *)result + 0x128);
        if ((*(s32 *)((char *)arg0 + 0x104) & 3) == 0) {
            func_80257DF4(arg0, *(s32 *)((char *)arg0 + 0x134), *vec, 0, -1);
        }
    }
}

#include "basetypes.h"

typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 func_8024E454(void *arg0);
extern f32 func_8024D388(void *);
extern f32 func_8024D274(void *arg0);
extern f32 func_8024E410(void *);
extern s32 func_8024490C(void *arg0, Vec3 arg1, Vec3 arg2, void *arg3,
                         f32 arg4, f32 arg5, f32 arg6, f32 arg7);
extern char D_801040F0;
extern char D_80103FCC[];

void func_8022DE48(void *arg0, void *arg1) {
    Vec3 next;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f21;
    f32 temp_f22;
    f32 var_f23;

    var_f23 = (((*(f32 *)((char *)*(void **)((char *)arg0 + 0x18) + 0xF4) -
                    *(f32 *)((char *)arg0 + 0x780)) -
                   *(f32 *)((char *)arg0 + 0x718)) -
                  *(f32 *)((char *)arg0 + 0x720)) -
                 *(f32 *)((char *)arg0 + 0x6F4);
    if (var_f23 > 0.0f) {
        temp_f22 = func_8024E454(arg1);
        temp_f21 = func_8024D388(arg1);
        temp_f20 = func_8024D274(arg1);
        temp_f0 = func_8024E410(arg1);
        next.x = *(f32 *)((char *)arg1 + 8);
        next.y = *(f32 *)((char *)arg1 + 0xC) + var_f23;
        next.z = *(f32 *)((char *)arg1 + 0x10);
        if (func_8024490C(arg1, *(Vec3 *)((char *)arg1 + 8), next,
                           &D_801040F0, temp_f22, temp_f21, temp_f20,
                           temp_f0) != 0) {
            temp_f1 = *(f32 *)((char *)*(void **)D_80103FCC + 0xE8) -
                      *(f32 *)((char *)arg1 + 0xC);
            *(f32 *)((char *)arg0 + 0x6EC) -= var_f23 - temp_f1;
            var_f23 = temp_f1;
        }
    }
    *(f32 *)((char *)arg0 + 0x6F4) += var_f23;
}

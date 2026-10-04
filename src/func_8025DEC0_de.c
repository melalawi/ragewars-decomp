#include "common/types.h"
#include "span_1000/code_8025DB64.h"
#include "types.h"


extern s32 D_80108080;



extern s32 func_80258A7C_de(void *arg0, s32 arg1, Vec3 arg2,
                         s32 arg3, s32 arg4, f32 arg5);

s32 func_8025DEC0_de(s32 arg0, Vec3 arg1, s32 arg4, s32 arg5, f32 arg6) {
    if (D_801427D0 != 0) {
        return -1;
    }
    return func_80258A7C_de(&D_80108080, (s16)arg0, arg1, arg4, arg5, arg6);
}

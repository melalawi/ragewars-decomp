#include "basetypes.h"

extern f32 func_80274B00(f32 arg0, f32 arg1);

s16 func_8025C27C(s16 arg0, s16 arg1) {
    f32 temp_f20;
    f32 temp_f21;
    temp_f21 = (f32)arg1;
    temp_f20 = (f32)arg0;
    return (s16)(s32)(func_80274B00(temp_f21, temp_f20) < 0.0f
                          ? temp_f20 - func_80274B00(temp_f21, temp_f20)
                          : temp_f20 + func_80274B00(temp_f21, temp_f20));
}

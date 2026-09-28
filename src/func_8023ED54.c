#include "basetypes.h"

extern f32 D_800D0648;
extern f32 D_800C87C8;

s32 func_8023ED54(void *arg0, void *arg1) {
    f32 temp_f2;
    s32 var_v0;

    temp_f2 = *(f32 *)((char *)arg1 + 0xCC);
    if (temp_f2 <= 0.0f) {
        if (*(s32 *)((char *)arg1 + 8) == 7) {
            return 0;
        }
        if ((u32) (*(s32 *)((char *)arg1 + 0) - 5) < 2) {
            return 0;
        }
        if ((temp_f2 * *(f32 *)((char *)arg0 + 0x80)) < -(D_800D0648 * D_800C87C8)) {
            return 0;
        }
    }
    var_v0 = 0;
    {
        f32 b = *(f32 *)((char *)arg1 + 0xCC);
        if (!(*(f32 *)((char *)arg0 + 0x17C) <= b)) {
            var_v0 = 1;
        }
    }
    return var_v0;
}

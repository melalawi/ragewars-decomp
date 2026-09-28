/* Sums the duration values from the active resource tracks. */
#include "basetypes.h"
typedef struct {s32 a; s32 *unk4;} State;
s32 *func_8028FD94(s32 *, s32);                     /* extern */
extern State *D_800E2830;

f32 func_804039C4(void) {
    f32 temp_f0;
    f32 var_f20;
    s32 *temp_v0;
    s32 var_s0;

    var_f20 = 0.0f;
    var_s0 = 0;
loop_1:
    if (var_s0 < *func_8028FD94(D_800E2830->unk4, 0)) {
        temp_v0 = func_8028FD94(func_8028FD94(func_8028FD94(D_800E2830->unk4, 0), var_s0), 0);
        temp_v0 = (s32 *)((char *)temp_v0 + temp_v0[1] * 0x24);
        temp_f0 = *(f32 *)temp_v0;
        var_s0 += 1;
        var_f20 += temp_f0;
        goto loop_1;
    }
    return var_f20;
}

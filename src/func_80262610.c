#include "basetypes.h"

extern f32 D_800C9348;

extern void *func_802604BC(void *arg0);
extern char *func_8028FD94(s32 *, s32);
extern f32 func_80273F54(f32, f32, f32);

void func_80262610(void *arg0, f32 arg1) {
    u8 *base;
    s32 count;
    s32 temp_f2;
    s32 temp_a0;
    s32 var_v1;
    f32 b_term;
    f32 e_term;

    base = (u8 *) func_8028FD94(func_802604BC(arg0), 0) + 8;
    count = *(s16 *) ((u8 *) arg0 + 8);
    var_v1 = count - 1;
    temp_f2 = (s32) arg1;
    temp_a0 = temp_f2 + 1;
    if (temp_a0 < var_v1) {
        var_v1 = temp_a0;
    }
    b_term = (f32) *(s16 *) (base + temp_f2 * 2) * D_800C9348;
    e_term = (f32) *(s16 *) (base + var_v1 * 2) * D_800C9348;
    func_80273F54(arg1 - (f32) temp_f2, b_term, e_term);
}

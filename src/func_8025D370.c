#include "basetypes.h"

extern char *func_8028FD94(s32 *, s32);
extern f64 D_800C90A8;
extern f32 D_800C90B0;

void func_8025D370(void *arg0, s32 arg1) {
    f64 var_f2;
    s32 temp_v0_2;
    void *temp_v0;

    temp_v0 = func_8028FD94(*(void **)((char *)*(void **)arg0 + 0x2B50), arg1 * 2);
    temp_v0_2 = *(s32 *)((char *)temp_v0 + 0);
    var_f2 = (f64) temp_v0_2;
    if (temp_v0_2 < 0) {
        var_f2 += D_800C90A8;
    }
    *(f32 *)((char *)arg0 + 0x20) = (f32) var_f2 * D_800C90B0;
    *(f32 *)((char *)arg0 + 0x24) = (f32) *(u16 *)((char *)temp_v0 + 4);
    func_8028FD94(*(void **)((char *)*(void **)arg0 + 0x2B50), (arg1 * 2) | 1);
}

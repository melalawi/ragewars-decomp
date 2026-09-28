#include "basetypes.h"

extern s32 D_800D0E58;
extern void func_80264268(void *arg0);
extern s32 D_8010F328;
extern s32 D_8010FC18[4];
extern u8 D_8010F3F4;
extern s32 D_8010EC90;
extern void func_80285D00(s32 *);

void func_8026497C(void) {
    u8 *var_s0;
    s32 var_s1;
    s32 var_v1;
    s32 var_a0;
    s32 temp_v0;

    if (D_800D0E58 != 0) {
        var_s1 = 0;
        var_s0 = &D_8010F328;
        do {
            func_80264268(var_s0);
            var_s1 += 1;
            var_s0 += 0x224;
        } while (var_s1 < 4);
        var_v1 = 0;
        var_a0 = 0;
        do {
            temp_v0 = D_8010FC18[var_v1];
            var_v1 += 1;
            *(s32 *)(&D_8010F3F4 + var_a0) = temp_v0;
            var_a0 += 0x224;
        } while (var_v1 < 4);
        func_80285D00(&D_8010EC90);
        D_800D0E58 = 0;
    }
}

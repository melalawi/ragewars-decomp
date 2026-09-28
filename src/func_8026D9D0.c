#include "basetypes.h"

extern void func_8026BC60(void);
extern void func_8026C020(void);
extern void func_80253B5C(s32 arg0, s32 arg1);
extern void func_802536F4(s32 arg0, s32 arg1);
extern s32 D_801153D0;
extern s32 D_801153D8[];

void func_8026D9D0(void) {
    s32 temp_s0;
    s32 var_s1;

    func_8026BC60();
    var_s1 = 0;
    func_8026C020();
    if (D_801153D0 > 0) {
        do {
            temp_s0 = D_801153D8[var_s1];
            func_80253B5C(0, temp_s0);
            func_802536F4(0, temp_s0);
            var_s1 += 1;
        } while (var_s1 < D_801153D0);
    }
}

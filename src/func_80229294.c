#include "basetypes.h"

extern void func_8022B5FC(void *arg0, f32 arg1, void *arg2);
extern void func_80216488(void *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800C7D30;
extern f32 D_800C7D38;
extern f32 D_800C7D3C;
extern f32 D_800D2988;

typedef struct {
    char data[24];
} Local;

void func_80229294(void *arg0) {
    volatile Local sp18;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f21;
    f32 temp_f2;
    f32 var_f20;
    f32 zero;
    s32 var_s2;
    s32 var_s3;
    void *temp_a0;
    void *temp_s0;

    zero = 0.0f;
    temp_f21 = *(&D_800C7D30 + 1);
    var_s3 = 0;
    var_s2 = 0x1248;
    do {
        temp_s0 = (char *)arg0 + var_s2;
        temp_f2 = *(f32 *)((char *)temp_s0 + 4);
        if (temp_f2 > zero) {
            temp_f1 = D_800D2988;
            var_f20 = *(f32 *)temp_s0 * temp_f1;
            temp_f1 = temp_f2 - temp_f1;
            var_f20 *= temp_f21;
            *(f32 *)((char *)temp_s0 + 4) = temp_f1;
            temp_f1 = *(f32 *)((char *)temp_s0 + 0x10) + (f32)(s32)var_f20;
            *(f32 *)((char *)temp_s0 + 0x10) = temp_f1;
            if (*(f32 *)((char *)temp_s0 + 4) <= zero) {
                temp_f0 = *(f32 *)((char *)temp_s0 + 0xC) * temp_f21;
                if (temp_f1 < temp_f0) {
                    var_f20 += temp_f0 - temp_f1;
                }
            }
            temp_a0 = *(void **)((char *)temp_s0 + 8);
            if (temp_a0 != 0 && *(u8 *)temp_a0 == 1 &&
                (*(s32 *)((char *)temp_a0 + 0x100) & 0x300000) &&
                (*(s32 *)((char *)temp_a0 + 0x122C) & 0x200)) {
                var_f20 *= D_800C7D38;
            }
            if (*(s32 *)((char *)temp_s0 + 0x14) != 0) {
                func_8022B5FC(arg0, 0.0933333337f, *(void **)((char *)temp_s0 + 8));
                if ((f32)*(s32 *)((char *)arg0 + 0x5E4) <= var_f20) {
                    var_f20 = D_800C7D3C;
                }
            }
            func_80216488((void *)&sp18, (s32)*(void **)((char *)temp_s0 + 8),
                          (s32)var_f20, 25.599998f, 0x100080, 0);
            func_80219A40(arg0, (char *)arg0 + 0x170, (void *)&sp18);
        }
        var_s3++;
        var_s2 += 0x18;
    } while (var_s3 < 5);
}

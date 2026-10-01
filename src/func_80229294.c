#include "basetypes.h"

extern void func_8022B5FC(void *arg0, f32 arg1, void *arg2);
extern void func_80216488(void *arg0, s32 arg1, s32 arg2, f32 arg3, s32 arg4, s32 arg5);
extern void func_80219A40(void *arg0, void *arg1, void *arg2);
extern f32 D_800C7D30[2];
typedef struct { f32 unk0; } func_80229294_G2;
extern func_80229294_G2 D_800C7D38;
typedef struct { f32 unk0; } func_80229294_G3;
extern func_80229294_G3 D_800C7D3C;
typedef struct { f32 unk0; } func_80229294_G4;
extern func_80229294_G4 D_800D2988;

typedef struct {
    char data[24];
} Local;

typedef struct func_80229294_S1 func_80229294_S1;
typedef struct func_80229294_S2 func_80229294_S2;
typedef struct func_80229294_S3 func_80229294_S3;
struct func_80229294_S1 {
    char pad0[0x4];
    f32 unk4;
    char pad4[0x8 - 0x4 - sizeof(f32)];
    void* unk8;
    char pad8[0xC - 0x8 - sizeof(void*)];
    f32 unkC;
    char padC[0x10 - 0xC - sizeof(f32)];
    f32 unk10;
    char pad10[0x14 - 0x10 - sizeof(f32)];
    s32 unk14;
};
struct func_80229294_S2 {
    char pad0[0x100];
    s32 unk100;
    char pad100[0x122C - 0x100 - sizeof(s32)];
    s32 unk122C;
};
struct func_80229294_S3 {
    char pad0[0x170];
    char unk170;
    char pad170[0x5E4 - 0x170 - sizeof(char)];
    s32 unk5E4;
};

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
    temp_f21 = D_800C7D30[1];
    var_s3 = 0;
    var_s2 = 0x1248;
    do {
        temp_s0 = (char *)arg0 + var_s2;
        temp_f2 = ((func_80229294_S1 *)(temp_s0))->unk4;
        if (temp_f2 > zero) {
            temp_f1 = D_800D2988.unk0;
            var_f20 = *(f32 *)temp_s0 * temp_f1;
            temp_f1 = temp_f2 - temp_f1;
            var_f20 *= temp_f21;
            ((func_80229294_S1 *)(temp_s0))->unk4 = temp_f1;
            temp_f1 = ((func_80229294_S1 *)(temp_s0))->unk10 + (f32)(s32)var_f20;
            ((func_80229294_S1 *)(temp_s0))->unk10 = temp_f1;
            if (((func_80229294_S1 *)(temp_s0))->unk4 <= zero) {
                temp_f0 = ((func_80229294_S1 *)(temp_s0))->unkC * temp_f21;
                if (temp_f1 < temp_f0) {
                    var_f20 += temp_f0 - temp_f1;
                }
            }
            temp_a0 = ((func_80229294_S1 *)(temp_s0))->unk8;
            if (temp_a0 != 0 && *(u8 *)temp_a0 == 1 &&
                (((func_80229294_S2 *)(temp_a0))->unk100 & 0x300000) &&
                (((func_80229294_S2 *)(temp_a0))->unk122C & 0x200)) {
                var_f20 *= D_800C7D38.unk0;
            }
            if (((func_80229294_S1 *)(temp_s0))->unk14 != 0) {
                func_8022B5FC(arg0, 0.0933333337f, ((func_80229294_S1 *)(temp_s0))->unk8);
                if ((f32)((func_80229294_S3 *)(arg0))->unk5E4 <= var_f20) {
                    var_f20 = D_800C7D3C.unk0;
                }
            }
            func_80216488((void *)&sp18, (s32)((func_80229294_S1 *)(temp_s0))->unk8,
                          (s32)var_f20, 25.599998f, 0x100080, 0);
            func_80219A40(arg0, &((func_80229294_S3 *)(arg0))->unk170, (void *)&sp18);
        }
        var_s3++;
        var_s2 += 0x18;
    } while (var_s3 < 5);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2B74_4 = 256.0f;
const float unbake_rodata_800C2B78_4 = 11.0f;
const float unbake_rodata_800C2B7C_4 = 255744.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7D34_4 = 256.0f;
const float unbake_rodata_800C7D38_4 = 11.0f;
const float unbake_rodata_800C7D3C_4 = 255744.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2EE8_4 = 256.0f;
const float unbake_rodata_800C2EEC_4 = 11.0f;
const float unbake_rodata_800C2EF0_4 = 255744.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2F28_4 = 256.0f;
const float unbake_rodata_800C2F2C_4 = 11.0f;
const float unbake_rodata_800C2F30_4 = 255744.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2C44_4 = 256.0f;
const float unbake_rodata_800C2C48_4 = 11.0f;
const float unbake_rodata_800C2C4C_4 = 255744.0f;
#endif

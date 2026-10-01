#include "basetypes.h"

typedef struct { f32 x, y, z; } Vec3;

extern f32 D_800C9BB0;
extern f32 D_800C9BB4;
extern f32 D_800C9BB8;
extern f32 D_800C9BBC;
extern f32 D_800C9BC0;
extern f32 D_800C9BC4;
extern f32 D_800D2648[];
extern f32 D_800D274C[];
extern void func_802720EC(f32 *);

typedef struct func_80277198_S1 func_80277198_S1;
struct func_80277198_S1 {
    char pad0[0x14];
    Vec3 unk14;
    char pad14[0xBB - 0x14 - sizeof(Vec3)];
    u8 unkBB;
};

s32 func_80277198(void *arg0, u32 arg1, u32 arg2, u32 arg3,
                  Vec3 *arg4, f32 *arg5) {
    f32 temp_f0;
    f32 var_f0;
    f32 var_f1;
    f32 var_f20;
    f32 var_f3;
    u8 temp_v1;

    var_f3 = *(f32 *)&arg1;
    var_f20 = 0.0f;
    if (!(D_800C9BB0 <= var_f3) && !(var_f3 <= D_800C9BB4) &&
        !(D_800C9BB0 <= *(f32 *)&arg2) && !(*(f32 *)&arg2 <= D_800C9BB4) &&
        !(D_800C9BB0 <= *(f32 *)&arg3) && !(*(f32 *)&arg3 <= D_800C9BB4)) {
        temp_v1 = ((func_80277198_S1 *)(arg0))->unkBB;
        switch (temp_v1) {
        case 0:
            var_f20 = (var_f3 * var_f3) + (*(f32 *)&arg2 * *(f32 *)&arg2) +
                      (*(f32 *)&arg3 * *(f32 *)&arg3);
            if (!(D_800C9BB0 < var_f20)) {
                var_f20 = D_800D2648[(s32)(var_f20 * D_800C9BB8)];
                goto shared;
            }
            goto fail;
        case 2:
            if (!(var_f3 <= 0.0f)) {
                var_f20 = (*(f32 *)&arg2 * *(f32 *)&arg2) +
                          (*(f32 *)&arg3 * *(f32 *)&arg3);
                if (!((var_f3 * var_f3) < var_f20)) {
                    var_f20 = D_800D274C[(s32)(var_f20 * D_800C9BBC)];
                    var_f20 /= var_f3;
                    goto shared;
                }
            }
            goto fail;
        case 1:
            if (var_f3 < 0.0f) {
                var_f3 = -var_f3;
            }
            var_f0 = *(f32 *)&arg2;
            *(f32 *)&arg1 = var_f3;
            if (var_f0 < 0.0f) {
                var_f0 = -var_f0;
            }
            var_f1 = *(f32 *)&arg3;
            *(f32 *)&arg2 = var_f0;
            if (var_f1 < 0.0f) {
                var_f1 = -var_f1;
            }
            *(f32 *)&arg3 = var_f1;
            var_f20 = var_f1;
            if (!(var_f0 <= var_f20)) {
                var_f20 = var_f0;
            }
            if (!(var_f3 <= var_f20)) {
                var_f20 = var_f3;
            }
            goto shared;
        default:
            goto shared;
        }
shared:
        var_f20 = D_800C9BC0 - var_f20;
        temp_f0 = *(f32 *)arg0;
        if (var_f20 < temp_f0) {
            var_f20 /= temp_f0;
        } else {
            var_f20 = D_800C9BC0;
        }
        if (((func_80277198_S1 *)(arg0))->unkBB == 1) {
            *arg4 = ((func_80277198_S1 *)(arg0))->unk14;
        } else {
            *arg4 = *(Vec3 *)&arg1;
        }
        func_802720EC(arg4);
        *arg5 = var_f20;
        return 1;
    } else {
fail:
        arg4->y = 0.0f;
        arg4->z = 0.0f;
        arg4->x = D_800C9BC4;
        *arg5 = 0.0f;
        return 0;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C49F0_4 = 1.0f;
const float unbake_rodata_800C49F4_4 = (-1.0f);
const float unbake_rodata_800C49F8_4 = 64.0f;
const float unbake_rodata_800C49FC_4 = 64.0f;
const float unbake_rodata_800C4A00_4 = 1.0f;
const float unbake_rodata_800C4A04_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9BB0_4 = 1.0f;
const float unbake_rodata_800C9BB4_4 = (-1.0f);
const float unbake_rodata_800C9BB8_4 = 64.0f;
const float unbake_rodata_800C9BBC_4 = 64.0f;
const float unbake_rodata_800C9BC0_4 = 1.0f;
const float unbake_rodata_800C9BC4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4D70_4 = 1.0f;
const float unbake_rodata_800C4D74_4 = (-1.0f);
const float unbake_rodata_800C4D78_4 = 64.0f;
const float unbake_rodata_800C4D7C_4 = 64.0f;
const float unbake_rodata_800C4D80_4 = 1.0f;
const float unbake_rodata_800C4D84_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4DB0_4 = 1.0f;
const float unbake_rodata_800C4DB4_4 = (-1.0f);
const float unbake_rodata_800C4DB8_4 = 64.0f;
const float unbake_rodata_800C4DBC_4 = 64.0f;
const float unbake_rodata_800C4DC0_4 = 1.0f;
const float unbake_rodata_800C4DC4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4AC0_4 = 1.0f;
const float unbake_rodata_800C4AC4_4 = (-1.0f);
const float unbake_rodata_800C4AC8_4 = 64.0f;
const float unbake_rodata_800C4ACC_4 = 64.0f;
const float unbake_rodata_800C4AD0_4 = 1.0f;
const float unbake_rodata_800C4AD4_4 = 1.0f;
#endif

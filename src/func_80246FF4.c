/* Update or blend object rotation when the movement state permits it. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad[2]; u16 unk2;} Sub;
typedef struct { char pad[0x14]; Sub *unk14; char pad18[0xe8]; u32 unk100;} Obj;
void func_8024D860(f32 *, void *);                     /* extern */
s32 func_8024E28C(void *);                          /* extern */
s32 func_8024E61C();                                /* extern */
void func_80270D40(void *, f32, void *, f32 *);        /* extern */
void func_802743F0(void *, f32 *);                     /* extern */
extern f32 D_800C8A10[], D_800C8A18[], D_800C8A20[], D_800D2988[];

typedef struct func_80246FF4_S1 func_80246FF4_S1;
struct func_80246FF4_S1 {
    char pad0[0x5C];
    char unk5C;
};

void func_80246FF4(Obj *arg0) {
    f32 vec[4];
    f32 var_f0;
    f32 var_f1;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 flags;
    void *temp_a0;
    void *var_a0;

    temp_v0 = arg0->unk100;
    flags = temp_v0 & 0x300000;
    if (!(temp_v0 & 1) && (temp_s2 = func_8024E61C(), (arg0->unk14 != NULL)) && (func_8024D860(vec, arg0), temp_s1 = arg0->unk14->unk2 & 1, (func_8024E28C(arg0) != 0))) {
        if (temp_s1 != 0) {
            vec[0] = vec[1] = vec[2] = 0.0f;
            vec[3] = D_800C8A10[1];
        }
        if (flags) {
            if ((!(arg0->unk100 & 0x1000) && (var_a0 = &((func_80246FF4_S1 *)(arg0))->unk5C, (temp_s2 != 0))) || (var_a0 = &((func_80246FF4_S1 *)(arg0))->unk5C, (temp_s1 != 0))) {
                func_802743F0(var_a0, vec);
            }
        } else {
            if ((temp_s2 != 0) && !(arg0->unk100 & 0x1000)) {
                var_f0 = D_800D2988[0]; var_f1 = D_800C8A18[0];
            } else {
                var_f0 = D_800D2988[0]; var_f1 = D_800C8A18[1];
            }
            var_f0 = var_f0 * var_f1;
            temp_a0 = &((func_80246FF4_S1 *)(arg0))->unk5C;
            if (var_f0 > D_800C8A20[0]) {
                var_f0 = D_800C8A20[0];
            }
            func_80270D40(temp_a0, var_f0, temp_a0, vec);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3854_4 = 1.0f;
const float unbake_rodata_800C3858_4 = 0.125f;
const float unbake_rodata_800C385C_4 = 0.0375000015f;
const float unbake_rodata_800C3860_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8A14_4 = 1.0f;
const float unbake_rodata_800C8A18_4 = 0.125f;
const float unbake_rodata_800C8A1C_4 = 0.0375000015f;
const float unbake_rodata_800C8A20_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3BD4_4 = 1.0f;
const float unbake_rodata_800C3BD8_4 = 0.125f;
const float unbake_rodata_800C3BDC_4 = 0.0375000015f;
const float unbake_rodata_800C3BE0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3C14_4 = 1.0f;
const float unbake_rodata_800C3C18_4 = 0.125f;
const float unbake_rodata_800C3C1C_4 = 0.0375000015f;
const float unbake_rodata_800C3C20_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3924_4 = 1.0f;
const float unbake_rodata_800C3928_4 = 0.125f;
const float unbake_rodata_800C392C_4 = 0.0375000015f;
const float unbake_rodata_800C3930_4 = 1.0f;
#endif

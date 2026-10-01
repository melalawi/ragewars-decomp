/* Tests a point against every edge plane of a polygon. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct {char p[0x14];s32 unk14;} Arg;
void func_80271FD8(f32 *, void *, void *);             /* extern */
void func_80272088(f32 *, void *, f32 *);              typedef struct func_802414E4_S1 func_802414E4_S1;
struct func_802414E4_S1 {
    char pad0[0x18];
    char unk18;
    char pad18[0x48 - 0x18 - sizeof(char)];
    char unk48;
};

/* extern */

s32 func_802414E4(Arg *arg0, void *arg1) {
    f32 sp10[3];
    f32 sp20[3];
    f32 sp30[3];
    s32 temp_v1;
    void *var_s1;
    s32 var_s0;
    void *var_s2;

    temp_v1 = arg0->unk14;
    if (temp_v1 == 1) {
        return 1;
    }
    var_s2 = (char *)arg0 + ((temp_v1 * 0xC) + 0xC);
    var_s1 = &((func_802414E4_S1 *)(arg0))->unk18;
    var_s0 = temp_v1;
    var_s0 = var_s0 - 1;
    for (; var_s0 != -1; var_s1 += 0xC, var_s0--) {
        func_80271FD8(sp20, var_s1, var_s2);
        func_80272088(sp10, &((func_802414E4_S1 *)(arg0))->unk48, sp20);
        func_80271FD8(sp30, arg1, var_s2);
        var_s2 = var_s1;
        if (sp10[0]*sp30[0]+sp10[1]*sp30[1]+sp10[2]*sp30[2] > 0.0f) return 0;
    }
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DCF38_2C[] = {0x0043D308U, 0x0043D318U, 0x0043D328U, 0x0043D338U, 0x0043D348U, 0x0043D358U, 0x0043D368U, 0x0043D378U, 0x0043D388U, 0x0043D398U, 0x0043D3A8U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1FFC_4 = 4.0f;
const float unbake_rodata_800E2000_4 = 255.0f;
const float unbake_rodata_800E2004_4 = 150.0f;
const float unbake_rodata_800E2008_4 = 255.0f;
const float unbake_rodata_800E200C_4 = 4.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E59D0_24[] = {0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x07, 0x00, 0x0F, 0x00, 0x1F, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0xFF, 0x01, 0xFF, 0x03, 0xFF, 0x07, 0xFF, 0x0F, 0xFF, 0x1F, 0xFF, 0x3F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00};
const unsigned char unbake_rodata_800E59F4_24[] = {0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x80, 0x01, 0x00, 0x02, 0x00, 0x04, 0x00, 0x08, 0x00, 0x10, 0x00, 0x20, 0x00, 0x40, 0x00, 0x80, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DF79C_4[] = {0x80, 0x0D, 0xCA, 0x84};
const unsigned char unbake_rodata_800DF7A0_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800DD540_4 = 1.0f;
#endif

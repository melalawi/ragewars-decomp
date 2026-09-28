#include "basetypes.h"
#define NULL ((void *)0)
#define AT(t,p,n) (*(t *)((char *)(p)+(n)))
/* Loads a resource block on demand and updates its relocated copies. */
extern s32 func_80252FFC(s32),func_802A1E8C(void *,void *);
extern void func_802A1724(s32,s32,s32),func_802A1EB0(s32),func_802A1ED4(s32,s32,s32,s32),func_802A1F60(s32,s32,s32),func_802A28CC(void),func_8040F75C(s32,s32,s32);
extern char D_801539B4[],D_800E10E0[]; extern s32 D_80153C44; extern volatile s32 D_80153C48; extern s32 D_80153C50; extern s32 D_80153C54,D_800E2AC4[];
void func_8041174C(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_s0;

    s32 temp_v0_2;
    s32 var_v0;
    u16 *temp_v1;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1_2;
    s32 temp_v1_3;

    temp_v1 = (u16 *)((arg0 * 2) + D_80153C50);
    *temp_v1 += 1;
    if (D_80153C54 == 1) {
        temp_s0 = arg0 * 0xC;
        temp_v1_2 = temp_s0 + D_80153C44;
        temp_a0 = AT(s32,temp_v1_2,0x8);
        if (temp_a0 != 0) {
            func_802A1724(temp_a0, AT(s32,temp_s0 + D_80153C48,8), AT(s32,temp_v1_2,0x4));
            temp_v0 = temp_s0 + D_80153C44;
            temp_a0_2 = AT(s32,temp_v0,0x8);
            func_8040F75C(temp_a0_2, temp_a0_2, AT(s32,temp_v0,0x0) - AT(s32,D_80153C44,0));
                    goto block_3;
        }
        goto block_4;
    }
block_3:
    if (AT(s32,(arg0*3)*4+D_80153C44,8) == 0) {
block_4:
        func_802A28CC();
        temp_s0 = arg0 * 0xC;
        AT(s32,temp_s0 + D_80153C44,8) = func_80252FFC(AT(s32,temp_s0 + D_80153C44,4));
        temp_v0_2 = func_802A1E8C(D_801539B4, D_800E10E0);
        AT(s32,D_801539B4,-4) = temp_v0_2;
        func_802A1F60(temp_v0_2, AT(s32,D_801539B4,0x23C) + AT(s32,temp_s0+D_80153C44,0), 0);
        temp_v0_3 = temp_s0 + D_80153C44;
        func_802A1ED4(AT(s32,temp_v0_3,0x8), AT(s32,temp_v0_3,0x4), 1, AT(s32,D_801539B4,-4));
        if (*D_800E2AC4 != 0) {
            AT(s32,temp_s0 + D_80153C48,8) = func_80252FFC(AT(s32,temp_s0 + D_80153C44,4));
            temp_v1_3 = temp_s0 + D_80153C44;
            func_802A1724(AT(s32,temp_s0 + D_80153C48,8), AT(s32,temp_v1_3,0x8), AT(s32,temp_v1_3,0x4));
        }
        func_802A1EB0(AT(s32,D_801539B4,-4));
        AT(s32,D_801539B4,-4) = 0;
        temp_v0_4 = temp_s0 + D_80153C44;
        temp_a0_3 = AT(s32,temp_v0_4,0x8);
        func_8040F75C(temp_a0_3, temp_a0_3, AT(s32,temp_v0_4,0x0) - AT(s32,D_80153C44,0));
        func_802A28CC();
    }
}

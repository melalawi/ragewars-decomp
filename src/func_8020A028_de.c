#include "span_1000/code_80208410.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern f32 func_80274564_de(f32 arg0);
extern f32 func_80216F44_de(s32 a0, s32 a1, s32 a2, s32 a3);


















void func_8020A028_de(void *arg0, void *arg1)
{
    s32 v0;
    f32 f20;
    f32 f1;
    f32 new_var;
    s32 s1;

    v0 = ((func_8020A028_S1 *)(arg0))->unk2EC;
    if (v0 > 0) {
        v0 = v0 - 1;
        ((func_8020A028_S1 *)(arg0))->unk2EC = v0;
        if (v0 == 0) {
            f20 = D_800C1CF4_de;
            if (func_80274564_de(f20) < D_800C1CF8_de) {
                ((func_8020A028_S1 *)(arg0))->unk2EC = -1;
                ((func_8020A028_S1 *)(arg0))->unk2E4 = ((func_8020A028_S2 *)(arg1))->unk1C;
                ((func_8020A028_S1 *)(arg0))->unk2E4 = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2E4
                    + (func_80274564_de(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk20));
                ((func_8020A028_S1 *)(arg0))->unk2E8 = ((func_8020A028_S2 *)(arg1))->unk24;
                ((func_8020A028_S1 *)(arg0))->unk2E8 = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2E8
                    + (func_80274564_de(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk28));
            } else {
                ((func_8020A028_S1 *)(arg0))->unk2EC = ((func_8020A028_S2 *)(arg1))->unk10;
                ((func_8020A028_S1 *)(arg0))->unk2EC = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2EC
                    + (func_80274564_de(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk14));
            }
        }
    }
    if (((func_8020A028_S1 *)(arg0))->unk2EC == -1) {
        v0 = ((func_8020A028_S1 *)(arg0))->unk2E8 - 1;
        ((func_8020A028_S1 *)(arg0))->unk2E8 = v0;
        if (v0 == 0) {
            f20 = D_800C1CFC_de;
            ((func_8020A028_S1 *)(arg0))->unk2EC = ((func_8020A028_S2 *)(arg1))->unk10;
            ((func_8020A028_S1 *)(arg0))->unk2EC = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2EC
                + (func_80274564_de(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk14));
            ((func_8020A028_S1 *)(arg0))->unk2E4 = ((func_8020A028_S2 *)(arg1))->unk0;
            ((func_8020A028_S1 *)(arg0))->unk2E4 = (s32) ((f32) ((func_8020A028_S1 *)(arg0))->unk2E4
                + (func_80274564_de(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unk4));
            ((func_8020A028_S1 *)(arg0))->unk2E8 = ((func_8020A028_S2 *)(arg1))->unk8;
            f1 = (f32) ((func_8020A028_S1 *)(arg0))->unk2E8
                + (func_80274564_de(f20) * (f32) ((func_8020A028_S2 *)(arg1))->unkC);
            ((func_8020A028_S1 *)(arg0))->unk240 = 0;
            ((func_8020A028_S1 *)(arg0))->unk2E8 = (s32) f1;
        } else {
            ((func_8020A028_S1 *)(arg0))->unk240 = 1;
        }
    }
    v0 = ((func_8020A028_S1 *)(arg0))->unk2E4;
    if (v0 > 0) {
        ((func_8020A028_S1 *)(arg0))->unk2E4 = v0 - 1;
        return;
    }
    if (((func_8020A028_S1 *)(arg0))->unk240 > 0) {
        s1 = ((func_8020A028_S2 *)(arg1))->unk1C;
        new_var = func_80274564_de(D_800C1D00_de);
        if (1) {
            f20 = D_800C1D04_de;
            s1 = (s32) ((f32) s1 + (new_var * (f32) ((func_8020A028_S2 *)(arg1))->unk20));
        }
    } else {
        s1 = ((func_8020A028_S2 *)(arg1))->unk0;
        s1 = (s32) ((f32) s1 + (func_80274564_de(D_800C1D08_de) * (f32) ((func_8020A028_S2 *)(arg1))->unk4));
        f20 = D_800C1D0C_de;
    }
    {
        void *p = ((func_8020A028_S1 *)(arg0))->unk64;
        void *q = ((func_8020A028_S3 *)(p))->unk1D8;
        if (!(f20 < func_80216F44_de(((func_8020A028_S1 *)(arg0))->unk0,
                                    ((func_8020A028_S4 *)(q))->unk8,
                                    ((func_8020A028_S4 *)(q))->unkC,
                                    ((func_8020A028_S4 *)(q))->unk10))) {
            ((func_8020A028_S1 *)(arg0))->unk23C = 1;
            ((func_8020A028_S1 *)(arg0))->unk2E4 = s1;
        }
    }
}

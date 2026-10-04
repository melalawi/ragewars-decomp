#include "common/types.h"
#include "span_1000/code_802A6488.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void func_80270910_de(f32 *, s32);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272828_de(f32 *arg0);
extern void func_802A25D0_de(void *arg0, void *arg1, f32 *arg2);










void func_802A58B0_de(void *arg0, void *arg1, s32 arg2) {
    f32 local[16];
    f32 scale;
    f32 zero;
    void *node;

    node = ((func_802A67D0_S1 *)(arg0))->unk7528;
    if (node != 0) {
        zero = 0.0f;
        do {
            if (((func_802A68A0_S2 *)(node))->unk1C == arg1 &&
                ((func_802A68A0_S2 *)(node))->unk24 > zero &&
                ((func_802A68A0_S2 *)(node))->unk24 > zero) {
                func_80270910_de(local, arg2);
                scale = D_800C5E98_de;
                if (((func_80204468_S3 *)(((func_802A68A0_S3 *)(arg1))->unk118))->unk14 != 0) {
                    scale = D_800C5E9C_de;
                }
                func_8027347C_de(local, scale, scale, scale);
                func_80272828_de(local);
                func_802A25D0_de(arg0, node, local);
            }
            node = ((func_802A68A0_S2 *)(node))->unk4;
        } while (node != 0);
    }
}

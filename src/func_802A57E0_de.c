#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802A25C4.h"
#include "types.h"

extern void func_80272FBC_de(f32 *arg0, f32 *arg1);
extern void func_8027347C_de(void *arg0, f32 sx, f32 sy, f32 sz);
extern void func_80272828_de(f32 *arg0);
extern void func_802A25D0_de(void *arg0, void *arg1, f32 *arg2);









void func_802A57E0_de(void *arg0, s32 arg1, char *arg2) {
    f32 sp10[16];
    f32 temp;
    f32 zero;
    void *node;

    node = ((func_802A67D0_S1 *)(arg0))->unk7528;
    if (node != 0) {
        zero = 0.0f;
        temp = D_800C5E94_de;
        do {
            if (((func_802A67D0_S2 *)(node))->unk1C == arg1 && ((func_802A67D0_S2 *)(node))->unk24 > zero) {
                func_80272FBC_de(sp10, (f32 *)(arg2 + (((func_80205628_S3 *)(((func_802A67D0_S2 *)(node))->unk8))->unkC << 6)));
                func_8027347C_de(sp10, temp, temp, temp);
                func_80272828_de(sp10);
                func_802A25D0_de(arg0, node, sp10);
            }
            node = ((func_802A67D0_S2 *)(node))->unk4;
        } while (node != 0);
    }
}

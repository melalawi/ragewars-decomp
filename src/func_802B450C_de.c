#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B4730.h"
#include "types.h"

extern s32 D_002B5570;
extern s32 D_002B5730;

void func_802B53E0_de(void *arg0, void *a, void *b, s32 c);
s32 func_802B0340_de(s32 a, s32 b, s32 c, s32 d, s32 e);

void func_802B450C_de(void *arg0, s32 arg1) {
    s32 result;
    f32 k;

    func_802B53E0_de(arg0, &D_002B5570, &D_002B5730, 1);
    result = func_802B0340_de(0, 0, arg1, 1, 0x20);
    k = D_800C75E0_de;
    ((func_802B95DC_S1 *)(arg0))->unk14 = result;
    ((func_802B95DC_S1 *)(arg0))->unk20 = 0;
    ((func_802B95DC_S1 *)(arg0))->unk24 = 1;
    ((func_802B95DC_S1 *)(arg0))->unk30 = 0;
    ((func_802B95DC_S1 *)(arg0))->unk1C = 0;
    ((func_802B95DC_S1 *)(arg0))->unk28 = 0;
    ((func_802B95DC_S1 *)(arg0))->unk2C = 0;
    ((func_802B95DC_S1 *)(arg0))->unk18 = k;
}

extern s32 D_002B6380;
extern s32 D_002B6480;
void func_802B4598_de(void *arg0) {
    func_802B53E0_de(arg0, (s32) &D_002B6380, (s32) &D_002B6480, 3);
    (((struct func_8028DA50_S1 *) ((s8 *) arg0))->unk14) = 0;
    (((struct func_8028DA50_S1 *) ((s8 *) arg0))->unk18) = 1;
}

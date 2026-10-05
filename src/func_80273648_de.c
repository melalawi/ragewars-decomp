#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8027302C.h"
#include "types.h"

extern f32 func_802B7130_de(f32 arg0);
extern f32 func_802B6560_de(f32 arg0);
extern f32 D_800C48F8_de;




void func_80273648_de(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 zero;
    f32 identity;

    sin_v = func_802B7130_de(arg1);
    zero = 0;
    identity = D_800C48F8_de;
    ((func_80272848_S1 *)(m))->unk24 = -sin_v;
    ((func_80272848_S1 *)(m))->unk18 = sin_v;
    ((func_80272848_S1 *)(m))->unk4 = zero;
    ((func_80272848_S1 *)(m))->unk10 = zero;
    ((func_80272848_S1 *)(m))->unk8 = zero;
    ((func_80272848_S1 *)(m))->unk20 = zero;
    ((func_80272848_S1 *)(m))->unk38 = zero;
    ((func_80272848_S1 *)(m))->unk34 = zero;
    ((func_80272848_S1 *)(m))->unk30 = zero;
    ((func_80272848_S1 *)(m))->unk2C = zero;
    ((func_80272848_S1 *)(m))->unk1C = zero;
    ((func_80272848_S1 *)(m))->unkC = zero;
    ((func_80272848_S1 *)(m))->unk3C = identity;
    ((func_80272848_S1 *)(m))->unk0 = identity;
    cos_v = func_802B6560_de(arg1);
    ((func_80272848_S1 *)(m))->unk28 = cos_v;
    ((func_80272848_S1 *)(m))->unk14 = cos_v;
}

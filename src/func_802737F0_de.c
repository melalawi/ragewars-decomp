#include "span_1000/code_80273744.h"
#include "types.h"

extern f32 func_802B7130_de(f32 arg0);
extern f32 func_802B6560_de(f32 arg0);




void func_802737F0_de(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802B7130_de(arg1);
    cos_v = func_802B6560_de(arg1);
    neg_sin = -sin_v;

    a = ((func_80273860_S1 *)(m))->unk10;
    ((func_80273860_S1 *)(m))->unk10 = (cos_v * a) + (sin_v * ((func_80273860_S1 *)(m))->unk20);
    ((func_80273860_S1 *)(m))->unk20 = (neg_sin * a) + (cos_v * ((func_80273860_S1 *)(m))->unk20);

    a = ((func_80273860_S1 *)(m))->unk14;
    ((func_80273860_S1 *)(m))->unk14 = (cos_v * a) + (sin_v * ((func_80273860_S1 *)(m))->unk24);
    ((func_80273860_S1 *)(m))->unk24 = (neg_sin * a) + (cos_v * ((func_80273860_S1 *)(m))->unk24);

    a = ((func_80273860_S1 *)(m))->unk18;
    ((func_80273860_S1 *)(m))->unk18 = (cos_v * a) + (sin_v * ((func_80273860_S1 *)(m))->unk28);
    ((func_80273860_S1 *)(m))->unk28 = (neg_sin * a) + (cos_v * ((func_80273860_S1 *)(m))->unk28);
}

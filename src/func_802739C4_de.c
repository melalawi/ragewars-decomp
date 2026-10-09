#include "span_1000/code_8027302C.h"
#include "types.h"







void func_802739C4_de(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802B7130_de(arg1);
    cos_v = func_802B6560_de(arg1);
    neg_sin = -sin_v;

    a = ((func_80273A34_S1 *)(m))->unk0;
    ((func_80273A34_S1 *)(m))->unk0 = (cos_v * a) + (neg_sin * ((func_80273A34_S1 *)(m))->unk20);
    ((func_80273A34_S1 *)(m))->unk20 = (sin_v * a) + (cos_v * ((func_80273A34_S1 *)(m))->unk20);

    a = ((func_80273A34_S1 *)(m))->unk4;
    ((func_80273A34_S1 *)(m))->unk4 = (cos_v * a) + (neg_sin * ((func_80273A34_S1 *)(m))->unk24);
    ((func_80273A34_S1 *)(m))->unk24 = (sin_v * a) + (cos_v * ((func_80273A34_S1 *)(m))->unk24);

    a = ((func_80273A34_S1 *)(m))->unk8;
    ((func_80273A34_S1 *)(m))->unk8 = (cos_v * a) + (neg_sin * ((func_80273A34_S1 *)(m))->unk28);
    ((func_80273A34_S1 *)(m))->unk28 = (sin_v * a) + (cos_v * ((func_80273A34_S1 *)(m))->unk28);
}

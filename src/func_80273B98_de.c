#include "span_1000/code_8027302C.h"
#include "types.h"







void func_80273B98_de(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802B7130_de(arg1);
    cos_v = func_802B6560_de(arg1);
    neg_sin = -sin_v;

    a = ((func_80273C08_S1 *)(m))->unk0;
    ((func_80273C08_S1 *)(m))->unk0 = (cos_v * a) + (sin_v * ((func_80273C08_S1 *)(m))->unk10);
    ((func_80273C08_S1 *)(m))->unk10 = (neg_sin * a) + (cos_v * ((func_80273C08_S1 *)(m))->unk10);

    a = ((func_80273C08_S1 *)(m))->unk4;
    ((func_80273C08_S1 *)(m))->unk4 = (cos_v * a) + (sin_v * ((func_80273C08_S1 *)(m))->unk14);
    ((func_80273C08_S1 *)(m))->unk14 = (neg_sin * a) + (cos_v * ((func_80273C08_S1 *)(m))->unk14);

    a = ((func_80273C08_S1 *)(m))->unk8;
    ((func_80273C08_S1 *)(m))->unk8 = (cos_v * a) + (sin_v * ((func_80273C08_S1 *)(m))->unk18);
    ((func_80273C08_S1 *)(m))->unk18 = (neg_sin * a) + (cos_v * ((func_80273C08_S1 *)(m))->unk18);
}

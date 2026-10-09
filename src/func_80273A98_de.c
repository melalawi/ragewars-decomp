#include "span_1000/code_8027302C.h"
#include "types.h"







void func_80273A98_de(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802B7130_de(arg1);
    cos_v = func_802B6560_de(arg1);
    neg_sin = -sin_v;

    a = ((func_80273B08_S1 *)(m))->unk0;
    ((func_80273B08_S1 *)(m))->unk0 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk8 * sin_v);
    ((func_80273B08_S1 *)(m))->unk8 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk8 * cos_v);

    a = ((func_80273B08_S1 *)(m))->unk10;
    ((func_80273B08_S1 *)(m))->unk10 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk18 * sin_v);
    ((func_80273B08_S1 *)(m))->unk18 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk18 * cos_v);

    a = ((func_80273B08_S1 *)(m))->unk20;
    ((func_80273B08_S1 *)(m))->unk20 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk28 * sin_v);
    ((func_80273B08_S1 *)(m))->unk28 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk28 * cos_v);

    a = ((func_80273B08_S1 *)(m))->unk30;
    ((func_80273B08_S1 *)(m))->unk30 = (a * cos_v) + (((func_80273B08_S1 *)(m))->unk38 * sin_v);
    ((func_80273B08_S1 *)(m))->unk38 = (a * neg_sin) + (((func_80273B08_S1 *)(m))->unk38 * cos_v);
}

#include "span_1000/code_8027302C.h"
#include "types.h"

extern f32 func_802B7130_de(f32 arg0);
extern f32 func_802B6560_de(f32 arg0);




void func_802738C0_de(void *arg0, f32 arg1) {
    char *m = (char *) arg0;
    f32 sin_v;
    f32 cos_v;
    f32 neg_sin;
    f32 a;

    sin_v = func_802B7130_de(arg1);
    cos_v = func_802B6560_de(arg1);
    neg_sin = -sin_v;

    a = ((func_80273930_S1 *)(m))->unk4;
    ((func_80273930_S1 *)(m))->unk4 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk8 * neg_sin);
    ((func_80273930_S1 *)(m))->unk8 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk8 * cos_v);

    a = ((func_80273930_S1 *)(m))->unk14;
    ((func_80273930_S1 *)(m))->unk14 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk18 * neg_sin);
    ((func_80273930_S1 *)(m))->unk18 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk18 * cos_v);

    a = ((func_80273930_S1 *)(m))->unk24;
    ((func_80273930_S1 *)(m))->unk24 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk28 * neg_sin);
    ((func_80273930_S1 *)(m))->unk28 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk28 * cos_v);

    a = ((func_80273930_S1 *)(m))->unk34;
    ((func_80273930_S1 *)(m))->unk34 = (a * cos_v) + (((func_80273930_S1 *)(m))->unk38 * neg_sin);
    ((func_80273930_S1 *)(m))->unk38 = (a * sin_v) + (((func_80273930_S1 *)(m))->unk38 * cos_v);
}

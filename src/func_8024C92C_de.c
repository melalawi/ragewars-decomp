#include "common/types.h"
#include "span_1000/code_8024C444.h"
#include "span_1000/types.h"
#include "types.h"





extern char *func_8028FDB4_de(s32 *, s32);










void func_8024C92C_de(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec_func_8024C92C_de *recs;
    void *base;
    char *a;
    f32 scale;

    idx = *(s16 *)(((func_8024C91C_S1 *)(o))->unk0 + arg1 * 4);
    if (idx == -1) {
        recs = ((func_8024C91C_S1 *)(o))->unk4;
        *(Triple *)arg2 = *(Triple *)&recs[arg1];
        return;
    }
    base = func_8028FDB4_de(((func_8024C91C_S1 *)(o))->unk8, (s32) idx);
    a = (char *)base + (((func_8024C91C_S1 *)(o))->unk18) * 4;
    base = (char *)base + (((func_8024C91C_S1 *)(o))->unk1C) * 4;

    scale = ((func_8024C91C_S1 *)(o))->unk20;

    ((func_8024C864_S1 *)(arg2))->unk0 = ((func_8024C864_S1 *)(a))->unk0 + scale * (((func_8024C864_S1 *)(base))->unk0 - ((func_8024C864_S1 *)(a))->unk0);
    ((func_8024C864_S1 *)(arg2))->unk4 = ((func_8024C864_S1 *)(a))->unk4 + scale * (((func_8024C864_S1 *)(base))->unk4 - ((func_8024C864_S1 *)(a))->unk4);
    ((func_8024C864_S1 *)(arg2))->unk8 = ((func_8024C864_S1 *)(a))->unk8 + scale * (((func_8024C864_S1 *)(base))->unk8 - ((func_8024C864_S1 *)(a))->unk8);
}

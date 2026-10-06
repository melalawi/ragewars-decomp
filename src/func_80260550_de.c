#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8025E568.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void func_80270AAC_de(void *arg0, s32 arg1, void *arg2, void *arg3);











void func_80260550_de(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *)arg0;
    s16 idx;
    char *rec;
    void *base;
    f32 scale;

    idx = ((struct func_8025E52C_S1 *) (((ObjectLinks24_2 *) o)->unk_0 + (arg1 * 4)))->unk2;
    if (idx == -1) {
        rec = ((ObjectLinks24_2 *)(o))->unk_4 + arg1 * 0x14;
        scale = ((func_802077F4_S2 *)(&D_800C4168_de))->unk4;
        ((Vector4f *)(arg2))->x = (f32)(((ObjectState14 *)(rec))->unk_C) * scale;
        ((Vector4f *)(arg2))->y = (f32)(((ObjectState14 *)(rec))->unk_E) * scale;
        ((Vector4f *)(arg2))->z = (f32)(((ObjectState14 *)(rec))->unk_10) * scale;
        ((Vector4f *)(arg2))->w = (f32)(((ObjectState14 *)(rec))->unk_12) * scale;
        return;
    }
    base = func_8028FDB4_de(((ObjectLinks24_2 *)(o))->unk_C, (s32) idx);
    func_80270AAC_de(arg2, ((ObjectLinks24_2 *)(o))->unk_20,
                  (char *)base + (((ObjectLinks24_2 *)(o))->unk_10) * 4,
                  (char *)base + (((ObjectLinks24_2 *)(o))->unk_14) * 4);
}

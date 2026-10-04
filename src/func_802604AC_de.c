#include "common/types.h"
#include "span_1000/code_8025E5D0.h"
#include "types.h"





extern void *func_8028FDB4_de(void *arg0, s32 arg1);
extern void func_80271FC8_de(void *arg0, s32 arg1, void *arg2, void *arg3);




void func_802604AC_de(void *arg0, s32 arg1, void *arg2) {
    char *o = (char *) arg0;
    s16 idx;
    Rec_func_8024C92C_de *recs;
    void *base;

    idx = *(s16 *)(((func_802604CC_S1 *)(o))->unk0 + arg1 * 4);
    if (idx == -1) {
        recs = ((func_802604CC_S1 *)(o))->unk4;
        *(Triple *)arg2 = *(Triple *)&recs[arg1];
        return;
    }
    base = func_8028FDB4_de(((func_802604CC_S1 *)(o))->unk8, (s32) idx);
    func_80271FC8_de(arg2, ((func_802604CC_S1 *)(o))->unk20,
                  (char *)base + (((func_802604CC_S1 *)(o))->unk18) * 4,
                  (char *)base + (((func_802604CC_S1 *)(o))->unk1C) * 4);
}

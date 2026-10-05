#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802AFEAC.h"
#include "types.h"

extern void func_802B2480_de(void *, void * *);




void func_802AFFC0_de(void *arg0, void *arg1, s32 arg2) {
    s32 i;
    char *p;

    i = 0;
    ((func_80255D10_S1 *)(arg0))->unk10 = 0;
    ((func_80255D10_S1 *)(arg0))->unk8 = 0;
    ((func_80255D10_S1 *)(arg0))->unkC = 0;
    ((func_80255D10_S1 *)(arg0))->unk0 = 0;
    ((func_80255D10_S1 *)(arg0))->unk4 = 0;
    if (arg2 > 0) {
        p = (char *)arg1;
        do {
            func_802B2480_de(p, arg0);
            i += 1;
            p += 0x1C;
        } while (i < arg2);
    }
}

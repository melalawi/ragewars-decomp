#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802AFEAC.h"
#include "types.h"

extern s32 func_802BD170_de(s32);
extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void *arg1);








void func_802B0258_de(void *arg0, s16 arg1) {
    s32 saved;
    char *cur;
    char *next;

    saved = func_802BD170_de(1);
    cur = ((func_8020C9B0_S1 *)(arg0))->unk8;
    if (cur != 0) {
        do {
            next = ((func_802B5328_S2 *)(cur))->unk0;
            if (((func_802B5328_S2 *)(cur))->unkC == arg1) {
                if (next != 0) {
                    ((func_80254D70_S2 *)(next))->unk8 = ((func_80254D70_S2 *)(next))->unk8 + ((func_802B5328_S2 *)(cur))->unk8;
                }
                func_802B2450_de(cur);
                func_802B2480_de(cur, arg0);
            }
            cur = next;
        } while (cur != 0);
    }
    func_802BD170_de(saved);
}

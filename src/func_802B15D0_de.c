#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B0388.h"
#include "types.h"

extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void **arg1);








s32 func_802B15D0_de(void *arg0, s32 arg1, s32 arg2) {
    s32 amount;
    s32 total;
    s32 result;
    char *next;
    char *cur;

    total = 0;
    cur = ((func_802B66A0_S1 *)(arg0))->unk50;
    result = 1;
    if (cur != 0) {
        do {
            amount = ((func_802B66A0_S2 *)(cur))->unk8;
            next = ((func_802B66A0_S2 *)(cur))->unk0;
            total += amount;
            if (((func_802B66A0_S2 *)(cur))->unkC == 5 && ((func_802B66A0_S2 *)(cur))->unk10 == arg1) {
                if (arg2 < total) {
                    if (next != 0) {
                        ((func_80254D70_S2 *)(next))->unk8 = ((func_80254D70_S2 *)(next))->unk8 + amount;
                    }
                    func_802B2450_de(cur);
                    func_802B2480_de(cur, &((func_802B66A0_S1 *)(arg0))->unk48);
                    goto done;
                }
                result = 0;
                goto done;
            }
            cur = next;
        } while (cur != 0);
    }
done:
    return result;
}

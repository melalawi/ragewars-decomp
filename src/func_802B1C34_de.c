#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B0388.h"
#include "types.h"

typedef void (*Callback802B6D04)(void *arg0);

extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void **arg1);










void func_802B1C34_de(void *arg0, void *arg1) {
    char *cur;
    char *next;
    u16 type;
    s32 type16;

    cur = ((func_802B6D04_S1 *)(arg0))->unk50;
    if (cur != 0) {
        type16 = 0x16;
        do {
            type = ((func_802B6D04_S2 *)(cur))->unkC;
            next = ((func_802B6D04_S2 *)(cur))->unk0;
            if ((type == 0x16 || type == 0x17) &&
                ((func_802B6D04_S2 *)(cur))->unk10 == arg1) {
                ((Callback802B6D04)((func_802B6D04_S1 *)(arg0))->unk78)(
                    ((func_802B6D04_S2 *)(cur))->unk14);
                func_802B2450_de(cur);
                if (next != 0) {
                    ((func_80254D70_S2 *)(next))->unk8 = ((func_80254D70_S2 *)(next))->unk8 +
                                        ((func_802B6D04_S2 *)(cur))->unk8;
                }
                func_802B2480_de(cur, &((func_802B6D04_S1 *)(arg0))->unk48);
                if ((short)type == type16) {
                    ((func_802B6D04_S4 *)(arg1))->unk37 &= 0xFE;
                } else {
                    ((func_802B6D04_S4 *)(arg1))->unk37 &= 0xFD;
                }
                if (((func_802B6D04_S4 *)(arg1))->unk37 == 0) {
                    break;
                }
            }
            cur = next;
        } while (cur != 0);
    }
}

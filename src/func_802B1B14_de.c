#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802B0388.h"
#include "types.h"



extern void func_802B2450_de(void *arg0);
extern void func_802B2480_de(void *arg0, void **arg1);
extern void func_802B3470_de(void *arg0, void *arg1, s16 arg2);
extern void func_802B3480_de(void *arg0, void *arg1, s16 arg2, s32 arg3);
extern s32 func_802B00D4_de(void *, s16 *, s32);












void func_802B1B14_de(void *arg0, void *arg1, s32 arg2) {
    char *cur;
    char *next;
    char *object;
    s32 type6;
    Entry802B6BE4 entry;

    object = ((func_802B6BE4_S1 *)(arg1))->unk10;
    if (((func_802B6BE4_S2 *)(object))->unk34 == 0) {
        cur = ((func_802B6BE4_S3 *)(arg0))->unk50;
        if (cur != 0) {
            type6 = 6;
            do {
                next = ((func_802B6BE4_S4 *)(cur))->unk0;
                if (((func_802B6BE4_S4 *)(cur))->unkC == type6 &&
                    ((func_802B6BE4_S4 *)(cur))->unk10 == arg1) {
                    if (next != 0) {
                        ((func_80254D70_S2 *)(next))->unk8 = ((func_80254D70_S2 *)(next))->unk8 +
                                            ((func_802B6BE4_S4 *)(cur))->unk8;
                    }
                    func_802B2450_de(cur);
                    func_802B2480_de(cur, &((func_802B6BE4_S3 *)(arg0))->unk48);
                }
                cur = next;
            } while (cur != 0);
        }
    }
    ((func_802B6BE4_S2 *)(object))->unk33 = 0;
    ((func_802B6BE4_S2 *)(object))->unk34 = 3;
    ((func_802B6BE4_S2 *)(object))->unk30 = 0;
    ((func_802B6BE4_S2 *)(object))->unk24 = ((func_802B6BE4_S3 *)(arg0))->unk1C + arg2;
    func_802B3470_de(((func_802B6BE4_S3 *)(arg0))->unk14, arg1, 0);
    func_802B3480_de(((func_802B6BE4_S3 *)(arg0))->unk14, arg1, 0, arg2);
    entry.type = 5;
    entry.object = arg1;
    func_802B00D4_de(&((func_802B6BE4_S3 *)(arg0))->unk48, &entry, arg2);
}

#include "span_1000/code_802B6958.h"
#include "types.h"








/** Store a new history slot (pointer + selected byte/word fields) into the ring buffer at arg0+0x60. */
void func_802B1AC0_de(void *arg0, void *arg1, s32 arg2) {
    s32 stride = arg2 * 0x10;

    ((func_802B6B90_S2 *)(stride + ((func_802B6B90_S1 *)(arg0))->unk60))->unk0 = arg1;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk7 = ((func_802B6B90_S3 *)(arg1))->unk1;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk9 = ((func_802B6B90_S3 *)(arg1))->unk0;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk8 = ((func_802B6B90_S3 *)(arg1))->unk2;
    ((func_802B6B90_S2 *)((stride + ((func_802B6B90_S1 *)(arg0))->unk60)))->unk4 = ((func_802B6B90_S3 *)(arg1))->unkC;
}

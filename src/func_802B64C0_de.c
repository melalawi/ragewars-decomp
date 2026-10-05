#include "span_1000/code_802B53FC.h"
#include "types.h"

extern void func_802B3F10_de(s32 arg0, s32 arg1, s32 arg2);
extern int func_802B60D8_de(int *arg0, int arg1, int arg2);
extern s32 func_802B5540_de(void *arg0, s32 arg1, s32 arg2);




s32 func_802B64C0_de(void *arg0, s16 arg1, s32 arg2, s32 arg3) {
    s32 scaled = arg1 * 0x4C;
    s32 temp_a2;

    func_802B3F10_de(((func_802BB590_S1 *)(arg0))->unk34 + scaled + 0x20, arg2, arg3);
    temp_a2 = ((func_802BB590_S1 *)(arg0))->unk34 + scaled;
    func_802B60D8_de((int *)(temp_a2 + 0x20), 1, temp_a2);
    func_802B5540_de(((func_802BB590_S1 *)(arg0))->unk30, 2, ((func_802BB590_S1 *)(arg0))->unk34 + scaled + 0x20);
    return ((func_802BB590_S1 *)(arg0))->unk34 + scaled + 0x20;
}

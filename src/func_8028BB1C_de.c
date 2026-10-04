#include "span_1000/code_8028B64C.h"
#include "span_1000/types.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void func_8028FDF8_de(s32 arg0, s32 arg1);






void func_8028BB1C_de(void *arg0, void *arg1, s32 arg2) {
    s32 bitIndex;
    void *field80;
    s32 field1B40C;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 mask;
    s32 idx;
    s32 idx2;

    bitIndex = ((func_8028BAF8_S1 *)(arg1))->unk13;
    field80 = ((World_func_8028787C_de *)(arg0))->levels;
    field1B40C = ((World_func_8028787C_de *)(arg0))->level;
    temp_v0 = func_8028FDB4_de(func_8028FDB4_de(func_8028FDB4_de(field80, 0), field1B40C), 2);
    func_8028FDB4_de(temp_v0, 0);
    func_8028FDF8_de((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FDB4_de(temp_v0, 1);
    base2 = base1;
    mask = 1 << (bitIndex & 7);
    if (arg2 != 0) {
        idx = bitIndex;
        if (bitIndex < 0) {
            idx = bitIndex + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = bitIndex;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}

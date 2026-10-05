#include "common/types_06e4f7ef1f9e.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_8028567C.h"
#include "types.h"

extern char *func_8028FDB4_de(s32 *, s32);
extern void func_8028FDF8_de(s32 arg0, s32 arg1);











void func_80285DB0_de(void *arg0, void *arg1, s32 arg2) {
    void *entry;
    void *cond;
    void *field80;
    void *temp_v0;
    u8 *base1;
    u8 *base2;
    s32 field1B40C;
    s32 mask;
    s32 index;
    s32 idx;
    s32 idx2;
    s32 lastOffset;
    u32 first;

    if (!(((func_80203C40_S1 *)(arg1))->unk100 & 0x80000)) {
        first = ((func_80285D80_S2 *)(arg0))->unk138.v0;
        index = -1;
        if ((u32) arg1 >= first) {
            lastOffset = ((func_80285D80_S2 *)(arg0))->unk140 * 0x2E8;
            lastOffset -= 0x2E8;
            if (first + lastOffset >= (u32) arg1) {
                index = ((u32) arg1 - first) / 0x2E8;
            }
        }
    } else {
        index = -1;
    }
    if (index == -1) {
        return;
    }
    field1B40C = ((func_80285D80_S2 *)(arg0))->unk1B40C;
    if (*(s32 *) arg0 == 2) {
        return;
    }
    entry = ((func_80285D80_S2 *)(arg0))->unk138.v1 + index * 0x2E8;
    cond = ((func_80205314_S1 *)(entry))->unk18;
    if ((u32) (*(s32 *) cond - 9) < 2) {
        if (((func_80203E78_S1 *)(cond))->unk4 & 0x200) {
            return;
        }
    }
    field80 = ((func_80285D80_S2 *)(arg0))->unk80;
    temp_v0 = func_8028FDB4_de(func_8028FDB4_de(func_8028FDB4_de(field80, 0), field1B40C), 0);
    func_8028FDB4_de(temp_v0, 0);
    func_8028FDF8_de((s32) temp_v0, 1);
    base1 = (u8 *) func_8028FDB4_de(temp_v0, 1);
    base2 = base1;
    mask = 1 << (index & 7);
    if (arg2 != 0) {
        idx = index;
        if (index < 0) {
            idx = index + 7;
        }
        base1[idx >> 3] |= mask;
        return;
    }
    idx2 = index;
    if (idx2 < 0) {
        idx2 += 7;
    }
    base2[idx2 >> 3] &= ~mask;
}

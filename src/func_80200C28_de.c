#ifdef NON_MATCHING
#include "span_1000/code_80200610.h"
#include "types.h"

extern s32 func_802005A0_de(s32 address);
extern void func_80200568_de(s32 address, s32 value);

void func_80200C28_de(s32 address, s32 value) {
    u32 shift = (~address & 3) << 3;
    u32 word;

    address &= ~3;
    word = func_802005A0_de(address);
    word &= ~(0xFFU << shift);
    word |= ((u32)value & 0xFFU) << shift;
    func_80200568_de(address, word);
}
#endif /* NON_MATCHING */

#ifdef NON_MATCHING
#include "span_1000/code_80200610.h"
#include "types.h"

extern s32 func_802005A0_de(s32 address);
extern void func_80200568_de(s32 address, s32 value);

/* Replace one big-endian byte in a PI word. */
void func_80200C28_de(s32 address, s32 value) {
    u32 shift;
    u32 word;

    shift = (~(u32)address & 3U) << 3;
    address &= -4;
    word = func_802005A0_de(address);
    word &= ~(0xFFU << shift);
    value &= 0xFF;
    func_80200568_de(address, word | ((u32)value << shift));
}
#endif /* NON_MATCHING */

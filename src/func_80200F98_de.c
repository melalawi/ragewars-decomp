#ifdef NON_MATCHING
#include "span_1000/code_80200610.h"
#include "types.h"

extern void func_80200C28_de(s32 address, s32 value);
extern void func_80200568_de(s32 address, s32 value);

void func_80200F98_de(s32 address, s32 value, u32 count) {
    u32 byte;
    u32 word;

    while (count != 0 && (address & 3) != 0) {
        func_80200C28_de(address++, value & 0xFF);
        count--;
    }

    if (count >= 4) {
        byte = value & 0xFF;
        word = (byte << 24) | (byte << 16) | (byte << 8) | byte;
        do {
            func_80200568_de(address, word);
            count -= 4;
            address += 4;
        } while (count >= 4);
    }

    while (count != 0) {
        func_80200C28_de(address++, value & 0xFF);
        count--;
    }
}
#endif /* NON_MATCHING */

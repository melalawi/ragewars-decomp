#include "basetypes.h"

typedef struct {
    u8 *unk0;
    s32 unk4;
} BitReader80263174;

/** Reads arg1 bits (LSB first) from the bitstream at arg0, advancing its bit position. */
s32 func_80263174(BitReader80263174 *arg0, s32 arg1) {
    s32 bitPos;
    s32 i;
    s32 result;

    i = 0;
    result = 0;
    if (arg1 > 0) {
        do {
            bitPos = arg0->unk4;
            result |= (((s32) *(arg0->unk0 + (bitPos >> 3)) >> (bitPos & 7)) & 1) << i;
            i += 1;
            arg0->unk4 = (s32) (bitPos + 1);
        } while (i < arg1);
    }
    return result;
}

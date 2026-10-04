#include "span_16E000/code_80405454.h"
#include "types.h"

/* Computes the CRC-32 with polynomial 0xEDB88320 of arg1 bytes at arg0, continuing from the running value arg2, from a 256-entry table built on the stack. Adapted from func_802A08B8_de. */

u32 func_804057F8_de(u8 *arg0, u32 arg1, u32 arg2) {
    u32 table[256];
    u32 i;
    u32 j;
    u32 value;
    u32 shifted;
    u8 *end;

    for (i = 0; i < 256; i++) {
        value = i;
        for (j = 0; j < 8; j++) {
            shifted = value >> 1;
            if (value & 1) {
                shifted ^= 0xEDB88320U;
            }
            value = shifted;
        }
        table[i] = value;
    }

    end = arg0 + arg1;
    arg2 = ~arg2;
    while (arg0 < end) {
        arg2 = table[(arg2 ^ *arg0++) & 0xFF] ^ ((arg2 >> 8) & 0xFFFFFF);
    }
    return ~arg2;
}

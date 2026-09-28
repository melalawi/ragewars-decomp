#include "basetypes.h"

/* Fills arg2 bytes at arg0 with the byte arg1, storing single bytes up to word alignment, replicated words through the middle and single bytes at the tail, and returns arg0. Adapted from func_802A101C. */

void *func_802A1748(void *arg0, int arg1, u32 arg2) {
    u8 *start;
    u8 *end;
    u8 *cur;
    u8 *next;
    u32 byte;
    u32 word;

    start = arg0;
    end = start + arg2;
    byte = arg1 & 0xFF;
    word = (byte << 24) | (byte << 16) | (byte << 8) | byte;
    cur = start;

    if (cur >= end) {
        goto word_test;
    }
align_test:
    if (!((u32)cur & 3)) {
        goto word_test;
    }
    *cur = arg1;
    cur += 1;
    if (cur < end) {
        goto align_test;
    }
    goto word_test;

word_test:
    next = cur + 4;
    while (next < end) {
        *(u32 *)cur = word;
        cur = next;
        next = cur + 4;
    }

    if (cur < end) {
        do {
            *cur++ = arg1;
        } while (cur < end);
    }
    return start;
}

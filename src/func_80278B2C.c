/* Sums the size field of the record func_8028FD94 returns for each entry of the D_8011FE88 table and returns the total.
   Adapted from func_802B5090 with the loop over the global entry table and the accumulated return changed. */
#include "basetypes.h"

typedef struct Result {
    s32 unk0;
    s32 size;
} Result;

extern Result *func_8028FD94(s32, s32);
extern char D_8011FE88[];

s32 func_80278B2C(void) {
    s32 total = 0;
    s32 i;
    char *base = D_8011FE88;

    for (i = 0; i < *(s32 *)(base + 0x1500); i++) {
        total += func_8028FD94(**(s32 **)(base + i * 0xC + 0x1508), 2)->size;
    }
    return total;
}

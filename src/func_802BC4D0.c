#include "basetypes.h"

/* Queues an audio buffer for the AI DMA, backing the address up 0x2000 bytes after a buffer that ended on an 8 KiB boundary, returning -1 when func_802BC560 reports the interface busy and zero after writing the physical address from func_802C0CB0 and the length to the AI registers (libultra osAiSetNextBuffer). Adapted from func_802C0150 with the argument checks replaced by the boundary flag byte D_800D8360 read through its array declaration, the busy test by func_802BC560, and the uncached read by two AI register writes. */
extern u8 D_800D8360[];
extern s32 func_802BC560(void);
extern u32 func_802C0CB0(void *);

s32 func_802BC4D0(void *bufPtr, u32 size) {
    char *bptr = bufPtr;

    if (D_800D8360[0] != 0) {
        bptr -= 0x2000;
    }
    if ((((u32)bufPtr + size) & 0x1FFF) == 0) {
        D_800D8360[0] = 1;
    } else {
        D_800D8360[0] = 0;
    }
    if (func_802BC560() != 0) {
        return -1;
    }
    *(volatile u32 *)0xA4500000 = func_802C0CB0(bptr);
    *(volatile u32 *)0xA4500004 = size;
    return 0;
}

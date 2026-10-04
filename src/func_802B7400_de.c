#include "span_1000/code_802BB9D0.h"
#include "types.h"

/* Queues an audio buffer for the AI DMA, backing the address up 0x2000 bytes after a buffer that ended on an 8 KiB boundary, returning -1 when func_802B7490_de reports the interface busy and zero after writing the physical address from func_802BBBC0_de and the length to the AI registers (libultra osAiSetNextBuffer). Adapted from func_802BB060_de with the argument checks replaced by the boundary flag byte D_800D8360 read through its array declaration, the busy test by func_802B7490_de, and the uncached read by two AI register writes. */
extern u8 D_800D4330[];

extern u32 func_802BBBC0_de(void *);

s32 func_802B7400_de(void *bufPtr, u32 size) {
    char *bptr = bufPtr;

    if (D_800D4330[0] != 0) {
        bptr -= 0x2000;
    }
    if ((((u32)bufPtr + size) & 0x1FFF) == 0) {
        D_800D4330[0] = 1;
    } else {
        D_800D4330[0] = 0;
    }
    if (func_802B7490_de() != 0) {
        return -1;
    }
    *(volatile u32 *)0xA4500000 = func_802BBBC0_de(bptr);
    *(volatile u32 *)0xA4500004 = size;
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2FE0_10[] = {0x00, 0x4D, 0x41, 0x47, 0x45, 0x44, 0x5F, 0x48, 0x4F, 0x4C, 0x44, 0x49, 0x4E, 0x47, 0x5F, 0x46};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D8360_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E49B0_10[] = {0x00, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x72, 0x69, 0x76, 0x65, 0x72, 0x20, 0x6F};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DFB70_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D4330_10[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0xB6, 0x98, 0x00, 0x21, 0xB6, 0xA4};
#endif

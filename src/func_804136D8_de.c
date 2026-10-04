#include "span_16E000/code_804136EC.h"
#include "types.h"

/* The same table as func_80413608_de reads, at the field 24 bytes into the 52-byte record. The
   debugger returned 1 on every one of 400 calls, so the observed records all carry a non-zero
   value here and the zero arm is untested by execution. */
extern s32 D_800DEAF0[][13];

s32 func_804136D8_de(u8 *record) {
    return D_800DEAF0[*record][0] != 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DD7A0_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E2B40_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800EF160_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800EA320_4[] = {0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DEAF0_4[] = {0x00, 0x00, 0x00, 0x00};
#endif

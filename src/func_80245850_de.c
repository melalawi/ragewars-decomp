#include "span_1000/code_80245804.h"
#include "span_1000/types.h"



extern func_802428C0_S1 *D_800DE7E0;

/** Return the word at offset 0x3C of the current global object. */
unsigned int func_80245850_de(void) {
    return D_800DE7E0->unk3C;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DD408_7[] = {0x20, 0x20, 0x25, 0x30, 0x32, 0x64, 0x00};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E26BC_4 = 5.0f;
const float unbake_rodata_800E26C0_4 = 4.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800ED440_14[] = {0x00409864U, 0x004098E4U, 0x004098E4U, 0x004097E4U, 0x00409764U};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E85B8_4[] = {0x20, 0x20, 0x20, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDB98_14[] = {0x0042F96CU, 0x0042F9F4U, 0x0042FA5CU, 0x0042FA6CU, 0x0042FAE8U};
#endif

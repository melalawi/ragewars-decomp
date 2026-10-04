#include "span_1000/code_8022D7A0.h"
#include "types.h"

extern void func_80218464_de();




void func_8022DA04_de(void *arg0) {
    func_80218464_de((char *)arg0 + 0x938);
    ((func_8022D9F4_S1 *)(arg0))->unk11B4 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800C9F00_4[] = {0x3E, 0xB3, 0x33, 0x33};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CF22C_4 = 400.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C9E1C_4[] = {0x00, 0x00, 0x04, 0x63};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800CA6FC_4 = 0.25f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C9514_4 = 34.5599976f;
#endif

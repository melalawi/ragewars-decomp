#include "common/types.h"
#include "span_1000/code_8024DF4C.h"
#include "span_1000/types.h"





int func_8024E0C8_de(void *arg0) {
    void *temp_a0 = ((func_80205314_S1 *)(arg0))->unk18;
    unsigned int new_var = 0;
    if (*(int *)temp_a0 != 1) {
        return new_var;
    }
    if (new_var) {
        return ((func_8024DED0_S2 *)(temp_a0))->unk4C & 0x400;
    } else {
        return ((func_8024DED0_S2 *)(temp_a0))->unk4C & 0x400;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB4A_A[] = {0xA0, 0xF0, 0x21, 0x24, 0x02, 0x06, 0x48, 0xAF, 0xC2, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800F7110_20[] = {0x00, 0x00, 0x00, 0x0E, 0x6D, 0x5F, 0x50, 0x66, 0x6D, 0x44, 0x65, 0x61, 0x74, 0x68, 0x41, 0x6E, 0x69, 0x6D, 0x5E, 0x00, 0x00, 0x00, 0x94, 0x08, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17};
#elif defined(VERSION_EU)
const float unbake_rodata_800EEAE0_4 = 1.25f;
const float unbake_rodata_800EEAE4_4 = 0.899999976f;
const float unbake_rodata_800EEAE8_4 = 0.25f;
const float unbake_rodata_800EEAEC_4 = 0.00352112669f;
const float unbake_rodata_800EEAF0_4 = 0.00450450461f;
const float unbake_rodata_800EEAF4_4 = 255.0f;
const float unbake_rodata_800EEAF8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E99C8_2C[] = {0x0043D598U, 0x0043D5A0U, 0x0043D5A8U, 0x0043D5B0U, 0x0043D5B8U, 0x0043D5C0U, 0x0043D5C8U, 0x0043D5D0U, 0x0043D5D8U, 0x0043D5E0U, 0x0043D5E8U};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DF740_4[] = {0x00, 0x00, 0x00, 0x63};
const unsigned char unbake_rodata_800DF744_24[] = {0x00, 0x00, 0x00, 0x2E, 0x00, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x2F, 0x00, 0x00, 0x00, 0x61, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x30};
#endif

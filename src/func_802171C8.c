#include "basetypes.h"

typedef struct {
    void *base;
    u16 *cur;
} Cursor802171C8;

/** Read the next u16 from the cursor stream, wrapping back to base on the -1 sentinel. */
s16 func_802171C8(Cursor802171C8 *arg0) {
    u16 *cur;
    u16 value;

    cur = arg0->cur;
    value = *cur;
    cur += 1;
    arg0->cur = cur;
    if (*(s16 *) cur == -1) {
        arg0->cur = arg0->base;
    }
    return (s16) value;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4958_4 = 0.00999999978f;
const float unbake_rodata_800C495C_4 = 2.14748365e+09f;
const float unbake_rodata_800C4960_4 = 0.00999999978f;
const float unbake_rodata_800C4964_4 = 2.14748365e+09f;
const float unbake_rodata_800C4968_4 = 0.00999999978f;
const float unbake_rodata_800C496C_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9B18_4 = 0.00999999978f;
const float unbake_rodata_800C9B1C_4 = 2.14748365e+09f;
const float unbake_rodata_800C9B20_4 = 0.00999999978f;
const float unbake_rodata_800C9B24_4 = 2.14748365e+09f;
const float unbake_rodata_800C9B28_4 = 0.00999999978f;
const float unbake_rodata_800C9B2C_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4690_4 = 0.5f;
const float unbake_rodata_800C4694_4 = 0.0399999991f;
const float unbake_rodata_800C4698_4 = 1.0f;
const float unbake_rodata_800C469C_4 = 1.0f;
const float unbake_rodata_800C46A0_4 = 1.0f;
const float unbake_rodata_800C46A4_4 = 1.0f;
const float unbake_rodata_800C46A8_4 = 0.0399999991f;
const float unbake_rodata_800C46AC_4 = 102.399994f;
const float unbake_rodata_800C46B0_4 = 0.666666985f;
const float unbake_rodata_800C46B4_4 = 0.25f;
const float unbake_rodata_800C46B8_4 = 75.0f;
const float unbake_rodata_800C46BC_4 = 11.0f;
const float unbake_rodata_800C46C0_4 = 0.666666985f;
const float unbake_rodata_800C46C4_4 = 0.25f;
const float unbake_rodata_800C46C8_4 = 75.0f;
const float unbake_rodata_800C46CC_4 = 11.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C46A0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4934_4 = 0.138888896f;
const float unbake_rodata_800C4938_4 = 0.000174532935f;
const float unbake_rodata_800C493C_4 = 1.0f;
#endif

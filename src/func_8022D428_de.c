#include "span_1000/code_8022D1FC.h"
#include "span_C76B0/data.h"
#include "types.h"



extern void func_80274870_de(f32 *, f32, f32);
extern void func_80449870_de(void *);




void func_8022D428_de(void *arg0) {
    if (((func_8022D418_S1 *)(arg0))->unk850 == 0) {
        if ((((func_8022D418_S1 *)(arg0))->unk664 & 0x8000) == 0) {
            func_80274870_de(&((func_8022D418_S1 *)(arg0))->unk72C, 1.308997f, 0.25f);
        }
        if (((func_8022D418_S1 *)(arg0))->unk658 > D_800C2DB8_de) {
            func_80449870_de(arg0);
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CE8_4 = 7.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7EA8_4 = 7.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C305C_4 = 7.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C309C_4 = 7.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DB8_4 = 7.5f;
#endif

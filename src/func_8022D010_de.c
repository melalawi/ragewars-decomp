#include "span_1000/code_8022C36C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"
/** Scales the floats at 0x6C0 and 0x6C4 of the first object and the float at 0x20 of the second by D_800C7E90. */








void func_8022D010_de(void *arg0, void *arg1) {
    ((func_8022C894_S1 *)(arg0))->unk6C0 = ((func_8022C894_S1 *)(arg0))->unk6C0 * (D_800C2DA0_de);
    ((func_8022C894_S1 *)(arg0))->unk6C4 = ((func_8022C894_S1 *)(arg0))->unk6C4 * (D_800C2DA0_de);
    ((func_8022CA04_S3 *)(arg1))->unk20 = ((func_8022CA04_S3 *)(arg1))->unk20 * (D_800C2DA0_de);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CD0_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E90_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3044_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3084_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2DA0_4 = 0.5f;
#endif

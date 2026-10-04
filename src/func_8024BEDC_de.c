#include "span_1000/code_8024B644.h"
#include "types.h"

extern f32 func_802B72B0_de(f32);




void func_8024BEDC_de(void *arg0) {
    float temp_f12 = ((func_8024BECC_S1 *)(arg0))->unk50;
    float temp_f1 = ((func_8024BECC_S1 *)(arg0))->unk54;
    float temp_f0 = ((func_8024BECC_S1 *)(arg0))->unk58;
    func_802B72B0_de(((temp_f12 * temp_f12) + (temp_f1 * temp_f1) + (temp_f0 * temp_f0)) * (0.3333333432674408f));
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3A88_4 = 0.333333343f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8C48_4 = 0.333333343f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3E08_4 = 0.333333343f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E48_4 = 0.333333343f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3B58_4 = 0.333333343f;
#endif

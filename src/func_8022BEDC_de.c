#include "common/types.h"
#include "span_1000/code_8022B500.h"
#include "span_1000/types.h"
extern void *D_800CB2EC[];






int func_8022BEDC_de(void *arg0) {
    short index = ((func_8022BECC_S1 *)(arg0))->unk62E;
    return ((func_8022BECC_S2 *)(D_800CB2EC[index]))->unk8 > 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C615C_4 = 1.0f;
const double unbake_rodata_800C6160_8 = 4294967296.0;
const float unbake_rodata_800C6168_4 = 1.0f;
const float unbake_rodata_800C616C_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CB3D0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C6230_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C6188_4 = 6.14400005f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C6148_1C[] = {0x002A8FA8U, 0x002A8FB8U, 0x002A8FE8U, 0x002A8FC8U, 0x002A8FD8U, 0x002A8FD8U, 0x002A8FE8U};
const float unbake_rodata_800C6164_4 = 24.0f;
const float unbake_rodata_800C6168_4 = 12.0f;
const float unbake_rodata_800C616C_4 = 6.0f;
const float unbake_rodata_800C6170_4 = 16.0f;
const float unbake_rodata_800C6174_4 = 8.0f;
const float unbake_rodata_800C6178_4 = 1.0f;
#endif

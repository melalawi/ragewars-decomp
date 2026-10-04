#include "common/types.h"
#include "span_1000/code_80203B1C.h"
extern void func_8028B670_de(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011BDC8;




void func_8020478C_de(void *arg0) {
    func_8028B670_de(&D_8011BDC8, ((func_8020478C_S1 *)(arg0))->unkA, ((func_8020478C_S1 *)(arg0))->unk4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1D90_4 = 51200.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6EA4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2050_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2090_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1DB0_4 = 1.0f;
#endif

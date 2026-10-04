#include "common/types.h"
#include "span_1000/code_80204A68.h"
#include "types.h"

extern void func_8026DC24_de(void * *, s32, s32, void *, s32, s32);
extern s32 D_800CD72C;








void func_80205628_de(void *arg0, void *arg1, void *arg2) {
    ((func_80205628_S1 *)(arg0))->unk17C = 1 << ((func_80205628_S2 *)(arg1))->unk124;
    if (*(s32 *) arg2 != 0) {
        func_8026DC24_de(((func_80205628_S3 *)(arg2))->unkC, ((func_80205628_S1 *)(arg0))->unkB4, 1,
                      (char *) arg0 + (D_800CD72C * 0x18 + 0x140), 0, ((func_80205628_S2 *)(arg1))->unk128);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2204_4 = 0.0500000007f;
const float unbake_rodata_800C2208_4 = 0.300000012f;
const float unbake_rodata_800C220C_4 = (-0.707099974f);
const float unbake_rodata_800C2210_4 = 0.707099974f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C735C_4 = 255.0f;
const float unbake_rodata_800C7360_4 = 0.5f;
const float unbake_rodata_800C7364_4 = 2.14748365e+09f;
const float unbake_rodata_800C7368_4 = 0.00312500005f;
const float unbake_rodata_800C736C_4 = 0.00416666688f;
const float unbake_rodata_800C7370_4 = 63.0f;
const float unbake_rodata_800C7374_4 = 192.0f;
const float unbake_rodata_800C7378_4 = 1.0f;
const float unbake_rodata_800C737C_4 = 0.75f;
const float unbake_rodata_800C7380_4 = 0.600000024f;
const float unbake_rodata_800C7384_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2470_4 = 1.0f;
const float unbake_rodata_800C2474_4 = (-1.0f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2478_4 = 0.899999976f;
const float unbake_rodata_800C247C_4 = 1.0f;
const float unbake_rodata_800C2480_4 = (-1.0f);
const float unbake_rodata_800C2484_4 = 1.0f;
const float unbake_rodata_800C2488_4 = (-1.0f);
const float unbake_rodata_800C248C_4 = 1.0f;
const float unbake_rodata_800C2490_4 = (-1.0f);
const float unbake_rodata_800C2494_4 = 1.22173059f;
const float unbake_rodata_800C2498_4 = 1.91986239f;
const float unbake_rodata_800C249C_4 = 1.0f;
const float unbake_rodata_800C24A0_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2248_4 = 0.785398245f;
#endif

#include "span_1000/code_802301E4.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void 
#if defined(VERSION_EU) || defined(VERSION_EU_X)
func_80232878_eu
#else
func_8022FDAC_de
#endif
(void *arg0, void *arg1);
extern char D_0022FC20;
extern char D_0023293C;

extern char D_800CA058;






void func_80232A48_de(void *arg0, void *arg1) {
    f32 k = D_800C3018_de;

    ((func_80232A38_S1 *)(arg1))->unk2C = &D_800CA058;
    ((func_80232A38_S1 *)(arg1))->unk108 = &D_0022FC20;
    ((func_80232A38_S1 *)(arg1))->unk10C = &D_0023293C;
    ((func_80232A38_S1 *)(arg1))->unk124 = 0;
    ((func_80232A38_S1 *)(arg1))->unk128 = 0;
    ((func_80232A38_S1 *)(arg1))->unk130 = 0;
    ((func_80232A38_S1 *)(arg1))->unk138 = 0;
    ((func_80232A38_S1 *)(arg1))->unk13C = 1;
    ((func_80232A38_S1 *)(arg1))->unk12C = k;
    ((func_8024BE70_S1 *)(arg0))->unk1 = 0;
    ((func_80232A38_S1 *)(arg1))->unk148 = 0;
    ((func_80232A38_S1 *)(arg1))->unk144 = 1;
    ((func_80232A38_S1 *)(arg1))->unk14C = 0;
    ((func_80232A38_S1 *)(arg1))->unk150 = 0;
    
#if defined(VERSION_EU) || defined(VERSION_EU_X)
func_80232878_eu
#else
func_8022FDAC_de
#endif
(arg0, arg1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2F48_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8108_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C32C8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3308_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3018_4 = 1.0f;
#endif

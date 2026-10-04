#include "common/types.h"
#include "span_1000/code_8029193C.h"
#include "types.h"







extern func_802077F4_S2 D_800C5494;
extern int func_80264B6C_de(void);

void func_80293790_de(void *arg0, s32 arg1) {
    s32 saved;

    saved = ((func_80293774_S1 *)(arg0))->unk26DB8;
    ((func_80293774_S1 *)(arg0))->unk26DC1 = 1;
    ((func_80293774_S1 *)(arg0))->unk26DC4.v0 = 0;
    ((func_80293774_S1 *)(arg0))->unk26DB8 = 0x14;
    ((func_80293774_S1 *)(arg0))->unk26DBC = arg1;
    ((func_80293774_S1 *)(arg0))->unk26DB4 = saved;
    if (func_80264B6C_de() != 0) {
        ((func_80293774_S1 *)(arg0))->unk26DC4.v1 = D_800C5494.unk4;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C53C4_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA584_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5744_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C5784_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5498_4 = 1.0f;
#endif

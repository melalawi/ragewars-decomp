#include "common/types.h"
#include "span_1000/code_8021762C.h"
#include "span_C76B0/data.h"
/* FAKEMATCH: retains inherited volatile storage qualifiers to preserve compiler load/store order; semantic volatility has not been established. */
#include "types.h"

extern f32 D_800C9138_de;






/** Reset the object and initialize its thirty-six descending-offset records. */
void func_8021836C_de(volatile char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = D_800C224C_de;
    f32 value = ((func_802077F4_S2 *)(&D_800C9138_de))->unk4;

    ((func_8021836C_S2 *)(arg0))->unk0 = 0;
    ((func_8021836C_S2 *)(arg0))->unk4 = 0;
    ((func_8021836C_S2 *)(arg0))->unk8 = 0;
    ((func_8021836C_S2 *)(arg0))->unkC = 0;
    ((func_8021836C_S2 *)(arg0))->unk14 = 0;
    ((func_8021836C_S2 *)(arg0))->unk37C = minus_one;
    ((func_8021836C_S2 *)(arg0))->unk380 = 1;
    ((func_8021836C_S2 *)(arg0))->unk388 = minus_one;
    ((func_8021836C_S2 *)(arg0))->unk18 = 0;
    ((func_8021836C_S2 *)(arg0))->unk38C = 0;
    ((func_8021836C_S2 *)(arg0))->unk390 = minus_one;

    for (i = 0; i < 0x24; i++, arg0 += 0x18) {
        f32 scaled = i * scale;
        ((func_8021836C_S2 *)(arg0))->unk2C = 0;
        ((func_8021836C_S2 *)(arg0))->unk30 = value;
        ((func_8021836C_S2 *)(arg0))->unk28 = -scaled;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C217C_4 = 0.17453295f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C733C_4 = 0.17453295f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24EC_4 = 0.17453295f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C252C_4 = 0.17453295f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C224C_4 = 0.17453295f;
#endif

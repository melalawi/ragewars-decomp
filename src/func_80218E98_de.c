#include "common/types.h"
#include "span_1000/code_8021762C.h"
#include "span_C76B0/data.h"
/* FAKEMATCH: retains inherited volatile storage qualifiers to preserve compiler load/store order; semantic volatility has not been established. */
#include "types.h"

extern f32 D_800C9178_de;








/** Reset the object and initialize its four descending-offset records. */
void func_80218E98_de(volatile char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = ((func_802077F4_S2 *)(&D_800C22A8_de))->unk4;
    f32 value = ((func_802077F4_S2 *)(&D_800C9178_de))->unk4;

    ((func_80218E98_S3 *)(arg0))->unk0 = 0;
    ((func_80218E98_S3 *)(arg0))->unk4 = 0;
    ((func_80218E98_S3 *)(arg0))->unk8 = 0;
    ((func_80218E98_S3 *)(arg0))->unkC = 0;
    ((func_80218E98_S3 *)(arg0))->unk14 = 0;
    ((func_80218E98_S3 *)(arg0))->unk6C = minus_one;
    ((func_80218E98_S3 *)(arg0))->unk18 = 4;
    ((func_80218E98_S3 *)(arg0))->unk70 = minus_one;

    for (i = 0; i < 4; i++, arg0 += 0x14) {
        f32 scaled = i * scale;
        ((func_80218E98_S3 *)(arg0))->unk28 = 0;
        ((func_80218E98_S3 *)(arg0))->unk2C = value;
        ((func_80218E98_S3 *)(arg0))->unk24 = -scaled;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C21DC_4 = 1.57079649f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C739C_4 = 1.57079649f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C254C_4 = 1.57079649f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C258C_4 = 1.57079649f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C22AC_4 = 1.57079649f;
#endif

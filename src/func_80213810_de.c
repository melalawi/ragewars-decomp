#include "span_1000/code_80212D78.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801372A4;

extern void *func_8020C994_de(void *, s32);
extern s32 func_802744D4_de(void);






void func_80213810_de(void *arg0)
{
    s32 *table = &D_801372A4;
    s32 tries = 0;
    s32 candidate;

    if (table[1] >= 2) {
        candidate = ((func_80213340_S2 *)(arg0))->unk22C;
loop:
        if (tries < 10) {
            candidate = func_802744D4_de() % table[1];
            if (((func_8020CA10_S2 *)(func_8020C994_de(table, candidate)))->unkC & 0x400) {
                candidate = ((func_80213340_S2 *)(arg0))->unk22C;
            }
            tries++;
            if (candidate != ((func_80213340_S2 *)(arg0))->unk22C) {
                goto store_both;
            }
            goto loop;
        } else {
            ((func_80213340_S2 *)(arg0))->unk22C = candidate;
            goto store_c;
        }
    } else {
        candidate = 1;
    }
store_both:
    ((func_80213340_S2 *)(arg0))->unk22C = candidate;
store_c:
    ((func_80213340_S2 *)(arg0))->unkC = candidate;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C42F0_4 = 1.0f;
const float unbake_rodata_800C42F4_4 = 20.0f;
const float unbake_rodata_800C42F8_4 = 1.0f;
const float unbake_rodata_800C42FC_4 = 10.0f;
const float unbake_rodata_800C4300_4 = 12.0f;
const float unbake_rodata_800C4304_4 = 10.2399998f;
const float unbake_rodata_800C4308_4 = 1.0f;
const float unbake_rodata_800C430C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C94B0_4 = 1.0f;
const float unbake_rodata_800C94B4_4 = 20.0f;
const float unbake_rodata_800C94B8_4 = 1.0f;
const float unbake_rodata_800C94BC_4 = 10.0f;
const float unbake_rodata_800C94C0_4 = 12.0f;
const float unbake_rodata_800C94C4_4 = 10.2399998f;
const float unbake_rodata_800C94C8_4 = 1.0f;
const float unbake_rodata_800C94CC_4 = 0.5f;
#elif defined(VERSION_EU)
const double unbake_rodata_800C43F8_8 = 4294967296.0;
const double unbake_rodata_800C4400_8 = 4294967296.0;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C440C_4 = 1.0f;
const float unbake_rodata_800C4410_4 = (-2000.0f);
const float unbake_rodata_800C4414_4 = 2000.0f;
const float unbake_rodata_800C4418_4 = (-1.0f);
const float unbake_rodata_800C441C_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C431C_4 = 16.0f;
const float unbake_rodata_800C4320_4 = 0.00392156886f;
#endif

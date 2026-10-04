#include "common/types.h"
#include "span_1000/code_80212D78.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_801372A4;


extern void *func_8020C994_de(void *, s32);
extern s32 func_802744D4_de(void);








void func_80213340_de(void *arg0)
{
    s32 choices[32];
    s32 count;
    s32 result;
    s32 fill;

    result = 0;
    count = result;
    fill = -1;
    {
        s32 index = 31;
        do {
            choices[index] = fill;
            index--;
        } while (index >= 0);

        {
            s32 *table = &D_801372A4;
        index = 0;
        if (table[1] > 0) {
            do {
                if (((func_8020CA10_S2 *)(func_8020C994_de(table, index)))->unkC & 0x800) {
                    choices[count] = index;
                    count++;
                }
                index++;
            } while (index < table[1]);
        }
        }
    }

    if (count == 0) {
        s32 global_count = D_801372A8;
        s32 *table = &D_801372A4;
        s32 tries = 0;
        s32 candidate;
        if (global_count >= 2) {
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
    } else {
        result = choices[func_802744D4_de() % count];
    }

    ((func_80213340_S2 *)(arg0))->unk22C = result;
    ((func_80213340_S2 *)(arg0))->unkC = result;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4224_4 = (-128.0f);
const float unbake_rodata_800C4228_4 = (-127.0f);
const float unbake_rodata_800C422C_4 = (-127.0f);
const float unbake_rodata_800C4230_4 = (-80.0f);
const float unbake_rodata_800C4234_4 = 80.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C93E4_4 = (-128.0f);
const float unbake_rodata_800C93E8_4 = (-127.0f);
const float unbake_rodata_800C93EC_4 = (-127.0f);
const float unbake_rodata_800C93F0_4 = (-80.0f);
const float unbake_rodata_800C93F4_4 = 80.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C43B8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4390_8 = 4294967296.0;
const double unbake_rodata_800C4398_8 = 4294967296.0;
const double unbake_rodata_800C43A0_8 = 4294967296.0;
const double unbake_rodata_800C43A8_8 = 4294967296.0;
const double unbake_rodata_800C43B0_8 = 4294967296.0;
const float unbake_rodata_800C43B8_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4290_4 = 0.99000001f;
const float unbake_rodata_800C4294_4 = 0.0078125f;
const float unbake_rodata_800C4298_4 = 1.0f;
const float unbake_rodata_800C429C_4 = 0.100000001f;
const float unbake_rodata_800C42A0_4 = 0.75f;
const float unbake_rodata_800C42A4_4 = 1.0f;
const float unbake_rodata_800C42A8_4 = (-1.0f);
const float unbake_rodata_800C42AC_4 = 0.0125000002f;
const float unbake_rodata_800C42B0_4 = 1.0f;
const float unbake_rodata_800C42B4_4 = (-1.0f);
const float unbake_rodata_800C42B8_4 = 0.0125000002f;
const float unbake_rodata_800C42BC_4 = 0.0125000002f;
const float unbake_rodata_800C42C0_4 = 1.0f;
const float unbake_rodata_800C42C4_4 = (-1.0f);
const float unbake_rodata_800C42C8_4 = 0.0125000002f;
const float unbake_rodata_800C42CC_4 = 1.0f;
const float unbake_rodata_800C42D0_4 = (-1.0f);
const float unbake_rodata_800C42D4_4 = 0.0125000002f;
const float unbake_rodata_800C42D8_4 = 0.75f;
const float unbake_rodata_800C42DC_4 = 1.0f;
const float unbake_rodata_800C42E0_4 = 0.75f;
const float unbake_rodata_800C42E4_4 = (-1.0f);
const float unbake_rodata_800C42E8_4 = 0.100000001f;
#endif

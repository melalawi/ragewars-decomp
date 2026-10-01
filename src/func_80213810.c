#include "basetypes.h"

extern s32 D_8013B364;

extern void *func_8020C994(void *, s32);
extern s32 func_80274544(void);

typedef struct func_80213810_S1 func_80213810_S1;
typedef struct func_80213810_S2 func_80213810_S2;
struct func_80213810_S1 {
    char pad0[0xC];
    s32 unkC;
    char padC[0x22C - 0xC - sizeof(s32)];
    s32 unk22C;
};
struct func_80213810_S2 {
    char pad0[0xC];
    u16 unkC;
};

void func_80213810(void *arg0)
{
    s32 *table = &D_8013B364;
    s32 tries = 0;
    s32 candidate;

    if (table[1] >= 2) {
        candidate = ((func_80213810_S1 *)(arg0))->unk22C;
loop:
        if (tries < 10) {
            candidate = func_80274544() % table[1];
            if (((func_80213810_S2 *)(func_8020C994(table, candidate)))->unkC & 0x400) {
                candidate = ((func_80213810_S1 *)(arg0))->unk22C;
            }
            tries++;
            if (candidate != ((func_80213810_S1 *)(arg0))->unk22C) {
                goto store_both;
            }
            goto loop;
        } else {
            ((func_80213810_S1 *)(arg0))->unk22C = candidate;
            goto store_c;
        }
    } else {
        candidate = 1;
    }
store_both:
    ((func_80213810_S1 *)(arg0))->unk22C = candidate;
store_c:
    ((func_80213810_S1 *)(arg0))->unkC = candidate;
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

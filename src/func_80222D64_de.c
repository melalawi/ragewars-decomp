#include "common/types.h"
#include "span_1000/code_80219480.h"
#include "types.h"
/* Returns whether a player can take more ammunition for a pickup: looks up the pickup's weapon slot
   through func_802AC950_de, takes the cap as zero for no slot, the character's cap at 0x108 when option
   D_801462D5 is not 1, or otherwise D_800CE3E8's cap raised, unless the flag at 0x1450 is set, by the
   player profile's bonus byte for slots 0, 1 and 2 in D_80102B14, and compares the slot's count at
   0x5F4 against it. */





extern void *func_802AC950_de(s32);
extern u8 D_80142215;
extern s32 D_800C9198_de[];
extern Profile D_800FEB14[];






s32 func_80222D64_de(void *arg0, s32 arg1) {
    void *pickup;
    s32 slot;
    s16 *count;
    s32 cap;
    s32 base;

    pickup = func_802AC950_de(arg1);
    if (pickup == 0) {
        return 0;
    }
    slot = ((func_8021C9B4_S3 *)(pickup))->unkC;
    count = (s16 *) (&((func_80222D40_S2 *)(arg0))->unk5F4 + slot * 2);
    if (slot == -1) {
        cap = 0;
    } else {
        if (D_80142215 != 1) {
            base = (((func_80222D40_S2 *)(arg0))->unk18)->caps[slot];
        } else {
            base = D_800C9198_de[slot];
            if (((func_80222D40_S2 *)(arg0))->unk1450 == 0) {
                if (slot == 0) {
                    base += D_800FEB14[((func_80222D40_S2 *)(arg0))->unk5D4].bonus0;
                } else if (slot == 1) {
                    base += D_800FEB14[((func_80222D40_S2 *)(arg0))->unk5D4].bonus1;
                } else if (slot == 2) {
                    base += D_800FEB14[((func_80222D40_S2 *)(arg0))->unk5D4].bonus2;
                }
            }
        }
        cap = base;
    }
    return *count < cap;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C513C_4 = 3000.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA2FC_4 = 3000.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4F18_4 = 16.0f;
const float unbake_rodata_800C4F1C_4 = 0.000492125982f;
const float unbake_rodata_800C4F20_4 = 1.0f;
const float unbake_rodata_800C4F24_4 = 0.000492125982f;
const float unbake_rodata_800C4F28_4 = 0.00100000005f;
const float unbake_rodata_800C4F2C_4 = 1.0f;
const float unbake_rodata_800C4F30_4 = 47.5f;
const float unbake_rodata_800C4F34_4 = 0.25f;
const float unbake_rodata_800C4F38_4 = 0.0210526325f;
const float unbake_rodata_800C4F3C_4 = 1.0f;
const float unbake_rodata_800C4F40_4 = 1.0f;
const float unbake_rodata_800C4F44_4 = 1.0f;
const float unbake_rodata_800C4F48_4 = 1.0f;
const float unbake_rodata_800C4F4C_4 = 1.57079649f;
const float unbake_rodata_800C4F50_4 = 1.0f;
const float unbake_rodata_800C4F54_4 = 3.14159298f;
const unsigned int unbake_rodata_800C4F58_2C[] = {0x0027E2DCU, 0x0027E464U, 0x0027E458U, 0x0027E324U, 0x0027E458U, 0x0027E380U, 0x0027E3FCU, 0x0027E458U, 0x0027E464U, 0x0027E464U, 0x0027E464U};
const float unbake_rodata_800C4F84_4 = 5.11999989f;
const float unbake_rodata_800C4F88_4 = 5.11999989f;
const float unbake_rodata_800C4F8C_4 = 1.02400005f;
const float unbake_rodata_800C4F90_4 = 5.11999989f;
const float unbake_rodata_800C4F94_4 = 5.11999989f;
const float unbake_rodata_800C4F98_4 = 0.00392156886f;
const float unbake_rodata_800C4F9C_4 = 0.0341796875f;
const float unbake_rodata_800C4FA0_4 = (-1.0f);
const float unbake_rodata_800C4FA4_4 = 10.2399998f;
const float unbake_rodata_800C4FA8_4 = 10.2399998f;
const float unbake_rodata_800C4FAC_4 = 0.00787401572f;
const float unbake_rodata_800C4FB0_4 = 0.087266475f;
const float unbake_rodata_800C4FB4_4 = 18.8495579f;
const float unbake_rodata_800C4FB8_4 = 0.25f;
const float unbake_rodata_800C4FBC_4 = 43.9822998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4E98_4 = 51.1999969f;
const float unbake_rodata_800C4E9C_4 = 1024.0f;
const float unbake_rodata_800C4EA0_4 = 204.799988f;
const float unbake_rodata_800C4EA4_4 = 0.00122070312f;
const float unbake_rodata_800C4EA8_4 = 0.859999955f;
const float unbake_rodata_800C4EAC_4 = 0.899999976f;
const float unbake_rodata_800C4EB0_4 = 0.0399999991f;
const float unbake_rodata_800C4EB4_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C50FC_4 = (-2.0f);
#endif

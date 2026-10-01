#include "basetypes.h"

typedef s32 (*Handler)(void *arg0);

extern Handler *D_800CE000[];

typedef struct func_80211020_S1 func_80211020_S1;
struct func_80211020_S1 {
    char pad0[0x21C];
    s32 unk21C;
    char pad21C[0x220 - 0x21C - sizeof(s32)];
    s32 unk220;
};

void func_80211020(void *arg0) {
    s32 origIdx;
    s32 idx;
    s32 idx2;
    Handler *table;
    Handler fn;
    s32 result;

    origIdx = ((func_80211020_S1 *)(arg0))->unk21C;
    if ((u32)origIdx >= 0xE) {
        ((func_80211020_S1 *)(arg0))->unk21C = 0;
    }
    idx = ((func_80211020_S1 *)(arg0))->unk21C;
    table = D_800CE000[idx];
    if (table != 0) {
        idx2 = ((func_80211020_S1 *)(arg0))->unk220;
        fn = table[idx2];
        if (fn == 0) {
            ((func_80211020_S1 *)(arg0))->unk220 = 0;
            fn = table[0];
        }
        if (fn != 0) {
            result = fn(arg0);
            if (result != 0) {
                ((func_80211020_S1 *)(arg0))->unk220 = ((func_80211020_S1 *)(arg0))->unk220 + 1;
            }
            if (((func_80211020_S1 *)(arg0))->unk21C != origIdx) {
                ((func_80211020_S1 *)(arg0))->unk220 = 0;
            }
        }
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C4000_8 = 4294967296.0;
const double unbake_rodata_800C4008_8 = 4294967296.0;
const double unbake_rodata_800C4010_8 = 4294967296.0;
const double unbake_rodata_800C4018_8 = 4294967296.0;
const double unbake_rodata_800C4020_8 = 4294967296.0;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9184_4 = 3.05185094e-05f;
const float unbake_rodata_800C9188_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C40C0_4 = 2.14748365e+09f;
const float unbake_rodata_800C40C4_4 = 5.11999989f;
const float unbake_rodata_800C40C8_4 = 1.57079649f;
const float unbake_rodata_800C40CC_4 = 3.14159298f;
const float unbake_rodata_800C40D0_4 = 4.71238947f;
const float unbake_rodata_800C40D4_4 = 102.399994f;
const float unbake_rodata_800C40D8_4 = 10.2399998f;
const float unbake_rodata_800C40DC_4 = 0.5f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C4040_8 = 4294967296.0;
const double unbake_rodata_800C4048_8 = 4294967296.0;
const double unbake_rodata_800C4050_8 = 4294967296.0;
const double unbake_rodata_800C4058_8 = 4294967296.0;
const double unbake_rodata_800C4060_8 = 4294967296.0;
const double unbake_rodata_800C4068_8 = 4294967296.0;
const double unbake_rodata_800C4070_8 = 4294967296.0;
const double unbake_rodata_800C4078_8 = 4294967296.0;
const double unbake_rodata_800C4080_8 = 4294967296.0;
const double unbake_rodata_800C4088_8 = 4294967296.0;
const float unbake_rodata_800C4090_4 = 1.0f;
#endif

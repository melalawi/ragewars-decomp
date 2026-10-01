#include "basetypes.h"

extern f32 D_800C7DF0;
extern f32 D_800C7DF4;

typedef struct func_8022ADAC_S1 func_8022ADAC_S1;
typedef struct func_8022ADAC_S2 func_8022ADAC_S2;
struct func_8022ADAC_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8022ADAC_S2 {
    char pad0[0xF4];
    f32 unkF4;
};

f32 func_8022ADAC(void *arg0) {
    void *temp_v0;

    temp_v0 = ((func_8022ADAC_S1 *)(arg0))->unk18;
    if (temp_v0 != 0) {
        return ((func_8022ADAC_S2 *)(temp_v0))->unkF4 * D_800C7DF4;
    }
    return D_800C7DF0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2C30_4 = 82.9439926f;
const float unbake_rodata_800C2C34_4 = 0.899999976f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7DF0_4 = 82.9439926f;
const float unbake_rodata_800C7DF4_4 = 0.899999976f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2FA8_4 = 82.9439926f;
const float unbake_rodata_800C2FAC_4 = 0.899999976f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2FE8_4 = 82.9439926f;
const float unbake_rodata_800C2FEC_4 = 0.899999976f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D00_4 = 82.9439926f;
const float unbake_rodata_800C2D04_4 = 0.899999976f;
#endif

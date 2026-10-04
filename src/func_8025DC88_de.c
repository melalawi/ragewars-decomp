#include "common/types.h"
#include "span_1000/code_8025DB64.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"

extern void func_802AFF60_de(s32 arg0, s16 arg1);



extern f32 D_800C4030_de;









void func_8025DC88_de(void *arg0) {
    char *o = (char *) arg0;
    f32 var_f20;
    void *temp_v0;

    if (((ObjectState40 *)(o))->unk_38 != 0) {
        f32 prod = ((struct func_80258BB4_S1 *) ((ObjectState40 *) o)->unk_0.v0)->unk2BA4;
        prod = prod * ((func_802077F4_S2 *)(&D_800C4020_de))->unk4;
        var_f20 = (f32) (((ObjectState40 *)(o))->unk_24);
        var_f20 = var_f20 * prod;
        var_f20 = var_f20 * ((ObjectState40 *)(o))->unk_3C;
        goto do_update;
    }
    temp_v0 = ((ObjectState40 *)(o))->unk_0.v1;
    var_f20 = (f32) (((ObjectState40 *)(o))->unk_24) * (((ObjectState2BBC *)(temp_v0))->unk_2BA4 * D_800C4028_de);
    if (((ObjectState2BBC *)(temp_v0))->unk_2BB8 != 0) {
        var_f20 = var_f20 * (0.699999988079071f);
    }
    if (var_f20 != ((ObjectState40 *)(o))->unk_2C) {
do_update:
        func_802AFF60_de(((ObjectState40 *)(o))->unk_14, (s16) (s32) (var_f20 * D_800C4030_de));
        ((ObjectState40 *)(o))->unk_2C = var_f20;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F54_4 = 0.00999999978f;
const float unbake_rodata_800C3F58_4 = 0.00999999978f;
const float unbake_rodata_800C3F5C_4 = 0.699999988f;
const float unbake_rodata_800C3F60_4 = 32767.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9114_4 = 0.00999999978f;
const float unbake_rodata_800C9118_4 = 0.00999999978f;
const float unbake_rodata_800C911C_4 = 0.699999988f;
const float unbake_rodata_800C9120_4 = 32767.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C42D4_4 = 0.00999999978f;
const float unbake_rodata_800C42D8_4 = 0.00999999978f;
const float unbake_rodata_800C42DC_4 = 0.699999988f;
const float unbake_rodata_800C42E0_4 = 32767.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4314_4 = 0.00999999978f;
const float unbake_rodata_800C4318_4 = 0.00999999978f;
const float unbake_rodata_800C431C_4 = 0.699999988f;
const float unbake_rodata_800C4320_4 = 32767.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4024_4 = 0.00999999978f;
const float unbake_rodata_800C4028_4 = 0.00999999978f;
const float unbake_rodata_800C402C_4 = 0.699999988f;
const float unbake_rodata_800C4030_4 = 32767.0f;
#endif

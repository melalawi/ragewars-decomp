#include "basetypes.h"

extern f32 D_800D0648;
extern f32 D_800C87C8;

typedef struct func_8023ED54_S1 func_8023ED54_S1;
typedef struct func_8023ED54_S2 func_8023ED54_S2;
struct func_8023ED54_S1 {
    s32 unk0;
    char pad0[0x8 - 0x0 - sizeof(s32)];
    s32 unk8;
    char pad8[0xCC - 0x8 - sizeof(s32)];
    f32 unkCC;
};
struct func_8023ED54_S2 {
    char pad0[0x80];
    f32 unk80;
    char pad80[0x17C - 0x80 - sizeof(f32)];
    f32 unk17C;
};

s32 func_8023ED54(void *arg0, void *arg1) {
    f32 temp_f2;
    s32 var_v0;

    temp_f2 = ((func_8023ED54_S1 *)(arg1))->unkCC;
    if (temp_f2 <= 0.0f) {
        if (((func_8023ED54_S1 *)(arg1))->unk8 == 7) {
            return 0;
        }
        if ((u32) (((func_8023ED54_S1 *)(arg1))->unk0 - 5) < 2) {
            return 0;
        }
        if ((temp_f2 * ((func_8023ED54_S2 *)(arg0))->unk80) < -(D_800D0648 * D_800C87C8)) {
            return 0;
        }
    }
    var_v0 = 0;
    {
        f32 b = ((func_8023ED54_S1 *)(arg1))->unkCC;
        if (!(((func_8023ED54_S2 *)(arg0))->unk17C <= b)) {
            var_v0 = 1;
        }
    }
    return var_v0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3608_4 = 10.2399998f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C87C8_4 = 10.2399998f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3988_4 = 10.2399998f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C39C8_4 = 10.2399998f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C36D8_4 = 10.2399998f;
#endif

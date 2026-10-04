#include "common/types.h"
#include "span_1000/code_8028DF6C.h"
#include "span_C76B0/data.h"
#include "types.h"




extern void func_80271F68_de(Vec3 *arg0, Vec3 *arg1, Vec3 *arg2);




s32 func_8028E78C_de(void *arg0, Vec3 *arg1) {
    Vec3 sp10;
    f32 magnitude;
    u16 type;

    func_80271F68_de(&sp10, &((func_8028E768_S1 *)(arg0))->unk8, arg1);
    magnitude = (sp10.x * sp10.x) + (sp10.y * sp10.y) + (sp10.z * sp10.z);
    if (*((func_8028E768_S1 *)(arg0))->unk18 != 1) {
        return 0;
    }
    type = ((func_8028E768_S1 *)(arg0))->unkE4;
    if (type == 0x44E || type == 0x453 || type == 0x451 || type == 0x450 ||
        type == 0x454 || type == 0x455 || type == 0x456) {
        return 0;
    }
    if (((func_8028E768_S1 *)(arg0))->unk174 == 0) {
        return 0;
    }
    if (((func_8028E768_S1 *)(arg0))->unk1A4 == 0x3D) {
        return 0;
    }
    return magnitude <= D_800C533C_de;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C526C_4 = 6553600.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA42C_4 = 6553600.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C55EC_4 = 6553600.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C562C_4 = 6553600.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C533C_4 = 6553600.0f;
#endif

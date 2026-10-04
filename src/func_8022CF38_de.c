#include "common/types.h"
#include "span_1000/code_8022C36C.h"
#include "span_1000/code_80233C78.h"
#include "types.h"



extern const f32 D_800C2D94_de;
extern const f32 D_800C2D98_de;



extern void func_80218464_de();
extern s32 func_8025DE54_de(s16 arg0, Vec3 arg1, s32 arg4, s32 arg5);






void func_8022CF38_de(void *arg0, void *arg1) {
    f32 value;
    f32 minimum;
    ((func_8022CF28_S1 *)(arg0))->unk6C0 *= D_800C2D94_de;
    ((func_8022CF28_S1 *)(arg0))->unk6C4 *= D_800C2D94_de;

    value = ((func_8022CF28_S2 *)(arg1))->unk20 * D_800C2D98_de;
    minimum = ((D_800C7470_Pair *)&D_800C2D98_de)->second;
    ((func_8022CF28_S2 *)(arg1))->unk20 = value;
    if (value < minimum) {
        ((func_8022CF28_S2 *)(arg1))->unk20 = minimum;
    }

    ((func_8022CF28_S1 *)(arg0))->unk848 = 0;
    func_8023913C_de(((func_8022CF28_S1 *)(arg0))->unk5DC);
    func_80218464_de(&((func_8022CF28_S1 *)arg0)->unk938);

    if (((func_8022CF28_S2 *)(arg1))->unk38 & 0x8000) {
        func_8025DE54_de(0x2DA, ((func_8022CF28_S2 *)(arg1))->unk8, 0, -1);
    } else {
        func_8025DE54_de(0x2DC, ((func_8022CF28_S2 *)(arg1))->unk8, 0, -1);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2CC4_4 = 0.5f;
const float unbake_rodata_800C2CC8_4 = 0.75f;
const float unbake_rodata_800C2CCC_4 = (-51.1999969f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7E84_4 = 0.5f;
const float unbake_rodata_800C7E88_4 = 0.75f;
const float unbake_rodata_800C7E8C_4 = (-51.1999969f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C3038_4 = 0.5f;
const float unbake_rodata_800C303C_4 = 0.75f;
const float unbake_rodata_800C3040_4 = (-51.1999969f);
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3078_4 = 0.5f;
const float unbake_rodata_800C307C_4 = 0.75f;
const float unbake_rodata_800C3080_4 = (-51.1999969f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C2D94_4 = 0.5f;
const float unbake_rodata_800C2D98_4 = 0.75f;
const float unbake_rodata_800C2D9C_4 = (-51.1999969f);
#endif

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

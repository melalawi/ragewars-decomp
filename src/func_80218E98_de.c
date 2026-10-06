#include "common/types_06e4f7ef1f9e.h"
#include "span_1000/code_80217388.h"
#include "common/reset_storage.h"
#include "types.h"

extern float D_800C9178_de;









/** Reset the object and initialize its four descending-offset records. */
void func_80218E98_de(char *arg0) {
    s32 i;
    s32 minus_one = -1;
    f32 scale = ((func_802077F4_S2 *)(&D_800C22A8_de))->unk4;
    f32 value = ((func_802077F4_S2 *)(&D_800C9178_de))->unk4;

    ((ResetFourStorage *)(arg0))->unk0 = 0;
    ((ResetFourStorage *)(arg0))->unk4 = 0;
    ((ResetFourStorage *)(arg0))->unk8 = 0;
    ((ResetFourStorage *)(arg0))->unkC = 0;
    ((ResetFourStorage *)(arg0))->unk14 = 0;
    ((ResetFourStorage *)(arg0))->unk6C = minus_one;
    ((ResetFourStorage *)(arg0))->unk18 = 4;
    ((ResetFourStorage *)(arg0))->unk70 = minus_one;

    for (i = 0; i < 4; i++, arg0 = (char *)((u32)arg0 + 0x14)) {
        f32 scaled = i * scale;
        ((ResetFourStorage *)(arg0))->unk28 = 0;
        ((ResetFourStorage *)(arg0))->unk2C = value;
        ((ResetFourStorage *)(arg0))->unk24 = -scaled;
    }
}

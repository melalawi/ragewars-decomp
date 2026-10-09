#include "span_1000/code_80209AE8.h"
#include "types.h"



extern f32 func_80274564_de(f32 arg0);






void func_8020A95C_de(void *arg0, void *arg1) {
    f32 k = D_800C6E20;
    u8 *o = (u8 *) arg0;
    u8 *i = (u8 *) arg1;

    ((func_8020A95C_S1 *)(o))->unk2E4 = ((func_8020A95C_S2 *)(i))->unk0;
    ((func_8020A95C_S1 *)(o))->unk2E4 = (s32) ((f32) ((func_8020A95C_S1 *)(o))->unk2E4 + (func_80274564_de(k) * (f32) ((func_8020A95C_S2 *)(i))->unk4));
    ((func_8020A95C_S1 *)(o))->unk2E8 = ((func_8020A95C_S2 *)(i))->unk8;
    ((func_8020A95C_S1 *)(o))->unk2E8 = (s32) ((f32) ((func_8020A95C_S1 *)(o))->unk2E8 + (func_80274564_de(k) * (f32) ((func_8020A95C_S2 *)(i))->unkC));
    if (((func_8020A95C_S2 *)(i))->unk18 == 0x64) {
        ((func_8020A95C_S1 *)(o))->unk240 = 1;
    }
}

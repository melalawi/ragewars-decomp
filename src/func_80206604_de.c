#include "span_1000/code_8020570C.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 func_80245B0C_de(void);
extern s32 D_00206724;
extern s32 D_0020694C;
extern s32 D_800C85F0_de;

extern func_80206604_G1 D_801462E5;






void func_80206604_de(void *arg0, void *arg1) {
    s32 flags;
    s32 flags2;

    ((func_80206604_S1 *)(arg1))->unk2C = &D_800C85F0_de;
    ((func_80206604_S1 *)(arg1))->unk108 = &D_00206724;
    flags = ((func_802044C8_S1 *)(arg0))->unk100;
    flags |= 0x01000000;
    flags |= 0x02000000;
    flags2 = flags | 0x20000;
    ((func_802044C8_S1 *)(arg0))->unk100 = flags2;
    if (D_801462E5.unk0 == 0) {
        ((func_802044C8_S1 *)(arg0))->unk100 = flags2 | 0x10000000;
    }
    if ((((func_802044C8_S1 *)(arg0))->unkE4 == 0x453) && (func_80245B0C_de() == 0x6F)) {
        ((func_80206604_S1 *)(arg1))->unk10C = &D_0020694C;
    }
}

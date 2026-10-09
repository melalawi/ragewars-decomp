#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8022D944.h"
#include "types.h"



extern s32 func_8024E7DC_de(void *);
extern s32 func_8024E62C_de(void *arg0);
extern void func_8021B1E4_de(void *, s32, s32, s32);
extern f32 D_800C7F08;











void func_8022E6A4_de(void *arg0, void *arg1) {
    void *temp_v0;

    temp_v0 = func_8024E7DC_de(arg1);
    if ((temp_v0 != 0) && (((func_8022E694_S1 *)(temp_v0))->unk44 & 0x4000)) {
        ((func_8022E694_S2 *)(arg1))->unk20 = 0;
    } else if (((func_8022E694_S2 *)(arg1))->unkC < (D_801370C4 - D_800C7F08)) {
        func_8021B1E4_de(arg0, ((func_8022E694_S3 *)(arg0))->unk5EC, 0, 0);
    }
    if (func_8024E62C_de(arg1) != 0) {
        ((func_8022E694_S3 *)(arg0))->unk6F8 = ((func_80204EA8_S1 *)(arg1))->unk8;
    }
}

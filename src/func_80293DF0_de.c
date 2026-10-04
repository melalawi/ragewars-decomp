#include "span_1000/code_8029193C.h"
#include "span_C76B0/data.h"
#include "types.h"

extern s32 D_800DE878;
extern s32 D_80142CB0;


extern s32 D_80142CA0_de;

extern s32 D_80146CD4_de;

extern void func_8040C428_de(s32 arg0);
extern void func_80298368_de(s32 arg0);




void func_80293DF0_de(void *arg0) {
    D_800DE878 = -1;
    D_80142CB0 = 0;
    func_8040C428_de(0);
    D_800CD774 = 1;
    D_80142CA0_de = 1;
    D_800DE87C_de = 1;
    D_80146CD4_de = 0;
    ((func_80293378_S1 *)(arg0))->unk26DC4 = D_800C54C0_de;
    func_80298368_de(0x1D);
}

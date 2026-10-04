#include "span_1000/code_80297008.h"
#include "span_1000/code_8029AC80.h"
#include "types.h"
/* Refreshes the selected entry and updates its interface state. */
#define NULL ((void *)0)
  
void func_80297310_de(s32, s32, void *, s32, s32);                 /* extern */
                               /* extern */
extern State_func_80297DBC_de *D_80146E00;

void func_80297DBC_de(void) {
    s32 (*temp_v0)(s32);
    s32 temp_s0;
    s32 value, param;

    temp_s0 = D_80146E00->unk4;
    temp_v0 = D_80146E00->unk10;
    param = (&D_80146E00->unkC[temp_s0])->unk4;
    if (temp_v0 != NULL) {
        value = temp_v0(param);
        (&D_80146E00->unkC[temp_s0])->unk0->unk40 = value;
    }
    func_80297310_de(1, 0xE06, 0, 0, 0);
    func_80297310_de(1, 0xE07, 0, 0, 0);
    (&D_80146E00->unkC[temp_s0])->unk14 = 0;
    func_80297310_de(1, 0xE02, &D_80146E00->unkC[temp_s0].unkC, 0, 0);
    func_80299C80_de(&D_80146E00->unkC[temp_s0].unkC);
}

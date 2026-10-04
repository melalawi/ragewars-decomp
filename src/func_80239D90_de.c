#include "span_1000/code_8023940C.h"
#include "span_1000/types.h"
#include "span_C76B0/data.h"
#include "types.h"












/** Zero the object's vector fields and reset the scale field to the default. */
void func_80239D90_de(void *arg0) {
    u8 *o = (u8 *)arg0;
    u8 *v0;
    u8 *v1;
    u8 *v2;
    f32 diag;

    diag = D_800C3570_de;
    v0 = o + 0x18;
    ((func_80239D80_S1 *)(o))->unk8 = 0;
    ((func_80239D80_S1 *)(o))->unkC = 0;
    ((func_80239D80_S1 *)(o))->unk10 = 0;
    ((func_80239D80_S1 *)(o))->unk14 = diag;
    ((func_80239CDC_S1 *)(v0))->unk4 = 0;
    ((func_80239CDC_S1 *)(v0))->unk8 = 0;
    ((func_80239CDC_S1 *)(v0))->unkC = 0;
    ((func_80239CDC_S1 *)(v0))->unk10 = 0;
    v1 = o + 0x2C;
    v2 = o + 0x40;
    ((func_80239CDC_S1 *)(v1))->unk4 = 0;
    ((func_80239CDC_S1 *)(v1))->unk8 = 0;
    ((func_80239CDC_S1 *)(v1))->unkC = 0;
    ((func_80239CDC_S1 *)(v1))->unk10 = 0;
    ((func_80239CDC_S1 *)(v2))->unk4 = 0;
    ((func_80239CDC_S1 *)(v2))->unk8 = 0;
    ((func_80239CDC_S1 *)(v2))->unkC = 0;
    ((func_80239CDC_S1 *)(v2))->unk10 = 0;
}

#include "common/types.h"
#include "span_1000/code_8023A4CC.h"
#include "span_1000/types.h"
/* FAKEMATCH: retains inherited volatile storage qualifiers to preserve compiler load/store order; semantic volatility has not been established. */
#include "types.h"


extern u32 D_800FFB5C;
extern Node_func_80239AF4_de D_800FFF88;








extern func_80205628_S3 *D_800FFE20;
extern s32 D_800FF24C[];

void func_8023C6BC_de(void) {
    u32 var_a2;
    u32 var_a3;
    s32 var_a1;
    char *var_a0;
    u32 temp_v1;
    Node_func_80239AF4_de *var_v1;
    s32 var_a0_2;
    u16 temp_v0;
    s32 *out;
    volatile s32 *ordered;

    var_a2 = 0;
    var_a3 = 0x80000000;
    var_a1 = 0;
    var_a0 = (char *)&D_800FFB5C;
    do {
        temp_v1 = *(u32 *)var_a0;
        if (var_a2 < temp_v1) {
            var_a2 = temp_v1;
        }
        if (temp_v1 < var_a3) {
            var_a3 = temp_v1;
        }
        *(u32 *)var_a0 = temp_v1 + 1;
        var_a1 += 1;
        var_a0 += 0x10;
    } while (var_a1 < 0x18);

    var_v1 = &D_800FFF88;
    var_a0_2 = 0;
    if (&D_800FFF88 != 0) {
        do {
            temp_v0 = ((func_8020676C_S1 *)(var_v1))->unk6;
            var_v1 = var_v1->next;
            var_a0_2 += temp_v0 << 0xC;
        } while (var_v1 != 0);
    }

    out = D_800FF24C;
    ordered = out;
    ordered[0] = var_a0_2;
    ordered[-3] = var_a2;
    ordered[-2] = var_a3;
    out[-1] = D_800FFE20->unkC;
}

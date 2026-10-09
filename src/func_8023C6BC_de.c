#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_8023B9A0.h"
#include "types.h"


extern u32 D_800FFB5C;
extern Node_func_80239AF4_de D_80103F88;








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
    s32 *ordered;

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

    var_v1 = &D_80103F88;
    var_a0_2 = 0;
    if (&D_80103F88 != 0) {
        do {
            temp_v0 = ((func_8020676C_S1 *)(var_v1))->unk6;
            var_v1 = var_v1->next;
            var_a0_2 += temp_v0 << 0xC;
        } while (var_v1 != 0);
    }

    out = D_800FF24C;
    ordered = out;
    *ordered = var_a0_2;
    ((u32 *)ordered)[-3] = var_a2;
    ((u32 *)ordered)[-2] = var_a3;
    __builtin_memcpy(&out[-1], &D_800FFE20->unkC, sizeof(s32));
}

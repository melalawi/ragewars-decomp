#include "span_16E000/code_80449968.h"
#include "types.h"
/* Initializes a list and its eight records with default state. */

void func_80255CA0_de(s32, s32, s32);                         /* extern */
void func_80255D14_de(s32, void *);                       /* extern */


void func_8044B0E0_de(s32 arg0) {
    f32 temp_f20;
    s32 var_s1;
    s32 var_s2;
    Record_func_8044B0E0_de *temp_s0;

    func_80255CA0_de(arg0, 0, 4);
    func_80255CA0_de(arg0 + 0x14, 0, 4);
    var_s2 = 0;
    var_s1 = 0x28;
    temp_f20 = 1.0f;
    do {
        temp_s0 = (Record_func_8044B0E0_de *)(arg0 + var_s1);
        func_80255D14_de(arg0 + 0x14, temp_s0);
        var_s1 += 0x18;
        var_s2 += 1;
        temp_s0->unk8 = 0;
        temp_s0->unkC = temp_f20;
        temp_s0->unk16 = 0;
    } while (var_s2 < 8);
}

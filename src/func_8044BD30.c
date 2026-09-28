/* Initializes a list and its eight records with default state. */
#include "basetypes.h"
typedef struct {char p[8];s32 unk8;f32 unkC;char q[6];s16 unk16;} Record;
void func_80255C40(s32, s32, s32);                         /* extern */
void func_80255CB4(s32, void *);                       /* extern */


void func_8044BD30(s32 arg0) {
    f32 temp_f20;
    s32 var_s1;
    s32 var_s2;
    Record *temp_s0;

    func_80255C40(arg0, 0, 4);
    func_80255C40(arg0 + 0x14, 0, 4);
    var_s2 = 0;
    var_s1 = 0x28;
    temp_f20 = 1.0f;
    do {
        temp_s0 = (Record *)(arg0 + var_s1);
        func_80255CB4(arg0 + 0x14, temp_s0);
        var_s1 += 0x18;
        var_s2 += 1;
        temp_s0->unk8 = 0;
        temp_s0->unkC = temp_f20;
        temp_s0->unk16 = 0;
    } while (var_s2 < 8);
}

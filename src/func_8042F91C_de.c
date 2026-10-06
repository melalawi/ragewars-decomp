#include "span_16E000/code_8042F988.h"
/* Phase1 source candidate; contract holds and immutable inputs in per-function JSON. */
#include "common/unused.h"
#include "types.h"
/* Animates the two menu panels through open, close and countdown states and updates the active team menu. */
#define CLAMP(value, low, high) ((value) < (low) ? (low) : (value) > (high) ? (high) : (value))


extern State_func_8042F91C_de *D_800E1454_de;
UNRESOLVED_CALLABLE_CONTRACT(func_8025DF34_de);
extern void func_80298368_de(s32);
UNRESOLVED_CALLABLE_CONTRACT(func_8029973C_de);
extern void func_802A2360_de(void);
extern void func_8040E8D8_de(s32,s32);
extern void func_80419F24_de(s32);
extern void func_80419F58_de(s32,s32);

extern s32 func_80419F38_de(s32);
s32 func_8042F91C_de(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 var_v0;
    Field_u16_14 *temp_a0;
    Field_u16_14 *temp_a0_2;
    Field_u16_14 *temp_a1;
    Field_u16_14 *temp_a1_2;

    if (D_800DE890 < 2) {
        temp_v0 = D_800E1454_de->unk4C;
        switch (temp_v0) {
        case 1:
            temp_a1 = D_800E1454_de->unk3C;
            temp_a1->value = (u16) (temp_a1->value + D_800E1454_de->unk42);
            temp_a1_2 = D_800E1454_de->unk44;
            temp_a1_2->value = (u16) (temp_a1_2->value - D_800E1454_de->unk4A);
            temp_v0_2 = D_800E1454_de->unk50 - 1;
            D_800E1454_de->unk50 = temp_v0_2;
            if (temp_v0_2 <= 0) {
                func_8025DF34_de(0xE79, temp_a1_2);
                func_8040E8D8_de(D_800E1454_de->unk28, 1);
                func_80419F58_de(D_800E1454_de->unk24, 4);
                D_800E1454_de->unk4C = 4;
                D_800E1454_de->unk50 = 4;
            }
            break;
        case 2:
            temp_a0 = D_800E1454_de->unk3C;
            temp_a0->value = (u16) (temp_a0->value - D_800E1454_de->unk42);
            temp_a0_2 = D_800E1454_de->unk44;
            temp_a0_2->value = (u16) (temp_a0_2->value + D_800E1454_de->unk4A);
            temp_v0_3 = D_800E1454_de->unk50 - 1;
            D_800E1454_de->unk50 = temp_v0_3;
            if (temp_v0_3 <= 0) {
                D_800E1454_de->unk4C = 3;
                func_8029973C_de(temp_a0_2, D_800E1454_de);
                func_80298368_de(D_800E1454_de->unk3470);
                return 0;
            }
            break;
        case 3:
            func_802A2360_de();
            break;
        case 4:
            D_800E1454_de->unk50 = CLAMP(D_800E1454_de->unk50 - 1, 0, D_800E1454_de->unk50);
            if ((D_800E1454_de->unk50 <= 0) && (func_80419F38_de(D_800E1454_de->unk24) != 0)) {
                func_80419F24_de(D_800E1454_de->unk24);
                D_800E1454_de->unk4C = 3;
            }
            break;
        case 5:
            func_8025DF34_de(0xE78);
            D_800E1454_de->unk4C = 2;
            D_800E1454_de->unk50 = 4;
            func_8040E8D8_de(D_800E1454_de->unk28, 0);
            break;
        }
        if (D_800E1454_de->unk4C == 3) func_80433398_de(arg2);
    }
    return 0;
}

#include "span_16E000/code_80444260.h"
#include "span_16E000/types.h"
#include "types.h"

/* Points a field's text at one of the three labels D_800D7604, D_800D7608 or D_800D760C chosen by the option byte D_801462E3 and returns zero.
   Adapted from func_8040BBC0_us with the jump-table state word changed to a three-case switch on an option byte. */



extern u8 D_80142223;
extern char D_800D35D8[];
extern char D_800D35DC[];
extern char D_800D35E0[];

s32 func_8044472C_de(struct Field_func_8040A4A0_de *field) {
    switch (D_80142223) {
    case 0:
        field->text = D_800D35D8;
        break;
    case 1:
        field->text = D_800D35DC;
        break;
    case 2:
        field->text = D_800D35E0;
        break;
    default:
        return 0;
    }
    return 0;
}

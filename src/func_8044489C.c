#include "basetypes.h"

/* Points a field's text at one of the three labels D_800D7604, D_800D7608 or D_800D760C chosen by the option byte D_801462E3 and returns zero.
   Adapted from func_8040BBC0 with the jump-table state word changed to a three-case switch on an option byte. */

struct Field {
    char pad[0x14];
    char *text;
};

extern u8 D_801462E3;
extern char D_800D7604[];
extern char D_800D7608[];
extern char D_800D760C[];

s32 func_8044489C(struct Field *field) {
    switch (D_801462E3) {
    case 0:
        field->text = D_800D7604;
        break;
    case 1:
        field->text = D_800D7608;
        break;
    case 2:
        field->text = D_800D760C;
        break;
    default:
        return 0;
    }
    return 0;
}

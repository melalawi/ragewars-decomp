#include "basetypes.h"

/* Points a field's text at D_800D7974 when the option D_80153734 is set and at D_800D7980 otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_80153734;
extern char D_800D7974[];
extern char D_800D7980[];

s32 func_8040B490(struct Field *field) {
    if (D_80153734 != 0) {
        field->text = D_800D7974;
    } else {
        field->text = D_800D7980;
    }
    return 0;
}

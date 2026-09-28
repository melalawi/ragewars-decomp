#include "basetypes.h"

/* Points a field's text at D_800D7810 when the option D_80153780 is set and at D_800D7814 otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_80153780;
extern char D_800D7810[];
extern char D_800D7814[];

s32 func_8040A6D4(struct Field *field) {
    if (D_80153780 != 0) {
        field->text = D_800D7810;
    } else {
        field->text = D_800D7814;
    }
    return 0;
}

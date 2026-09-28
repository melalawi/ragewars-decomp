#include "basetypes.h"

/* Points a field's text at D_800D77CC when the option D_80153780 is set and at D_800D77D0 otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_80153780;
extern char D_800D77CC[];
extern char D_800D77D0[];

s32 func_8040A4CC(struct Field *field) {
    if (D_80153780 != 0) {
        field->text = D_800D77CC;
    } else {
        field->text = D_800D77D0;
    }
    return 0;
}

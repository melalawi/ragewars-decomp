#include "basetypes.h"

/* Points a field's text at D_800E60E4 when the option D_800D0EBC is set and at D_800E60C8 otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_800D0EBC;
extern char D_800E60E4[];
extern char D_800E60C8[];

s32 func_80446090(struct Field *field) {
    if (D_800D0EBC != 0) {
        field->text = D_800E60E4;
    } else {
        field->text = D_800E60C8;
    }
    return 0;
}

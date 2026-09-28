#include "basetypes.h"

/* Points a field's text at D_800D7970 when the option D_80153734 is set and at D_800D797C otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_80153734;
extern char D_800D7970[];
extern char D_800D797C[];

s32 func_8040B45C(struct Field *field) {
    if (D_80153734 != 0) {
        field->text = D_800D7970;
    } else {
        field->text = D_800D797C;
    }
    return 0;
}

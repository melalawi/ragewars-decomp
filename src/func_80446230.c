#include "basetypes.h"

/* Points a field's text at D_800E6058 when the option D_800D2AE0 is set and at D_800E6074 otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_800D2AE0;
extern char D_800E6058[];
extern char D_800E6074[];

s32 func_80446230(struct Field *field) {
    if (D_800D2AE0 != 0) {
        field->text = D_800E6058;
    } else {
        field->text = D_800E6074;
    }
    return 0;
}

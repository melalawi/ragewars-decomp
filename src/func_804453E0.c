#include "basetypes.h"

/* Points a field's text at D_800E62DC when the option D_800E63AC is set and at D_800E62F0 otherwise, and returns
   zero: the label an option menu shows for that option. */
struct Field {
    char pad[0x14];
    char *text;
};

extern s32 D_800E63AC;
extern char D_800E62DC[];
extern char D_800E62F0[];

s32 func_804453E0(struct Field *field) {
    if (D_800E63AC != 0) {
        field->text = D_800E62DC;
    } else {
        field->text = D_800E62F0;
    }
    return 0;
}

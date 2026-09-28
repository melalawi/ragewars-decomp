#include "basetypes.h"

/* Points a field's text at one of D_800D7DC0, D_800D7DBC or D_800D7DB8 when the option byte D_801462E0 measured from 0x80 in steps of eight is zero, fifteen or minus sixteen, and otherwise at D_800D7DC4 with the step formatted into it, returning zero. Adapted from func_80445AB8 with D_801462E2 changed to D_801462E0 and the text slots D_800D7DD8..D_800D7DE4 changed to D_800D7DB8..D_800D7DC4. */
struct Field {
    char pad[0x14];
    char **text;
};

extern u8 D_801462E0;
extern char *D_800D7DB8;
extern char *D_800D7DBC;
extern char *D_800D7DC0;
extern char *D_800D7DC4;
extern char D_800E27E0[];
extern char D_800E27E8[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_80445C08(struct Field *field) {
    s32 step = (D_801462E0 - 0x80) / 8;
    char *text;

    if (step == 0) {
        field->text = &D_800D7DC0;
    } else if (step == 15) {
        field->text = &D_800D7DBC;
    } else if (step == -16) {
        field->text = &D_800D7DB8;
    } else if (step > 0) {
        field->text = &D_800D7DC4;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 4), D_800E27E0, step);
    } else {
        field->text = &D_800D7DC4;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 4), D_800E27E8, step);
    }
    return 0;
}

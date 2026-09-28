#include "basetypes.h"

/* Keeps an option field and the remembered byte D_800D0EEA[0] in step, giving a field still at -1 the remembered value and otherwise remembering the field's low byte, then mirrors it into D_800D0EEE[0] and formats it into the field's text with D_800E27D8 three bytes before the length func_80442158 reports, returning zero. Adapted from func_804454B4. */

struct Field {
    char pad[0x14];
    char **text;
    s32 pad18;
    s32 value;
};

extern u8 D_800D0EEA[];
extern u8 D_800D0EEE[];
extern char D_800E27D8[];
extern s32 func_80442158(struct Field *);
extern void func_802C2410(char *, char *, s32);

s32 func_80445824(struct Field *field) {
    char *text = *field->text;

    if (field->value == -1) {
        field->value = D_800D0EEA[0];
    } else {
        D_800D0EEA[0] = ((u8 *) &field->value)[3];
    }
    D_800D0EEE[0] = D_800D0EEA[0];
    func_802C2410(text + (func_80442158(field) - 3), D_800E27D8, field->value);
    return 0;
}

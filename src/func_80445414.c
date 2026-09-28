#include "basetypes.h"

/* Keeps an option field and the remembered byte D_800D0EE0[index] in step, giving a field still at -1 the remembered value and otherwise remembering the field low byte, then mirrors it into D_800D0EE4[index] and formats it into the field text with D_800E27D8 three bytes before the length func_80442158 reports, returning zero. Adapted from func_80445824 with the fixed byte slots replaced by the tables D_800D0EE0 and D_800D0EE4 indexed by the second argument. */

struct Field {
    char pad[0x14];
    char **text;
    s32 pad18;
    s32 value;
};

extern u8 D_800D0EE0[];
extern u8 D_800D0EE4[];
extern char D_800E27D8[];
extern s32 func_80442158(struct Field *);
extern void func_802C2410(char *, char *, s32);

s32 func_80445414(struct Field *field, s32 index) {
    char *text = *field->text;

    if (field->value == -1) {
        field->value = D_800D0EE0[index];
    } else {
        D_800D0EE0[index] = ((u8 *) &field->value)[3];
    }
    D_800D0EE4[index] = D_800D0EE0[index];
    func_802C2410(text + (func_80442158(field) - 3), D_800E27D8, field->value);
    return 0;
}

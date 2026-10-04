#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Keeps an option field and the remembered byte D_800D0EE8[index] in step, giving a field still at -1 the remembered value and otherwise remembering the field low byte, then mirrors it into D_800D0EEC[index] and formats it into the field text with D_800E27D8 three bytes before the length func_80441FE8_de reports, returning zero. Adapted from func_80445824_us_rev1 with the fixed byte slots replaced by the tables D_800D0EE8 and D_800D0EEC indexed by the second argument. */



extern u8 D_800D0EE8[];
extern u8 D_800D0EEC[];
extern char D_800E27D8[];
extern s32 func_80441FE8_de(struct Field_func_80445414_us_rev1 *);
extern void func_802BD320_de(char *, char *, s32);

s32 func_80445664_us_rev1(struct Field_func_80445414_us_rev1 *field, s32 index) {
    char *text = *field->text;

    if (field->value == -1) {
        field->value = D_800D0EE8[index];
    } else {
        D_800D0EE8[index] = ((u8 *) &field->value)[3];
    }
    D_800D0EEC[index] = D_800D0EE8[index];
    func_802BD320_de(text + (func_80441FE8_de(field) - 3), D_800E27D8, field->value);
    return 0;
}

#include "span_16E000/code_80444F9C.h"
#include "types.h"

/* Keeps an option field and the remembered byte D_800D0EE0[0] in step: a field still at -1 takes the
   remembered value, otherwise the field's low byte is remembered; the value is mirrored into
   D_800D0EE4[0] and formatted into the field's text with D_800E27D8, three bytes before the length
   func_80441FE8_de reports. Returns zero. */


extern u8 D_800D0EE0[];
extern u8 D_800D0EE4[];
extern char D_800E27D8[];
extern s32 func_80441FE8_de(struct Field_func_80445414_us_rev1 *);
extern void func_802BD320_de(char *, char *, s32);

s32 func_804454B4_us_rev1(struct Field_func_80445414_us_rev1 *field) {
    char *text = *field->text;

    if (field->value == -1) {
        field->value = D_800D0EE0[0];
    } else {
        D_800D0EE0[0] = ((u8 *) &field->value)[3];
    }
    D_800D0EE4[0] = D_800D0EE0[0];
    func_802BD320_de(text + (func_80441FE8_de(field) - 3), D_800E27D8, field->value);
    return 0;
}

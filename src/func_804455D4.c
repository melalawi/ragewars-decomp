#include "basetypes.h"

/* Keeps an option field and the remembered byte D_800D0EE0[2] in step: a field still at -1 takes the
   remembered value, otherwise the field's low byte is remembered; the value is mirrored into
   D_800D0EE4[2] and formatted into the field's text with D_800E27D8, three bytes before the length
   func_80442158 reports. Returns zero. */
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

s32 func_804455D4(struct Field *field) {
    char *text = *field->text;

    if (field->value == -1) {
        field->value = D_800D0EE0[2];
    } else {
        D_800D0EE0[2] = ((u8 *) &field->value)[3];
    }
    D_800D0EE4[2] = D_800D0EE0[2];
    func_802C2410(text + (func_80442158(field) - 3), D_800E27D8, field->value);
    return 0;
}

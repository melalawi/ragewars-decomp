#include "basetypes.h"

/* Takes D_800E28C8 when D_8015375C is set and otherwise the signed byte at offset 4 of the second argument's record at 0x20, then shows D_800D7978 in a field when D_80153734 is set and otherwise points the field at D_800D7984 and formats one more than that value into it with D_800E0DCC two bytes before the length func_80442158 reports, returning zero.
   Adapted from func_8040A32C with the value source chosen by D_8015375C, the text chosen by D_80153734, the offset two bytes, and the texts and format changed. */
struct Field {
    char pad[0x14];
    char **text;
};

struct Record {
    char pad[4];
    s8 value;
};

struct Holder {
    char pad[0x20];
    struct Record *record;
};

extern s32 D_8015375C;
extern s32 D_80153734;
extern s32 D_800E28C8;
extern char *D_800D7978[];
extern char *D_800D7984[];
extern char D_800E0DCC[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040B4C4(struct Field *field, struct Holder *holder) {
    char *text;
    s32 value;

    if (D_8015375C != 0) {
        value = D_800E28C8;
    } else {
        value = holder->record->value;
    }
    if (D_80153734 != 0) {
        field->text = D_800D7978;
    } else {
        field->text = D_800D7984;
        text = D_800D7984[0];
        func_80265904(text + (func_80442158(field) - 2), D_800E0DCC, value + 1);
    }
    return 0;
}

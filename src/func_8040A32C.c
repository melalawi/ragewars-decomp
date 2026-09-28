#include "basetypes.h"

/* Shows D_800D7E14 in a field when D_8015375C is set, and otherwise points the field at D_800D7710 and formats one more than the signed byte at offset 4 of the second argument's record at 0x20 into it with D_800E0DAC, one byte before the length func_80442158 reports, returning zero. Adapted from func_80445ECC with the test on D_8015375C, the formatted value read from the second argument's record, the offset one byte, and the texts and format changed. */
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
extern char *D_800D7E14[];
extern char *D_800D7710[];
extern char D_800E0DAC[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040A32C(struct Field *field, struct Holder *holder) {
    char *text;
    s32 value;

    if (D_8015375C != 0) {
        field->text = D_800D7E14;
    } else {
        value = holder->record->value;
        field->text = D_800D7710;
        text = D_800D7710[0];
        func_80265904(text + (func_80442158(field) - 1), D_800E0DAC, value + 1);
    }
    return 0;
}

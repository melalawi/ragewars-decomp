#include "basetypes.h"

/* Shows D_800D7754 in a field when both D_8015377C and D_80153750 are set, D_800D7758 when only D_80153750 is, and otherwise, when D_8015375C is set, points the field at D_800D7790 and formats D_800E28C8 plus one into it with D_800E0DAC one byte before the length func_80442158 reports, returning zero.
   Adapted from func_804449FC with the three flag tests, the texts, the format, the offset and the incremented value changed. */
struct Field {
    char pad[0x14];
    char **text;
};

extern s32 D_8015377C;
extern s32 D_80153750;
extern s32 D_8015375C;
extern s32 D_800E28C8;
extern char *D_800D7754[];
extern char *D_800D7758[];
extern char *D_800D7790[];
extern char D_800E0DAC[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040A270(struct Field *field) {
    char *text;
    s32 value;

    if (D_8015377C != 0 && D_80153750 != 0) {
        field->text = D_800D7754;
    } else if (D_8015377C == 0 && D_80153750 != 0) {
        field->text = D_800D7758;
    } else if (D_8015375C != 0) {
        value = D_800E28C8;
        field->text = D_800D7790;
        text = D_800D7790[0];
        func_80265904(text + (func_80442158(field) - 1), D_800E0DAC, value + 1);
    }
    return 0;
}

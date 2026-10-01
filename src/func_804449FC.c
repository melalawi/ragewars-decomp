#include "basetypes.h"

/* Shows D_800D7618 in a field when the top twelve bits of D_801462DC are zero, D_800D761C when they are sixteen, and otherwise points the field at D_800D7620 and formats their value into it with D_800E2780 two bytes before the length func_80442158 reports, returning zero. Adapted from func_80445ECC with the value taken from the top twelve bits of the halfword D_801462DC, a second fixed text for sixteen, and the texts and format changed. */
struct Field {
    char pad[0x14];
    char **text;
};

extern u16 D_801462DC;
extern char *D_800D7618[];
extern char *D_800D761C[];
extern char *D_800D7620[];
extern char D_800E2780[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_804449FC(struct Field *field) {
    char *text;
    s32 value = D_801462DC >> 4;

    if (value == 0) {
        field->text = D_800D7618;
    } else if (value == 16) {
        field->text = D_800D761C;
    } else {
        field->text = D_800D7620;
        text = D_800D7620[0];
        func_80265904(text + (func_80442158(field) - 2), D_800E2780, value);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D22A0_4[] = {0x80, 0x0C, 0xFC, 0xB0};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7620_4[] = {0x80, 0x0D, 0x50, 0x30};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D35F4_4[] = {0x80, 0x0D, 0x0F, 0x88};
#endif

#include "basetypes.h"

/* Points a field's text at one of D_800D7DE0, D_800D7DDC or D_800D7DD8 when the option byte D_801462E2 measured from 0x80 in steps of eight is zero, fifteen or minus sixteen, and otherwise at D_800D7DE4, formatting the step into it with D_800E27E0 when positive or D_800E27E8 when negative four bytes before the length func_80442158 reports, returning zero. */
struct Field {
    char pad[0x14];
    char **text;
};

extern u8 D_801462E2;
extern char *D_800D7DD8;
extern char *D_800D7DDC;
extern char *D_800D7DE0;
extern char *D_800D7DE4;
extern char D_800E27E0[];
extern char D_800E27E8[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_80445AB8(struct Field *field) {
    s32 step = (D_801462E2 - 0x80) / 8;
    char *text;

    if (step == 0) {
        field->text = &D_800D7DE0;
    } else if (step == 15) {
        field->text = &D_800D7DDC;
    } else if (step == -16) {
        field->text = &D_800D7DD8;
    } else if (step > 0) {
        field->text = &D_800D7DE4;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 4), D_800E27E0, step);
    } else {
        field->text = &D_800D7DE4;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 4), D_800E27E8, step);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2A64_4[] = {0x80, 0x0D, 0x17, 0x68};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7DE4_4[] = {0x80, 0x0D, 0x6A, 0xE8};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3DB8_4[] = {0x80, 0x0D, 0x29, 0xBC};
#endif

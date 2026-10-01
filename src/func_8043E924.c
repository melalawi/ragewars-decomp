#include "basetypes.h"

/* Sets a field's text to D_800D7E08 when D_801462E8 equals D_800E2368, and otherwise to D_800D7E04, into which D_800E5E48 less five is formatted with D_800E2328 three bytes before the length func_80442158 reports. Returns zero. */
struct Field {
    char pad[0x14];
    char **text;
};

extern f32 D_801462E8;
extern f32 D_800E2368;
extern char *D_800D7E04[];
extern char *D_800D7E08[];
extern char D_800E2328[];
extern s32 D_800E5E48;
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8043E924(struct Field *field) {
    char *text;

    if (D_801462E8 == D_800E2368) {
        field->text = D_800D7E08;
    } else {
        field->text = D_800D7E04;
        text = *field->text;
        func_80265904(text + (func_80442158(field) - 3), D_800E2328, D_800E5E48 - 5);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2A84_4[] = {0x80, 0x0D, 0x18, 0x18};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7E04_4[] = {0x80, 0x0D, 0x6B, 0x98};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3DD8_4[] = {0x80, 0x0D, 0x2A, 0x74};
#endif

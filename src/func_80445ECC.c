#include "basetypes.h"

/* Shows D_800D7DE8 in a field when D_800E63B8 is zero; otherwise points the field at D_800D7DEC and
   formats D_800E63B8 into it with D_800E27F0, two bytes before the length func_80442158 reports.
   Returns zero. */
struct Field {
    char pad[0x14];
    char **text;
};

extern s32 D_800E63B8;
extern char *D_800D7DE8[];
extern char *D_800D7DEC[];
extern char D_800E27F0[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_80445ECC(struct Field *field) {
    char *text;

    if (D_800E63B8 == 0) {
        field->text = D_800D7DE8;
    } else {
        field->text = D_800D7DEC;
        text = D_800D7DEC[0];
        func_80265904(text + (func_80442158(field) - 2), D_800E27F0, D_800E63B8);
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2A6C_18[] = {0x80, 0x0D, 0x17, 0x98, 0x80, 0x0D, 0x17, 0xB0, 0x80, 0x0D, 0x17, 0xC8, 0x80, 0x0D, 0x17, 0xE0, 0x80, 0x0D, 0x17, 0xF4, 0x80, 0x0D, 0x18, 0x04};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7DEC_18[] = {0x80, 0x0D, 0x6B, 0x18, 0x80, 0x0D, 0x6B, 0x30, 0x80, 0x0D, 0x6B, 0x48, 0x80, 0x0D, 0x6B, 0x60, 0x80, 0x0D, 0x6B, 0x74, 0x80, 0x0D, 0x6B, 0x84};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D3DC0_18[] = {0x80, 0x0D, 0x29, 0xEC, 0x80, 0x0D, 0x2A, 0x04, 0x80, 0x0D, 0x2A, 0x1C, 0x80, 0x0D, 0x2A, 0x34, 0x80, 0x0D, 0x2A, 0x48, 0x80, 0x0D, 0x2A, 0x60};
#endif

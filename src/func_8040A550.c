#include "basetypes.h"

/* Points an option field at its text: when D_80153750 is set, D_800E26F4 if D_8015377C is set and D_800E2704 if not; otherwise, when D_8015375C is set, the table D_800E27E4, formatting its entry for the byte D_80152789 with D_800ED3FC and D_800E28C8 plus one from one byte before the length func_80442158 reports; returns zero. */

struct Field {
    char pad[0x14];
    char **text;
};

extern s32 D_8015377C;
extern s32 D_80153750;
extern s32 D_8015375C;
extern char *D_800E26F4[];
extern char *D_800E2704[];
extern char *D_800E27E4[];
extern u8 D_80152789;
extern s32 D_800E28C8;
extern char D_800ED3FC[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040A550(struct Field *field) {
    char **table;
    char *text;
    s32 value;

    if (D_8015377C != 0) {
        if (D_80153750 != 0) {
            field->text = D_800E26F4;
            goto done;
        }
    } else if (D_80153750 != 0) {
        field->text = D_800E2704;
        goto done;
    }
    if (D_8015375C != 0) {
        do {
            table = D_800E27E4;
        } while (0);
        field->text = table;
        value = D_800E28C8;
        text = table[D_80152789];
        func_80265904(text + (func_80442158(field) - 1), D_800ED3FC, value + 1);
    }
done:
    return 0;
}

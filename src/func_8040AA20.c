#include "basetypes.h"

/* Formats the halfword D_8015371C into a field's text with the format D_800E0DC4, writing at
   four bytes before the length func_80442158 reports for the field, and returns zero. */
struct Field {
    char pad[0x14];
    char **text;
};

extern u16 D_8015371C;
extern char D_800E0DC4[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040AA20(struct Field *field) {
    s32 value = D_8015371C;
    char *text = *field->text;

    func_80265904(text + (func_80442158(field) - 4), D_800E0DC4, value);
    return 0;
}

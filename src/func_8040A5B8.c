#include "basetypes.h"

/* Formats the halfword at offset 0x22 of the structure D_800E28BC points to into a field's text
   with the format D_800E0DB0, two bytes before the length func_80442158 reports, and returns
   zero. */
struct Field {
    char pad[0x14];
    char **text;
};

struct State {
    char pad[0x22];
    s16 value;
};

extern struct State *D_800E28BC;
extern char D_800E0DB0[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040A5B8(struct Field *field) {
    s32 value = D_800E28BC->value;
    char *text = *field->text;

    func_80265904(text + (func_80442158(field) - 2), D_800E0DB0, value);
    return 0;
}

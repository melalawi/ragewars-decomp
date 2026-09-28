#include "basetypes.h"

/* Formats the word at offset 0x1C of the structure D_800E28BC points to, shifted down eight bits,
   into a field's text with the format D_800E0DA4, three bytes before the length func_80442158
   reports, and returns zero. */
struct Field {
    char pad[0x14];
    char **text;
};

struct State {
    char pad[0x1C];
    s32 value;
};

extern struct State *D_800E28BC;
extern char D_800E0DA4[];
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_8040A55C(struct Field *field) {
    s32 value = D_800E28BC->value >> 8;
    char *text = *field->text;

    func_80265904(text + (func_80442158(field) - 3), D_800E0DA4, value);
    return 0;
}

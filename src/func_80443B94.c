#include "basetypes.h"

/* Formats the halfword D_8014639C holds for the player func_8022A590 identifies from the owner at offset
   0x1C of the second argument, player records being 150 bytes apart, into a field's text with the
   format D_800E2730 four bytes before the length func_80442158 reports. Returns zero. */
struct Field {
    char pad[0x14];
    char **text;
};

struct Holder {
    char pad[0x1C];
    void *owner;
};

extern char D_80145040[];
extern s16 D_8014639C[];
extern char D_800E2730[];
extern s32 func_8022A590(void *, void *);
extern s32 func_80442158(struct Field *);
extern void func_80265904(char *, char *, s32);

s32 func_80443B94(struct Field *field, struct Holder *holder) {
    s32 player = func_8022A590(D_80145040, holder->owner);
    s32 value = D_8014639C[player * 75];
    char *text = *field->text;

    func_80265904(text + (func_80442158(field) - 4), D_800E2730, value);
    return 0;
}

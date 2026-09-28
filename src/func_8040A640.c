#include "basetypes.h"

/* Formats the three floats at offsets 0xC, 0x10 and 0x14 of the structure D_800E28BC points to,
   truncated to integers, into a field's text with the format D_800E0DB4, nine bytes before the
   length func_80442158 reports. Returns zero. */
struct State {
    char pad[0xC];
    f32 x;
    f32 y;
    f32 z;
};

struct Field {
    char pad[0x14];
    char **text;
};

extern struct State *D_800E28BC;
extern char D_800E0DB4[];
extern s32 func_80442158(struct Field *);
extern void func_8026593C(char *, char *, s32, s32, s32);

s32 func_8040A640(struct Field *field) {
    s32 x = D_800E28BC->x;
    s32 y = D_800E28BC->y;
    s32 z = D_800E28BC->z;
    char *text = *field->text;

    func_8026593C(text + (func_80442158(field) - 9), D_800E0DB4, z, y, x);
    return 0;
}

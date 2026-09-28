#include "basetypes.h"

/* Points a field's text at D_800D75F0 when the byte at offset 0x7C of the settings the second argument's owner holds (or of the defaults D_80146302 without an owner or settings) is zero, at D_800D75EC when it is one, and leaves it otherwise, returning zero. Adapted from func_80444D58 with the settings pointer checked for null, the byte offset 0x7C, and a nested test over the texts D_800D75F0 and D_800D75EC changed. */
struct Settings {
    char pad[0x7C];
    u8 flag;
};

struct Owner {
    char pad[0x5D8];
    struct Settings *settings;
};

struct Holder {
    char pad[0x1C];
    struct Owner *owner;
};

struct Field {
    char pad[0x14];
    char *text;
};

extern struct Settings D_80146302;
extern char D_800D75EC[];
extern char D_800D75F0[];

s32 func_8044465C(struct Field *field, struct Holder *holder) {
    s32 result = 0;
    struct Settings *settings = &D_80146302;

    if (holder->owner != 0 && holder->owner->settings != 0) {
        settings = holder->owner->settings;
    }
    if (settings->flag != 0) {
        if (settings->flag == 1) {
            field->text = D_800D75EC;
        }
    } else {
        field->text = D_800D75F0;
    }
    return result;
}

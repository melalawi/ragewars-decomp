#include "basetypes.h"

/* Points a field's text at D_800D7634 when the byte at offset 0x82 of the settings the second argument's owner holds, or of the defaults D_80146302 without an owner, is one, and at D_800D7638 otherwise, returning zero. Adapted from func_80446000 with the settings lookup of func_80444DA4 and the texts D_800D7634 and D_800D7638 changed, and a zero result local declared first to give the owner and settings pointers the cartridge's registers. */
struct Settings {
    char pad[0x82];
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
extern char D_800D7634[];
extern char D_800D7638[];

s32 func_80444D58(struct Field *field, struct Holder *holder) {
    s32 result = 0;
    struct Settings *settings = &D_80146302;

    if (holder->owner != 0) {
        settings = holder->owner->settings;
    }
    if (settings->flag == 1) {
        field->text = D_800D7634;
    } else {
        field->text = D_800D7638;
    }
    return result;
}

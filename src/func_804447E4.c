#include "basetypes.h"

/* Points an option field at the text D_800D7600 when the byte at offset 0x7E of the second argument's owner settings (or the defaults D_80146302) is zero and at D_800D75FC when it is one, returning zero. Adapted from func_8044471C with the settings byte 0x7E and the texts D_800D7600 and D_800D75FC changed. */

struct Settings {
    char pad[0x7E];
    u8 value;
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
    char **text;
};

extern struct Settings D_80146302;
extern char *D_800D75FC;
extern char *D_800D7600;

s32 func_804447E4(struct Field *field, struct Holder *holder) {
    struct Settings *settings = &D_80146302;

    if (holder->owner != 0 && holder->owner->settings != 0) {
        settings = holder->owner->settings;
    }
    switch (settings->value) {
    case 0:
        field->text = &D_800D7600;
        break;
    case 1:
        field->text = &D_800D75FC;
        break;
    }
    return 0;
}

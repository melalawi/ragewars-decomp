#include "basetypes.h"

/* Points an option field at the text D_800D75E0 when the signed byte at offset 0x7B of the second argument's owner settings (or the defaults D_80146302) is zero and at D_800D75E4 when it is one, returning zero. Adapted from func_804447E4 with the settings byte made the signed byte at 0x7B and the texts changed. */

struct Settings {
    char pad[0x7B];
    s8 value;
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
extern char *D_800D75E4;
extern char *D_800D75E0;

s32 func_80444594(struct Field *field, struct Holder *holder) {
    struct Settings *settings = &D_80146302;

    if (holder->owner != 0 && holder->owner->settings != 0) {
        settings = holder->owner->settings;
    }
    switch (settings->value) {
    case 0:
        field->text = &D_800D75E0;
        break;
    case 1:
        field->text = &D_800D75E4;
        break;
    }
    return 0;
}

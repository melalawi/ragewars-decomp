#include "basetypes.h"

/* Replaces the byte at offset 0x7A of the second argument's owner settings (or the defaults D_80146302) with what func_8044252C returns for the second argument, that byte, 8, 8, 0xF8 and 0, and returns zero. Adapted from func_80444AF8 with the settings byte 0x7A changed. */

struct Settings {
    char pad[0x7A];
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

extern struct Settings D_80146302;
extern s32 func_8044252C(void *, s32, s32, s32, s32, s32);

s32 func_80444C28(void *first, struct Holder *holder) {
    struct Settings *settings = &D_80146302;

    if (holder->owner != 0 && holder->owner->settings != 0) {
        settings = holder->owner->settings;
    }
    settings->value = func_8044252C(holder, settings->value, 8, 8, 0xF8, 0);
    return 0;
}

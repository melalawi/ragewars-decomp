#include "basetypes.h"

/* Toggles the byte at offset 0x82 of the settings the object at offset 0x5D8 of the second
   argument's owner holds, or of the defaults D_80146302 when there is no owner, and returns zero. */
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

extern struct Settings D_80146302;

s32 func_80444DA4(void *unused, struct Holder *holder) {
    struct Settings *settings = &D_80146302;

    if (holder->owner != 0) {
        settings = holder->owner->settings;
    }
    if (settings->flag == 1) {
        settings->flag = 0;
    } else {
        settings->flag = 1;
    }
    return 0;
}

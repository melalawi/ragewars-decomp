#include "basetypes.h"

/* Copies the saved controller settings block D_80153738 into the settings the object at offset 0x5D8
   of an owner holds: the four halfwords, the flag byte into offset 0x80 and the eight bytes after it
   into offset 0x84. */
struct Saved {
    u16 values[4];
    u8 flag;
    u8 pad9[3];
    u8 bytes[8];
};

struct Settings {
    u16 values[4];
    char pad8[0x80 - 8];
    u8 flag;
    char pad81[3];
    u8 bytes[8];
};

struct Owner {
    char pad[0x5D8];
    struct Settings *settings;
};

extern struct Saved D_80153738;

void func_80409A88(struct Owner *owner) {
    struct Settings *settings = owner->settings;
    s32 i;

    settings->flag = D_80153738.flag;
    settings->values[0] = D_80153738.values[0];
    settings->values[1] = D_80153738.values[1];
    settings->values[2] = D_80153738.values[2];
    settings->values[3] = D_80153738.values[3];
    for (i = 0; i < 8; i++) {
        settings->bytes[i] = D_80153738.bytes[i];
    }
}

#include "basetypes.h"

/* Saves the settings the object at offset 0x5D8 of an owner holds into the block D_80153738: the
   flag byte, the four halfwords, three cleared bytes after the flag and the eight bytes at 0x84. */
struct Saved {
    u16 values[4];
    u8 flag;
    u8 pad[3];
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

void func_80409A18(struct Owner *owner) {
    struct Settings *settings = owner->settings;
    s32 i;

    D_80153738.flag = settings->flag;
    D_80153738.values[0] = settings->values[0];
    D_80153738.values[1] = settings->values[1];
    D_80153738.values[2] = settings->values[2];
    D_80153738.values[3] = settings->values[3];
    D_80153738.pad[0] = 0;
    D_80153738.pad[1] = 0;
    D_80153738.pad[2] = 0;
    for (i = 0; i < 8; i++) {
        D_80153738.bytes[i] = settings->bytes[i];
    }
}

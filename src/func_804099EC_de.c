#include "common/types_8a8189af7b05.h"
#include "span_16E000/code_80405DC0.h"
#include "types.h"

/* Saves the settings the object at offset 0x5D8 of an owner holds into the block D_80153738: the
   flag byte, the four halfwords, three cleared bytes after the flag and the eight bytes at 0x84. */






extern struct Saved D_8014D4A8_de;

void func_804099EC_de(struct Owner_func_804099EC_de *owner) {
    struct Profile_func_80408C4C_de *settings = owner->settings;
    s32 i;

    D_8014D4A8_de.flag = settings->flags;
    D_8014D4A8_de.values[0] = settings->words[0];
    D_8014D4A8_de.values[1] = settings->words[1];
    D_8014D4A8_de.values[2] = settings->words[2];
    D_8014D4A8_de.values[3] = settings->words[3];
    D_8014D4A8_de.pad[0] = 0;
    D_8014D4A8_de.pad[1] = 0;
    D_8014D4A8_de.pad[2] = 0;
    for (i = 0; i < 8; i++) {
        D_8014D4A8_de.bytes[i] = settings->name[i];
    }
}

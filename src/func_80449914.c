#include "basetypes.h"

/* Fills a local 32-byte buffer and passes it with an entry's words at 4 and 8, 0x400 and a zero to
   func_802BD950. Every byte of the buffer is the entry's byte at offset 0x65: the loop never
   advances through the entry, as the cartridge's own code does not. */
struct Entry {
    s32 pad0;
    s32 first;
    s32 second;
    char pad[0x65 - 0xC];
    u8 name[32];
};

extern void func_802BD950(s32, s32, s32, u8 *, s32);

void func_80449914(struct Entry *entry) {
    u8 name[32];
    s32 i;

    for (i = 0; i < 32; i++) {
        name[i] = entry->name[0];
    }
    func_802BD950(entry->first, entry->second, 0x400, name, 0);
}

#include "span_16E000/code_80447BB0.h"
#include "types.h"

/* Fills a local 32-byte buffer and passes it with an entry's words at 4 and 8, 0x400 and a zero to
   func_802B8880_de. Every byte of the buffer is the entry's byte at offset 0x65: the loop never
   advances through the entry, as the cartridge's own code does not. */


extern void func_802B8880_de(s32, s32, s32, u8 *, s32);

void func_80448CC4_de(struct Entry_func_80448CC4_de *entry) {
    u8 name[32];
    s32 i;

    for (i = 0; i < 32; i++) {
        name[i] = entry->name[0];
    }
    func_802B8880_de(entry->first, entry->second, 0x400, name, 0);
}

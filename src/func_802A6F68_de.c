#include "span_1000/code_802A776C.h"
/* Clears a record: its four 0x38-byte entries through an inline per-entry clear, its two leading
   flag bytes and trailing words, and sets the word at 0xE6 to -5. */




static inline void clear_entry(Entry_func_802A6F68_de *e) {
    e->unk4 = 0;
    e->unk0 = 0;
    e->unkD = 0;
    e->unk18 = 0;
    e->unk1C = 0;
}

void func_802A6F68_de(Record_func_802A6F68_de *rec) {
    int i;
    for (i = 0; i < 4; i++) {
        clear_entry(&rec->entries[i]);
    }
    rec->unk0 = 0;
    rec->unk1 = 0;
    rec->unkE4 = 0;
    rec->unkE6 = -5;
    rec->unkE8 = 0;
}

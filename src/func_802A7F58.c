/* Clears a record: its four 0x38-byte entries through an inline per-entry clear, its two leading
   flag bytes and trailing words, and sets the word at 0xE6 to -5. */
typedef struct {
    int unk0;
    int unk4;
    char pad8[5];
    unsigned char unkD;
    char padE[0x18 - 0xE];
    short unk18;
    int unk1C;
    char pad20[0x18];
} Entry;

typedef struct {
    unsigned char unk0;
    unsigned char unk1;
    char pad2[2];
    Entry entries[4];
    short unkE4;
    short unkE6;
    int unkE8;
} Record;

static inline void clear_entry(Entry *e) {
    e->unk4 = 0;
    e->unk0 = 0;
    e->unkD = 0;
    e->unk18 = 0;
    e->unk1C = 0;
}

void func_802A7F58(Record *rec) {
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

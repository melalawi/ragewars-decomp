/* Looks up an id among the 64 twenty-byte entries at 0x1C of the table D_8014D080 and returns the
   entry's override value when set, otherwise its default value, or 0 when the id is absent. */
typedef struct {
    int value;
    int override;
    int unk8;
    int unkC;
    int nextId;
} Entry;

typedef struct func_8029A7E4_S1 func_8029A7E4_S1;
struct func_8029A7E4_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    Entry unk20;
};

extern func_8029A7E4_S1 *D_8014D080;

int func_8029A7E4(int id) {
    int i;
    int *key;
    Entry *entry;

    key = &D_8014D080->unk1C;
    entry = &D_8014D080->unk20;
    for (i = 0; i < 64; i++) {
        if (*key == id) {
            if (entry->override != 0) {
                return entry->override;
            }
            return entry->value;
        }
        entry++;
        key += 5;
    }
    return 0;
}

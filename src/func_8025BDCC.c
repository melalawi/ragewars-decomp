/* Returns the index of the first of sixteen 0xCC-byte slots at 0xC that is in use, is not the
   owner's own slot and whose two keys at 0xA0 and 0xAC equal the arguments, or -1 when none does; indexing from the second key reproduces the reference induction base. */
typedef struct {
    char pad[0x102];
    short slot;
} Owner;

typedef struct {
    int id;
    char pad4[0x9C];
    int keyA;
    char padA4[8];
    int keyB;
    char padB0[0x1C];
} Slot;

typedef struct {
    Owner *owner;
    char pad4[8];
    Slot slots[16];
} Obj;

int func_8025BDCC(Obj *obj, int keyA, int keyB) {
    int i;
    int *keys = &obj->slots[0].keyB;

    for (i = 0; i < 16; i++) {
        if (keys[i * 0x33 - 43] != -1 && obj->owner->slot != i && keys[i * 0x33 - 3] == keyA &&
            keys[i * 0x33] == keyB) {
            return i;
        }
    }
    return -1;
}

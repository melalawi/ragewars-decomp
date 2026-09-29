typedef struct func_8022F378_S1 func_8022F378_S1;
struct func_8022F378_S1 {
    char pad0[0x10];
    int unk10;
};

/** Advance the word at offset 0x10 by 0x500. */
void func_8022F378(void *object) {
    ((func_8022F378_S1 *)(object))->unk10 += 0x500;
}

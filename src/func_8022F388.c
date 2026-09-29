typedef struct func_8022F388_S1 func_8022F388_S1;
struct func_8022F388_S1 {
    char pad0[0x10];
    unsigned int unk10;
};

/** Return the word stored at offset 0x10. */
unsigned int func_8022F388(void *object) {
    return ((func_8022F388_S1 *)(object))->unk10;
}

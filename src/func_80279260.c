typedef struct func_80279260_S1 func_80279260_S1;
struct func_80279260_S1 {
    char pad0[0x100];
    unsigned int unk100;
};

/** Set flag 0x10000 in the word at offset 0x100. */
void func_80279260(void *object) {
    ((func_80279260_S1 *)(object))->unk100 |= 0x10000;
}

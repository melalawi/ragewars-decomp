typedef struct func_8022F31C_S1 func_8022F31C_S1;
struct func_8022F31C_S1 {
    char pad0[0x14];
    unsigned char unk14;
};

/** Read the byte at object offset 0x14. */
unsigned char func_8022F31C(void *arg0) {
    return ((func_8022F31C_S1 *)(arg0))->unk14;
}

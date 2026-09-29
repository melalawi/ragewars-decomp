typedef struct func_8028F92C_S1 func_8028F92C_S1;
struct func_8028F92C_S1 {
    char pad0[0x78];
    char unk78;
};

/** Return the address 0x78 bytes into the supplied object. */
void *func_8028F92C(void *object) {
    return &((func_8028F92C_S1 *)(object))->unk78;
}

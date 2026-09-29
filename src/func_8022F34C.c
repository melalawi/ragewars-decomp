typedef struct func_8022F34C_S1 func_8022F34C_S1;
struct func_8022F34C_S1 {
    char pad0[0x16];
    unsigned char unk16;
};

/** Store the supplied byte at offset 0x16. */
void func_8022F34C(void *object, unsigned char value) {
    ((func_8022F34C_S1 *)(object))->unk16 = value;
}

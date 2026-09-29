typedef struct func_8022F30C_S1 func_8022F30C_S1;
struct func_8022F30C_S1 {
    char pad0[0x14];
    unsigned char unk14;
};

/** Advance the byte at offset 0x14 by ten. */
void func_8022F30C(void *object) {
    ((func_8022F30C_S1 *)(object))->unk14 += 10;
}

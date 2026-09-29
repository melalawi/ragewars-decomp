typedef struct func_8026437C_S1 func_8026437C_S1;
struct func_8026437C_S1 {
    char pad0[0xB4];
    int unkB4;
};

/** Report whether flag 0x1000 is set in the word at offset 0xB4. */
int func_8026437C(void *object) {
    int flags = ((func_8026437C_S1 *)(object))->unkB4 & 0x1000;
    return flags != 0;
}

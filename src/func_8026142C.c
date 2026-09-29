typedef struct func_8026142C_S1 func_8026142C_S1;
struct func_8026142C_S1 {
    char pad0[0xC];
    int unkC;
};

/** Return the word at offset twelve. */
int func_8026142C(char *object) {
    return ((func_8026142C_S1 *)(object))->unkC;
}

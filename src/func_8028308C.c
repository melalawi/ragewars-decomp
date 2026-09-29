typedef struct func_8028308C_S1 func_8028308C_S1;
struct func_8028308C_S1 {
    char pad0[0xFC68];
    int unkFC68;
};

/** Return the word at offset 0xFC68. */
int func_8028308C(void *arg0) {
    return ((func_8028308C_S1 *)(arg0))->unkFC68;
}

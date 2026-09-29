typedef struct func_8022B174_S1 func_8022B174_S1;
struct func_8022B174_S1 {
    char pad0[0x1210];
    int unk1210;
};

/** Return the word at offset 0x1210. */
int func_8022B174(char *object) {
    return ((func_8022B174_S1 *)(object))->unk1210;
}

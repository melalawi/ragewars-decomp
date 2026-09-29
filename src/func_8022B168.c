typedef struct func_8022B168_S1 func_8022B168_S1;
struct func_8022B168_S1 {
    char pad0[0x5E4];
    int unk5E4;
};

/** Report whether the word at offset 0x5E4 is zero. */
int func_8022B168(void *arg0) {
    return ((func_8022B168_S1 *)(arg0))->unk5E4 == 0;
}

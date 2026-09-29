typedef struct func_80209AD8_S1 func_80209AD8_S1;
struct func_80209AD8_S1 {
    char pad0[0x21C];
    int unk21C;
};

/** Report whether the state word at offset 0x21C equals eight. */
int func_80209AD8(char *object) {
    return ((func_80209AD8_S1 *)(object))->unk21C == 8;
}

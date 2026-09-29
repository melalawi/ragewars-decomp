typedef struct func_8029A9E0_S1 func_8029A9E0_S1;
struct func_8029A9E0_S1 {
    char pad0[0x4];
    unsigned int unk4;
};

extern func_8029A9E0_S1 *D_8014D080;

/** Return one greater than the current object's word at offset four. */
unsigned int func_8029A9E0(void) {
    return D_8014D080->unk4 + 1;
}

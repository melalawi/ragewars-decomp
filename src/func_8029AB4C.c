typedef struct func_8029AB4C_S1 func_8029AB4C_S1;
struct func_8029AB4C_S1 {
    char pad0[0x14];
    unsigned int unk14;
};

extern func_8029AB4C_S1 *D_8014D080;

/** Return the word at offset 0x14 of the current global object. */
unsigned int func_8029AB4C(void) {
    return D_8014D080->unk14;
}

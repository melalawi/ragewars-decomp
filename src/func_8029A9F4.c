typedef struct func_8029A9F4_S1 func_8029A9F4_S1;
struct func_8029A9F4_S1 {
    char pad0[0x528];
    unsigned int unk528;
};

extern func_8029A9F4_S1 *D_8014D080;

/** Return the word at offset 0x528 of the current global object. */
unsigned int func_8029A9F4(void) {
    return D_8014D080->unk528;
}

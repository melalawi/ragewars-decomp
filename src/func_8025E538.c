typedef struct func_8025E538_S1 func_8025E538_S1;
struct func_8025E538_S1 {
    char pad0[0x4];
    signed char unk4;
};

/** Return the signed byte at offset four in the supplied object. */
int func_8025E538(void *object) {
    return ((func_8025E538_S1 *)(object))->unk4;
}

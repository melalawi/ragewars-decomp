typedef struct func_8025E5B0_S1 func_8025E5B0_S1;
struct func_8025E5B0_S1 {
    char pad0[0x14];
    short unk14;
};

/** Return the signed halfword at offset 0x14 in the supplied object. */
int func_8025E5B0(void *object) {
    return ((func_8025E5B0_S1 *)(object))->unk14;
}

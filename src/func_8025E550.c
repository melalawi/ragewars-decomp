typedef struct func_8025E550_S1 func_8025E550_S1;
struct func_8025E550_S1 {
    char pad0[0x8];
    short unk8;
};

/** Return the signed halfword at offset eight. */
int func_8025E550(char *object) {
    return ((func_8025E550_S1 *)(object))->unk8;
}

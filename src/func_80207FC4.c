typedef struct func_80207FC4_S1 func_80207FC4_S1;
struct func_80207FC4_S1 {
    char pad0[0x100];
    unsigned int unk100;
};

/** Set the fixed flags on the supplied object and word. */
void func_80207FC4(char *object, unsigned int *flags) {
    *flags |= 0x20000;
    ((func_80207FC4_S1 *)(object))->unk100 |= 0x2100;
}

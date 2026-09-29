typedef struct func_80205700_S1 func_80205700_S1;
struct func_80205700_S1 {
    char pad0[0xC];
    unsigned int unkC;
};

/** Return the object's 0x200 status bit. */
unsigned int func_80205700(void *object) {
    return ((func_80205700_S1 *)(object))->unkC & 0x200;
}

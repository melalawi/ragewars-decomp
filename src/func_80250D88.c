typedef struct func_80250D88_S1 func_80250D88_S1;
typedef struct func_80250D88_S2 func_80250D88_S2;
struct func_80250D88_S1 {
    char pad0[0x18];
    void* unk18;
    char pad18[0xDC - 0x18 - sizeof(void*)];
    unsigned int unkDC;
};
struct func_80250D88_S2 {
    char pad0[0xE];
    signed char unkE;
    char padE[0xF - 0xE - sizeof(signed char)];
    signed char unkF;
    char padF[0x24 - 0xF - sizeof(signed char)];
    unsigned int unk24;
};

/** Select one of two signed bytes according to a doubled nested count. */
int func_80250D88(void *object) {
    void *nested = ((func_80250D88_S1 *)(object))->unk18;
    if (((func_80250D88_S1 *)(object))->unkDC <
        ((func_80250D88_S2 *)(nested))->unk24 * 2) {
        return ((func_80250D88_S2 *)(nested))->unkE;
    }
    return ((func_80250D88_S2 *)(nested))->unkF;
}

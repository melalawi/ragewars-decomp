typedef struct func_8022BA90_S1 func_8022BA90_S1;
typedef struct func_8022BA90_S2 func_8022BA90_S2;
struct func_8022BA90_S1 {
    char pad0[0x5DC];
    void* unk5DC;
};
struct func_8022BA90_S2 {
    char pad0[0x564];
    int unk564;
};

/** Report whether the nested pointer's word at 0x564 is nonzero. */
int func_8022BA90(void *object) {
    void *nested = ((func_8022BA90_S1 *)(object))->unk5DC;
    if (nested != 0) {
        return ((func_8022BA90_S2 *)(nested))->unk564 != 0;
    }
    return 0;
}

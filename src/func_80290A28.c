typedef struct func_80290A28_S1 func_80290A28_S1;
struct func_80290A28_S1 {
    char pad0[0x8];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
    char padC[0x10 - 0xC - sizeof(float)];
    float unk10;
    char pad10[0x20 - 0x10 - sizeof(float)];
    int unk20;
};

/** Copy four scalar fields from the source into output pointers. */
void func_80290A28(void *source, int *word, float *third, float *fourth, float *second) {
    *word = ((func_80290A28_S1 *)(source))->unk20;
    *second = ((func_80290A28_S1 *)(source))->unk10;
    *third = ((func_80290A28_S1 *)(source))->unk8;
    *fourth = ((func_80290A28_S1 *)(source))->unkC;
}

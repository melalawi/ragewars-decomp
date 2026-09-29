typedef struct func_8023B968_S1 func_8023B968_S1;
typedef struct func_8023B968_S2 func_8023B968_S2;
struct func_8023B968_S1 {
    char pad0[0x210];
    float unk210;
};
struct func_8023B968_S2 {
    char pad0[0x210];
    float unk210;
};

/** Compare two records by the float at nested offset 0x210. */
int func_8023B968(void *first, void *second) {
    void *left = *(void **)first;
    void *right = *(void **)second;
    int result = 1;
    if (((func_8023B968_S1 *)(left))->unk210 <
        ((func_8023B968_S2 *)(right))->unk210) {
        result = -1;
    }
    return result;
}

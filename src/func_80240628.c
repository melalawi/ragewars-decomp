typedef struct func_80240628_S1 func_80240628_S1;
typedef struct func_80240628_S2 func_80240628_S2;
struct func_80240628_S1 {
    char pad0[0x4];
    float unk4;
};
struct func_80240628_S2 {
    char pad0[0x4];
    float unk4;
};

/** Order two records by their scalar at offset four. */
int func_80240628(void *left, void *right) {
    return ((func_80240628_S1 *)(left))->unk4 < ((func_80240628_S2 *)(right))->unk4 ? -1 : 1;
}

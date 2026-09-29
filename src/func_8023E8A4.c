typedef struct WordTriple {
    int first;
    int second;
    int third;
} WordTriple;

typedef struct func_8023E8A4_S1 func_8023E8A4_S1;
typedef struct func_8023E8A4_S2 func_8023E8A4_S2;
struct func_8023E8A4_S1 {
    char pad0[0x18C];
    WordTriple unk18C;
};
struct func_8023E8A4_S2 {
    char pad0[0x48];
    WordTriple unk48;
};

/** Copy three words from offsets 0x48..0x50 to offsets 0x18C..0x194. */
void func_8023E8A4(void *arg0, void *arg1) {
    ((func_8023E8A4_S1 *)(arg0))->unk18C = ((func_8023E8A4_S2 *)(arg1))->unk48;
}

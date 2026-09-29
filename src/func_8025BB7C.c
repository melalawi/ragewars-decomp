typedef struct WordTriple {
    int first;
    int second;
    int third;
} WordTriple;

typedef struct func_8025BB7C_S1 func_8025BB7C_S1;
struct func_8025BB7C_S1 {
    char pad0[0x44];
    WordTriple unk44;
    char pad44[0x50 - 0x44 - sizeof(WordTriple)];
    int unk50;
};

void func_8025BB7C(void *arg0, void *arg1, int arg2) {
    ((func_8025BB7C_S1 *)(arg0))->unk44 = *(WordTriple *)arg1;
    ((func_8025BB7C_S1 *)(arg0))->unk50 = arg2;
}

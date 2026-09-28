typedef struct WordTriple {
    int first;
    int second;
    int third;
} WordTriple;

void func_8025BB7C(void *arg0, void *arg1, int arg2) {
    *(WordTriple *)((char *)arg0 + 0x44) = *(WordTriple *)arg1;
    *(int *)((char *)arg0 + 0x50) = arg2;
}

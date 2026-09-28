typedef struct WordTriple {
    int first;
    int second;
    int third;
} WordTriple;

/** Copy three words from offsets 0x48..0x50 to offsets 0x18C..0x194. */
void func_8023E8A4(void *arg0, void *arg1) {
    *(WordTriple *)((char *)arg0 + 0x18C) = *(WordTriple *)((char *)arg1 + 0x48);
}

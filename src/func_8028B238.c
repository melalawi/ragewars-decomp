typedef struct func_8028B238_S1 func_8028B238_S1;
struct func_8028B238_S1 {
    char pad0[0x94];
    char* unk94;
};

unsigned short func_8028B238(void *arg0, int arg1) {
    unsigned short *base = (unsigned short *)(((func_8028B238_S1 *)(arg0))->unk94 + 8);
    return base[arg1];
}

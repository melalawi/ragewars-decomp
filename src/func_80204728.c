extern char D_204808;
typedef struct func_80204728_S1 func_80204728_S1;
struct func_80204728_S1 {
    char pad0[0x10C];
    void* unk10C;
};

void func_80204728(void *arg0, void *arg1) {
    ((func_80204728_S1 *)(arg1))->unk10C = &D_204808;
}

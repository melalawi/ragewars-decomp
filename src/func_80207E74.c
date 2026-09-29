extern void func_80214178(void *a, void *b, int c);

typedef struct func_80207E74_S1 func_80207E74_S1;
struct func_80207E74_S1 {
    char pad0[0x100];
    int unk100;
};

void func_80207E74(void *arg0, int *arg1) {
    ((func_80207E74_S1 *)(arg0))->unk100 |= 0x2100;
    *arg1 |= 0x20000;
    func_80214178(arg0, arg1, 3);
}

typedef struct func_80279248_S1 func_80279248_S1;
struct func_80279248_S1 {
    char pad0[0x100];
    int unk100;
};

void func_80279248(void *arg0) {
    ((func_80279248_S1 *)(arg0))->unk100 &= ~0x10000;
}

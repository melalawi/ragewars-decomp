extern void func_8020FDB0(void *a, int b);

typedef struct func_80210068_S1 func_80210068_S1;
struct func_80210068_S1 {
    char pad0[0x18];
    int unk18;
};

int func_80210068(void *arg0) {
    func_8020FDB0(arg0, ((func_80210068_S1 *)(*(void **)arg0))->unk18 + 0xCC);
    return 1;
}

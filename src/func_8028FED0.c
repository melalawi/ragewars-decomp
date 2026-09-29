typedef struct func_8028FED0_S1 func_8028FED0_S1;
struct func_8028FED0_S1 {
    char pad0[0x8];
    char unk8;
};

void *func_8028FED0(int *arg0, int *arg1) {
    *arg1 = arg0[0] * arg0[1];
    return &((func_8028FED0_S1 *)(arg0))->unk8;
}

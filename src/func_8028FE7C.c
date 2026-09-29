typedef struct func_8028FE7C_S1 func_8028FE7C_S1;
struct func_8028FE7C_S1 {
    char pad0[0x4];
    int unk4;
};

void func_8028FE7C(int *arg0, int **arg1, int *arg2) {
    char *p;
    *arg1 = arg0;
    p = (char *)arg0 + *arg0 * 4;
    *arg2 = ((func_8028FE7C_S1 *)(p))->unk4;
}

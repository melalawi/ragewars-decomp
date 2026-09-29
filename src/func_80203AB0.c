extern void func_80214178(void *a, void *b, int c);

typedef struct func_80203AB0_S1 func_80203AB0_S1;
struct func_80203AB0_S1 {
    char pad0[0xCB];
    char unkCB;
};

void func_80203AB0(void *a, void *b) {
    if (((func_80203AB0_S1 *)(b))->unkCB != 0) {
        func_80214178(a, b, 0x3E);
    }
}

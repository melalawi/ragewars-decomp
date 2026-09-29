extern void func_80214178(void *a, void *b, int c);

typedef struct func_802061D8_S1 func_802061D8_S1;
struct func_802061D8_S1 {
    char pad0[0xCB];
    char unkCB;
};

void func_802061D8(void *a, void *b) {
    if (((func_802061D8_S1 *)(b))->unkCB != 0) {
        func_80214178(a, b, 0x0);
    }
}

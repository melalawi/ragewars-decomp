typedef struct func_80216D30_S1 func_80216D30_S1;
struct func_80216D30_S1 {
    char pad0[0x78];
    int unk78;
    char pad78[0x7C - 0x78 - sizeof(int)];
    int unk7C;
};

void func_80216D30(void *arg0, void *arg1, int arg2, int arg3) {
    ((func_80216D30_S1 *)(arg1))->unk78 = arg2;
    ((func_80216D30_S1 *)(arg1))->unk7C = arg3;
}

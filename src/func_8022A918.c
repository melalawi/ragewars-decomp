typedef struct func_8022A918_S1 func_8022A918_S1;
struct func_8022A918_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0xB4 - 0x4 - sizeof(int)];
    int unkB4;
};

void func_8022A918(void *arg0, int arg1) {
    if (((func_8022A918_S1 *)(arg0))->unk4 == arg1) {
        ((func_8022A918_S1 *)(arg0))->unkB4 = 1;
    }
    ((func_8022A918_S1 *)(arg0))->unk4 = arg1;
}

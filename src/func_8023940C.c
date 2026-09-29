typedef struct func_8023940C_S1 func_8023940C_S1;
struct func_8023940C_S1 {
    char pad0[0xFC];
    int unkFC;
    char padFC[0x100 - 0xFC - sizeof(int)];
    int unk100;
};

int func_8023940C(void *arg0) {
    ((func_8023940C_S1 *)(arg0))->unk100 = 0;
    ((func_8023940C_S1 *)(arg0))->unkFC = 2;
    return 2;
}

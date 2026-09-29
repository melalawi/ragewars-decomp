typedef struct func_8023E844_S1 func_8023E844_S1;
struct func_8023E844_S1 {
    char pad0[0x18C];
    int unk18C;
    char pad18C[0x190 - 0x18C - sizeof(int)];
    int unk190;
    char pad190[0x194 - 0x190 - sizeof(int)];
    int unk194;
};

void func_8023E844(void *arg0) {
    ((func_8023E844_S1 *)(arg0))->unk18C = 0;
    ((func_8023E844_S1 *)(arg0))->unk190 = 0;
    ((func_8023E844_S1 *)(arg0))->unk194 = 0;
}

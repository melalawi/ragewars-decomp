typedef struct func_8023E6C0_S1 func_8023E6C0_S1;
struct func_8023E6C0_S1 {
    char pad0[0x8];
    float unk8;
    char pad8[0xC - 0x8 - sizeof(float)];
    float unkC;
    char padC[0x10 - 0xC - sizeof(float)];
    float unk10;
    char pad10[0x14 - 0x10 - sizeof(float)];
    int unk14;
    char pad14[0x18 - 0x14 - sizeof(int)];
    float unk18;
};

void func_8023E6C0(void *arg0, float arg1) {
    ((func_8023E6C0_S1 *)(arg0))->unk14 = 0;
    ((func_8023E6C0_S1 *)(arg0))->unk8 = arg1;
    ((func_8023E6C0_S1 *)(arg0))->unkC = arg1;
    ((func_8023E6C0_S1 *)(arg0))->unk10 = arg1;
    ((func_8023E6C0_S1 *)(arg0))->unk18 = arg1;
}

typedef struct func_802909E0_S1 func_802909E0_S1;
struct func_802909E0_S1 {
    char pad0[0x14];
    int unk14;
    char pad14[0x18 - 0x14 - sizeof(int)];
    int unk18;
};

void func_802909E0(void *arg0) {
    ((func_802909E0_S1 *)(arg0))->unk14 = 0;
    ((func_802909E0_S1 *)(arg0))->unk18 = 0;
}

typedef struct func_802532A0_S1 func_802532A0_S1;
struct func_802532A0_S1 {
    char pad0[0x8];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    unsigned int unkC;
};

void func_802532A0(void *arg0) {
    ((func_802532A0_S1 *)(arg0))->unk8 = ((func_802532A0_S1 *)(arg0))->unk8 + 1;
    ((func_802532A0_S1 *)(arg0))->unkC = ((func_802532A0_S1 *)(arg0))->unkC | 0x100;
}

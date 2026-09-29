typedef struct func_802A6A44_S1 func_802A6A44_S1;
struct func_802A6A44_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    int unkC;
    char padC[0x10 - 0xC - sizeof(int)];
    int unk10;
};

void func_802A6A44(void *arg0, int arg1) {
    ((func_802A6A44_S1 *)(arg0))->unk4 = 0;
    ((func_802A6A44_S1 *)(arg0))->unkC = arg1;
    ((func_802A6A44_S1 *)(arg0))->unk10 = arg1;
}

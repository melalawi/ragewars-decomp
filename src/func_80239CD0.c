typedef struct func_80239CD0_S1 func_80239CD0_S1;
struct func_80239CD0_S1 {
    char pad0[0x14];
    int unk14;
    char pad14[0x1C - 0x14 - sizeof(int)];
    int unk1C;
};

void func_80239CD0(void *arg0) {
    ((func_80239CD0_S1 *)(arg0))->unk14 = 0;
    ((func_80239CD0_S1 *)(arg0))->unk1C = 0;
}

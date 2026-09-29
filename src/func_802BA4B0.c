typedef struct func_802BA4B0_S1 func_802BA4B0_S1;
struct func_802BA4B0_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    short unkC;
    char padC[0xE - 0xC - sizeof(short)];
    short unkE;
    char padE[0x10 - 0xE - sizeof(short)];
    int unk10;
};

void func_802BA4B0(void *arg0, int arg1, int arg2, int arg3) {
    ((func_802BA4B0_S1 *)(arg0))->unk0 = 0;
    ((func_802BA4B0_S1 *)(arg0))->unk4 = arg1;
    ((func_802BA4B0_S1 *)(arg0))->unk8 = arg2;
    ((func_802BA4B0_S1 *)(arg0))->unkC = 0;
    ((func_802BA4B0_S1 *)(arg0))->unkE = 0;
    ((func_802BA4B0_S1 *)(arg0))->unk10 = arg3;
}

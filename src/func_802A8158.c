typedef struct func_802A8158_S1 func_802A8158_S1;
struct func_802A8158_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0xD - 0x4 - sizeof(int)];
    char unkD;
    char padD[0x18 - 0xD - sizeof(char)];
    short unk18;
    char pad18[0x1C - 0x18 - sizeof(short)];
    int unk1C;
};

void func_802A8158(void *arg0) {
    ((func_802A8158_S1 *)(arg0))->unk4 = 0;
    ((func_802A8158_S1 *)(arg0))->unk0 = 0;
    ((func_802A8158_S1 *)(arg0))->unkD = 0;
    ((func_802A8158_S1 *)(arg0))->unk18 = 0;
    ((func_802A8158_S1 *)(arg0))->unk1C = 0;
}

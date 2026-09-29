/* Resets an object through func_8024DD00, then clears its words from 0x1C to 0x38 and at 0x40, 0x44
   and 0x4C, sets the word at 0x3C to -1 and stores D_800C8914 in the float at 0x48. */
extern float D_800C8914;
typedef struct func_80246174_S1 func_80246174_S1;
struct func_80246174_S1 {
    char pad0[0x1C];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
    char pad24[0x28 - 0x24 - sizeof(int)];
    int unk28;
    char pad28[0x2C - 0x28 - sizeof(int)];
    int unk2C;
    char pad2C[0x30 - 0x2C - sizeof(int)];
    int unk30;
    char pad30[0x34 - 0x30 - sizeof(int)];
    int unk34;
    char pad34[0x38 - 0x34 - sizeof(int)];
    int unk38;
    char pad38[0x3C - 0x38 - sizeof(int)];
    int unk3C;
    char pad3C[0x40 - 0x3C - sizeof(int)];
    int unk40;
    char pad40[0x44 - 0x40 - sizeof(int)];
    int unk44;
    char pad44[0x48 - 0x44 - sizeof(int)];
    float unk48;
    char pad48[0x4C - 0x48 - sizeof(float)];
    int unk4C;
};

void func_80246174(void *arg0) {
    float k;

    func_8024DD00(arg0);
    k = D_800C8914;
    ((func_80246174_S1 *)(arg0))->unk1C = 0;
    ((func_80246174_S1 *)(arg0))->unk20 = 0;
    ((func_80246174_S1 *)(arg0))->unk24 = 0;
    ((func_80246174_S1 *)(arg0))->unk28 = 0;
    ((func_80246174_S1 *)(arg0))->unk2C = 0;
    ((func_80246174_S1 *)(arg0))->unk30 = 0;
    ((func_80246174_S1 *)(arg0))->unk34 = 0;
    ((func_80246174_S1 *)(arg0))->unk38 = 0;
    ((func_80246174_S1 *)(arg0))->unk3C = -1;
    ((func_80246174_S1 *)(arg0))->unk40 = 0;
    ((func_80246174_S1 *)(arg0))->unk44 = 0;
    ((func_80246174_S1 *)(arg0))->unk4C = 0;
    ((func_80246174_S1 *)(arg0))->unk48 = k;
}

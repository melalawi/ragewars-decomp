typedef struct func_8029FA7C_S1 func_8029FA7C_S1;
struct func_8029FA7C_S1 {
    char pad0[0x10];
    int unk10;
    char pad10[0x14 - 0x10 - sizeof(int)];
    float unk14;
    char pad14[0x18 - 0x14 - sizeof(float)];
    float unk18;
    char pad18[0x1C - 0x18 - sizeof(float)];
    float unk1C;
    char pad1C[0x20 - 0x1C - sizeof(float)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    float unk24;
    char pad24[0x28 - 0x24 - sizeof(float)];
    float unk28;
    char pad28[0x2C - 0x28 - sizeof(float)];
    float unk2C;
    char pad2C[0x30 - 0x2C - sizeof(float)];
    int unk30;
    char pad30[0x34 - 0x30 - sizeof(int)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    float unk38;
    char pad38[0x3C - 0x38 - sizeof(float)];
    float unk3C;
    char pad3C[0x40 - 0x3C - sizeof(float)];
    float unk40;
    char pad40[0x44 - 0x40 - sizeof(float)];
    float unk44;
    char pad44[0x48 - 0x44 - sizeof(float)];
    float unk48;
    char pad48[0x4C - 0x48 - sizeof(float)];
    float unk4C;
};

void func_8029FA7C(void *arg0, int arg1, int arg2, int arg3,
                    float arg4, float arg5, float arg6, float arg7,
                    float arg8, float arg9, float arg10, float arg11,
                    float arg12, float arg13, float arg14, float arg15, float arg16) {
    ((func_8029FA7C_S1 *)(arg0))->unk10 = arg1;
    ((func_8029FA7C_S1 *)(arg0))->unk20 = arg2;
    ((func_8029FA7C_S1 *)(arg0))->unk30 = arg3;
    ((func_8029FA7C_S1 *)(arg0))->unk40 = arg4;
    ((func_8029FA7C_S1 *)(arg0))->unk14 = arg5;
    ((func_8029FA7C_S1 *)(arg0))->unk24 = arg6;
    ((func_8029FA7C_S1 *)(arg0))->unk34 = arg7;
    ((func_8029FA7C_S1 *)(arg0))->unk44 = arg8;
    ((func_8029FA7C_S1 *)(arg0))->unk18 = arg9;
    ((func_8029FA7C_S1 *)(arg0))->unk28 = arg10;
    ((func_8029FA7C_S1 *)(arg0))->unk38 = arg11;
    ((func_8029FA7C_S1 *)(arg0))->unk48 = arg12;
    ((func_8029FA7C_S1 *)(arg0))->unk1C = arg13;
    ((func_8029FA7C_S1 *)(arg0))->unk2C = arg14;
    ((func_8029FA7C_S1 *)(arg0))->unk3C = arg15;
    ((func_8029FA7C_S1 *)(arg0))->unk4C = arg16;
}

typedef struct func_802636D0_S1 func_802636D0_S1;
struct func_802636D0_S1 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x14 - 0xC - sizeof(int)];
    int unk14;
    char pad14[0x18 - 0x14 - sizeof(int)];
    int unk18;
    char pad18[0x1C - 0x18 - sizeof(int)];
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
};

/** Clear the object's fields, preserving the field at offset 0x10. */
void func_802636D0(void *object) {
    ((func_802636D0_S1 *)(object))->unk0 = 0;
    ((func_802636D0_S1 *)(object))->unk4 = 0;
    ((func_802636D0_S1 *)(object))->unk8 = 0;
    ((func_802636D0_S1 *)(object))->unkC = 0;
    ((func_802636D0_S1 *)(object))->unk14 = 0;
    ((func_802636D0_S1 *)(object))->unk18 = 0;
    ((func_802636D0_S1 *)(object))->unk1C = 0;
    ((func_802636D0_S1 *)(object))->unk20 = 0;
    ((func_802636D0_S1 *)(object))->unk24 = 0;
    ((func_802636D0_S1 *)(object))->unk28 = 0;
    ((func_802636D0_S1 *)(object))->unk2C = 0;
    ((func_802636D0_S1 *)(object))->unk30 = 0;
    ((func_802636D0_S1 *)(object))->unk34 = 0;
}

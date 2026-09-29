extern char D_8014AEB0;

typedef struct func_802958D8_S1 func_802958D8_S1;
struct func_802958D8_S1 {
    char unk0;
    char pad0[0x1 - 0x0 - sizeof(char)];
    char unk1;
    char pad1[0x4 - 0x1 - sizeof(char)];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x10 - 0xC - sizeof(int)];
    int unk10;
    char pad10[0x14 - 0x10 - sizeof(int)];
    int unk14;
    char pad14[0x1C - 0x14 - sizeof(int)];
    int unk1C;
    char pad1C[0x20 - 0x1C - sizeof(int)];
    int unk20;
    char pad20[0x24 - 0x20 - sizeof(int)];
    int unk24;
    char pad24[0x28 - 0x24 - sizeof(int)];
    int unk28;
    char pad28[0x212C - 0x28 - sizeof(int)];
    int unk212C;
    char pad212C[0x2130 - 0x212C - sizeof(int)];
    int unk2130;
    char pad2130[0x2134 - 0x2130 - sizeof(int)];
    int unk2134;
    char pad2134[0x21B8 - 0x2134 - sizeof(int)];
    int unk21B8;
};

/** Reset the record's fields, marking slot 1 active. */
void func_802958D8(void) {
    char *object = &D_8014AEB0;

    ((func_802958D8_S1 *)(object))->unk0 = 0;
    ((func_802958D8_S1 *)(object))->unk1 = 0;
    ((func_802958D8_S1 *)(object))->unkC = 0;
    ((func_802958D8_S1 *)(object))->unk10 = 0;
    ((func_802958D8_S1 *)(object))->unk8 = 1;
    ((func_802958D8_S1 *)(object))->unk4 = 0;
    ((func_802958D8_S1 *)(object))->unk14 = 0;
    ((func_802958D8_S1 *)(object))->unk1C = 0;
    ((func_802958D8_S1 *)(object))->unk24 = 0;
    ((func_802958D8_S1 *)(object))->unk28 = 0;
    ((func_802958D8_S1 *)(object))->unk20 = 0;
    ((func_802958D8_S1 *)(object))->unk212C = 0;
    ((func_802958D8_S1 *)(object))->unk2130 = 0;
    ((func_802958D8_S1 *)(object))->unk2134 = 0;
    ((func_802958D8_S1 *)(object))->unk21B8 = 0;
}

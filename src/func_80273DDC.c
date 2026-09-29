typedef struct func_80273DDC_S1 func_80273DDC_S1;
struct func_80273DDC_S1 {
    char pad0[0x10];
    float unk10;
    char pad10[0x14 - 0x10 - sizeof(float)];
    float unk14;
    char pad14[0x18 - 0x14 - sizeof(float)];
    float unk18;
    char pad18[0x20 - 0x18 - sizeof(float)];
    float unk20;
    char pad20[0x24 - 0x20 - sizeof(float)];
    float unk24;
    char pad24[0x28 - 0x24 - sizeof(float)];
    float unk28;
};

/** Swap the two float-groups at offsets 0x10 and 0x20 (three floats each). */
void func_80273DDC(void *object) {
    float t;
    t = ((func_80273DDC_S1 *)(object))->unk10;
    ((func_80273DDC_S1 *)(object))->unk10 = ((func_80273DDC_S1 *)(object))->unk20;
    ((func_80273DDC_S1 *)(object))->unk20 = t;

    t = ((func_80273DDC_S1 *)(object))->unk14;
    ((func_80273DDC_S1 *)(object))->unk14 = ((func_80273DDC_S1 *)(object))->unk24;
    ((func_80273DDC_S1 *)(object))->unk24 = t;

    t = ((func_80273DDC_S1 *)(object))->unk18;
    ((func_80273DDC_S1 *)(object))->unk18 = ((func_80273DDC_S1 *)(object))->unk28;
    ((func_80273DDC_S1 *)(object))->unk28 = t;
}

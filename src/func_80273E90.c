typedef struct func_80273E90_S1 func_80273E90_S1;
struct func_80273E90_S1 {
    char pad0[0x4];
    float unk4;
    char pad4[0x8 - 0x4 - sizeof(float)];
    float unk8;
    char pad8[0x14 - 0x8 - sizeof(float)];
    float unk14;
    char pad14[0x18 - 0x14 - sizeof(float)];
    float unk18;
    char pad18[0x24 - 0x18 - sizeof(float)];
    float unk24;
    char pad24[0x28 - 0x24 - sizeof(float)];
    float unk28;
    char pad28[0x34 - 0x28 - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    float unk38;
};

/** Swap the two floats within each of the object's four 0x10-byte records. */
void func_80273E90(void *object) {
    float t;
    t = ((func_80273E90_S1 *)(object))->unk4;
    ((func_80273E90_S1 *)(object))->unk4 = ((func_80273E90_S1 *)(object))->unk8;
    ((func_80273E90_S1 *)(object))->unk8 = t;

    t = ((func_80273E90_S1 *)(object))->unk14;
    ((func_80273E90_S1 *)(object))->unk14 = ((func_80273E90_S1 *)(object))->unk18;
    ((func_80273E90_S1 *)(object))->unk18 = t;

    t = ((func_80273E90_S1 *)(object))->unk24;
    ((func_80273E90_S1 *)(object))->unk24 = ((func_80273E90_S1 *)(object))->unk28;
    ((func_80273E90_S1 *)(object))->unk28 = t;

    t = ((func_80273E90_S1 *)(object))->unk34;
    ((func_80273E90_S1 *)(object))->unk34 = ((func_80273E90_S1 *)(object))->unk38;
    ((func_80273E90_S1 *)(object))->unk38 = t;
}

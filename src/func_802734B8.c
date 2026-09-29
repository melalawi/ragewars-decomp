typedef struct func_802734B8_S1 func_802734B8_S1;
struct func_802734B8_S1 {
    char pad0[0x30];
    float unk30;
    char pad30[0x34 - 0x30 - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    float unk38;
};

/** Add three floating arguments to the vector at offset 0x30. */
void func_802734B8(char *object, float x, float y, float z) {
    ((func_802734B8_S1 *)(object))->unk30 += x;
    ((func_802734B8_S1 *)(object))->unk34 += y;
    ((func_802734B8_S1 *)(object))->unk38 += z;
}

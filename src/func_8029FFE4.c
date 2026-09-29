typedef struct func_8029FFE4_S1 func_8029FFE4_S1;
struct func_8029FFE4_S1 {
    char pad0[0x30];
    float unk30;
    char pad30[0x34 - 0x30 - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    float unk38;
};

/** Copy the three floating components at offset 0x30. */
void func_8029FFE4(char *object, float *output) {
    output[0] = ((func_8029FFE4_S1 *)(object))->unk30;
    output[1] = ((func_8029FFE4_S1 *)(object))->unk34;
    output[2] = ((func_8029FFE4_S1 *)(object))->unk38;
}

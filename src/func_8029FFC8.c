typedef struct func_8029FFC8_S1 func_8029FFC8_S1;
struct func_8029FFC8_S1 {
    char pad0[0x30];
    float unk30;
    char pad30[0x34 - 0x30 - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    float unk38;
};

/** Copy a three-float vector into object offsets 0x30 through 0x38. */
void func_8029FFC8(void *arg0, float *arg1) {
    ((func_8029FFC8_S1 *)(arg0))->unk30 = arg1[0];
    ((func_8029FFC8_S1 *)(arg0))->unk34 = arg1[1];
    ((func_8029FFC8_S1 *)(arg0))->unk38 = arg1[2];
}

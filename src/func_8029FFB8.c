typedef struct func_8029FFB8_S1 func_8029FFB8_S1;
struct func_8029FFB8_S1 {
    char pad0[0x30];
    int unk30;
    char pad30[0x34 - 0x30 - sizeof(int)];
    int unk34;
    char pad34[0x38 - 0x34 - sizeof(int)];
    int unk38;
};

/** Clear the three words at object offsets 0x30 through 0x38. */
void func_8029FFB8(void *arg0) {
    ((func_8029FFB8_S1 *)(arg0))->unk30 = 0;
    ((func_8029FFB8_S1 *)(arg0))->unk34 = 0;
    ((func_8029FFB8_S1 *)(arg0))->unk38 = 0;
}

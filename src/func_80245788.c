/* Reports whether the globally selected record is active (its word at 0x38 is non-zero) and its
   value at 0x1C lies between the bounds at 0x30 and 0x34. */
extern void *D_800E2830;
typedef struct func_80245788_S1 func_80245788_S1;
struct func_80245788_S1 {
    char pad0[0x1C];
    float unk1C;
    char pad1C[0x30 - 0x1C - sizeof(float)];
    float unk30;
    char pad30[0x34 - 0x30 - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    int unk38;
};

int func_80245788(void) {
    void *record = D_800E2830;
    float temp_f1;
    int var_a0 = 0;

    if (((func_80245788_S1 *)(record))->unk38 != 0) {
        temp_f1 = ((func_80245788_S1 *)(record))->unk1C;
        if (((func_80245788_S1 *)(record))->unk30 <= temp_f1 && temp_f1 <= ((func_80245788_S1 *)(record))->unk34) {
            var_a0 = 1;
        }
    }
    return var_a0;
}

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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800DD3A8_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E2504_4 = 0.5f;
const float unbake_rodata_800E2508_4 = 0.216216221f;
const float unbake_rodata_800E250C_4 = 9.0f;
const float unbake_rodata_800E2510_4 = 13.0f;
const float unbake_rodata_800E2514_4 = 192.0f;
const float unbake_rodata_800E2518_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800ED414_5[] = {0x25, 0x30, 0x34, 0x64, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E8510_16[] = {0x4D, 0x65, 0x6D, 0x70, 0x61, 0x6B, 0x20, 0x72, 0x65, 0x61, 0x64, 0x20, 0x74, 0x65, 0x6D, 0x70, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
const unsigned char unbake_rodata_800E8528_17[] = {0x4D, 0x65, 0x6D, 0x70, 0x61, 0x6B, 0x20, 0x77, 0x72, 0x69, 0x74, 0x65, 0x20, 0x74, 0x65, 0x6D, 0x70, 0x20, 0x64, 0x61, 0x74, 0x61, 0x00};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DDB40_14[] = {0x0042E2BCU, 0x0042E300U, 0x0042E35CU, 0x0042E3B4U, 0x0042E32CU};
#endif

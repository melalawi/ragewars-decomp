typedef struct func_8024E068_S1 func_8024E068_S1;
typedef struct func_8024E068_S2 func_8024E068_S2;
struct func_8024E068_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024E068_S2 {
    char pad0[0x4C];
    int unk4C;
};

int func_8024E068(void *arg0) {
    void *temp_a0 = ((func_8024E068_S1 *)(arg0))->unk18;
    unsigned int new_var = 0;
    if (*(int *)temp_a0 != 1) {
        return new_var;
    }
    if (new_var) {
        return ((func_8024E068_S2 *)(temp_a0))->unk4C & 0x20;
    } else {
        return ((func_8024E068_S2 *)(temp_a0))->unk4C & 0x20;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FCB10_4[] = {0x34, 0x24, 0x03, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800F6F40_C[] = {0x4C, 0x65, 0x61, 0x70, 0x52, 0x61, 0x64, 0x69, 0x75, 0x73, 0x44, 0x00};
#elif defined(VERSION_EU)
const float unbake_rodata_800EEAA8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9870_4 = 1.0f;
const float unbake_rodata_800E9874_4 = 1.69014084f;
const float unbake_rodata_800E9878_4 = 1.62162161f;
const float unbake_rodata_800E987C_4 = 1.69014084f;
const float unbake_rodata_800E9880_4 = 1.08108115f;
const float unbake_rodata_800E9884_4 = 9.0f;
const float unbake_rodata_800E9888_4 = 4.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800DF520_4[] = {0x96, 0x96, 0x96, 0x00};
const unsigned char unbake_rodata_800DF524_4[] = {0x96, 0x96, 0x96, 0x00};
const unsigned char unbake_rodata_800DF528_4[] = {0xC8, 0xC8, 0xC8, 0x00};
const unsigned char unbake_rodata_800DF52C_4[] = {0xC8, 0xC8, 0xC8, 0x00};
const unsigned char unbake_rodata_800DF530_4[] = {0x00, 0x00, 0x32, 0x00};
const unsigned char unbake_rodata_800DF534_C[] = {0x00, 0x00, 0x00, 0x00, 0x80, 0x0D, 0x33, 0x8C, 0x00, 0x00, 0x01, 0xFE};
#endif

typedef struct func_8024DD7C_S1 func_8024DD7C_S1;
typedef struct func_8024DD7C_S2 func_8024DD7C_S2;
struct func_8024DD7C_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_8024DD7C_S2 {
    char pad0[0x14];
    int unk14;
};

int func_8024DD7C(void *arg0) {
    void *temp_a0 = ((func_8024DD7C_S1 *)(arg0))->unk18;
    unsigned int new_var = 0;
    if (*(int *)temp_a0 != 1) {
        return new_var;
    }
    if (new_var) {
        return ((func_8024DD7C_S2 *)(temp_a0))->unk14 & 1;
    } else {
        return ((func_8024DD7C_S2 *)(temp_a0))->unk14 & 1;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800EFC84_C[] = {0x00, 0x2C, 0x04, 0x02, 0x00, 0x00, 0x44, 0x70, 0x00, 0x00, 0x0A, 0x08};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5A02_4[] = {0x00, 0xEF, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EE838_2C[] = {0x0043D5A4U, 0x0043D5ACU, 0x0043D5B4U, 0x0043D5BCU, 0x0043D5C4U, 0x0043D5CCU, 0x0043D5D4U, 0x0043D5DCU, 0x0043D5E4U, 0x0043D5ECU, 0x0043D5F4U};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E96F0_3[] = {0x25, 0x64, 0x00};
const unsigned char unbake_rodata_800E96F4_9[] = {0x25, 0x64, 0x2E, 0x25, 0x73, 0x2E, 0x25, 0x73, 0x00};
const unsigned char unbake_rodata_800E9700_6[] = {0x25, 0x64, 0x2E, 0x25, 0x73, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800DE768_4 = 1.0f;
#endif

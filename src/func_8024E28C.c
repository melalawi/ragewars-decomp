typedef struct func_8024E28C_S1 func_8024E28C_S1;
struct func_8024E28C_S1 {
    char pad0[0x18];
    char* unk18;
};

/** Return bit two of the nested state word. */
unsigned int func_8024E28C(char *object) {
    return (*(unsigned int *)(((func_8024E28C_S1 *)(object))->unk18 + 4) >> 2) & 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FDB5A_1[] = {0x13};
const unsigned char unbake_rodata_800FDB5B_1[] = {0x2C};
#elif defined(VERSION_EU)
const float unbake_rodata_800EEB78_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800E9B78_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800E0170_4 = 2.52233724e-44f;
const float unbake_rodata_800E0174_4 = 2.1019477e-44f;
const float unbake_rodata_800E0178_4 = 7.28675201e-44f;
const float unbake_rodata_800E017C_4 = 1.31722056e-43f;
#endif

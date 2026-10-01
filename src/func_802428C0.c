typedef struct func_802428C0_S1 func_802428C0_S1;
typedef struct func_802428C0_S2 func_802428C0_S2;
struct func_802428C0_S1 {
    char pad0[0x3C];
    unsigned int unk3C;
};
struct func_802428C0_S2 {
    char pad0[0x38];
    unsigned int unk38;
};

/** Set flag 8 in the first object and flag 0x10 in the second. */
void func_802428C0(void *first, void *second) {
    ((func_802428C0_S1 *)(first))->unk3C |= 8;
    ((func_802428C0_S2 *)(second))->unk38 |= 0x10;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DD078_24[] = {0x0043F464U, 0x0043F498U, 0x0043F498U, 0x0043F470U, 0x0043F484U, 0x0043F498U, 0x0043F4A8U, 0x0043F4BCU, 0x0043F4D0U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E22E8_30[] = {0x0043D3E4U, 0x0043D3ECU, 0x0043D3F4U, 0x0043D3FCU, 0x0043D404U, 0x0043D40CU, 0x0043D414U, 0x0043D41CU, 0x0043D424U, 0x0043D42CU, 0x0043D434U, 0x00419760U};
#elif defined(VERSION_EU)
const float unbake_rodata_800ED170_4 = 1.0f;
const float unbake_rodata_800ED174_4 = 1.0f;
const float unbake_rodata_800ED178_4 = 6.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800E0BF6_2[] = {0x01, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800DD680_4 = 0.0666666701f;
const float unbake_rodata_800DD684_4 = 0.0166666675f;
const float unbake_rodata_800DD688_4 = 5.0f;
const float unbake_rodata_800DD68C_4 = 0.0666666701f;
const float unbake_rodata_800DD690_4 = 0.0166666675f;
const float unbake_rodata_800DD694_4 = 10.0f;
#endif

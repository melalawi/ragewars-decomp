typedef struct func_8022B168_S1 func_8022B168_S1;
struct func_8022B168_S1 {
    char pad0[0x5E4];
    int unk5E4;
};

/** Report whether the word at offset 0x5E4 is zero. */
int func_8022B168(void *arg0) {
    return ((func_8022B168_S1 *)(arg0))->unk5E4 == 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5D38_4 = 3.125f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CAFA0_18[] = {0x002A5174U, 0x002A51A0U, 0x002A51BCU, 0x002A51C8U, 0x002A5234U, 0x002A5274U};
#elif defined(VERSION_EU)
const double unbake_rodata_800C5AE8_8 = 0.0;
const double unbake_rodata_800C5AF0_8 = 4503599627370496.0;
const double unbake_rodata_800C5AF8_8 = 1.0;
const double unbake_rodata_800C5B00_8 = 1.0;
const double unbake_rodata_800C5B08_8 = 4503599627370496.0;
const double unbake_rodata_800C5B10_8 = 1.0;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C59A0_8[] = {0x7F, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const double unbake_rodata_800C59A8_8 = 1.0;
const double unbake_rodata_800C59B0_8 = 1.0;
#elif defined(VERSION_DE)
const float unbake_rodata_800C5DB8_4 = 1.69014084f;
const float unbake_rodata_800C5DBC_4 = 1.62162161f;
#endif

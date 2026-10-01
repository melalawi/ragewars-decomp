/** Read the global word at VRAM 0x80145048. */
extern int D_80145048;

int func_8022BA80(void) {
    return D_80145048;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C5FF8_1C[] = {0x002A8D04U, 0x002A8D14U, 0x002A8D44U, 0x002A8D24U, 0x002A8D34U, 0x002A8D34U, 0x002A8D44U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800CB278_1C[] = {0x002A9DC4U, 0x002A9DD4U, 0x002A9E04U, 0x002A9DE4U, 0x002A9DF4U, 0x002A9DF4U, 0x002A9E04U};
#elif defined(VERSION_EU)
const float unbake_rodata_800C60A8_4 = 3.125f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C60A4_4 = 3.14159274f;
const float unbake_rodata_800C60A8_4 = 0.5f;
const float unbake_rodata_800C60AC_4 = 1.0f;
const float unbake_rodata_800C60B0_4 = 2.14748365e+09f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C5FF8_1C[] = {0x002A8B9CU, 0x002A8BACU, 0x002A8BDCU, 0x002A8BBCU, 0x002A8BCCU, 0x002A8BCCU, 0x002A8BDCU};
const float unbake_rodata_800C6014_4 = 24.0f;
const float unbake_rodata_800C6018_4 = 12.0f;
const float unbake_rodata_800C601C_4 = 6.0f;
const float unbake_rodata_800C6020_4 = 16.0f;
const float unbake_rodata_800C6024_4 = 8.0f;
const float unbake_rodata_800C6028_4 = 1.0f;
#endif

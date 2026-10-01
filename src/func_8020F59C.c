/** Return the empty result used by callers at VRAM 0x8020F59C. */
int func_8020F59C(void) {
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3D40_4 = 2.14748365e+09f;
const float unbake_rodata_800C3D44_4 = 5.11999989f;
const float unbake_rodata_800C3D48_4 = 1.57079649f;
const float unbake_rodata_800C3D4C_4 = 3.14159298f;
const float unbake_rodata_800C3D50_4 = 4.71238947f;
const float unbake_rodata_800C3D54_4 = 102.399994f;
const float unbake_rodata_800C3D58_4 = 10.2399998f;
const float unbake_rodata_800C3D5C_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C8DF0_3C[] = {0x0024E2DCU, 0x0024E2E4U, 0x0024E2DCU, 0x0024E2DCU, 0x0024E2E4U, 0x0024E2DCU, 0x0024E2DCU, 0x0024E2DCU, 0x0024E2DCU, 0x0024E2E4U, 0x0024E2DCU, 0x0024E2E4U, 0x0024E2DCU, 0x0024E2DCU, 0x0024E2DCU};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C3BE4_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x73, 0x20, 0x69, 0x6E, 0x64, 0x65, 0x78, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3AE0_4 = 0.00787401572f;
const float unbake_rodata_800C3AE4_4 = 3.0f;
const float unbake_rodata_800C3AE8_4 = 1.0f;
const float unbake_rodata_800C3AEC_4 = 0.00872664712f;
const float unbake_rodata_800C3AF0_4 = 6.28318548f;
const float unbake_rodata_800C3AF4_4 = 6.28318548f;
const float unbake_rodata_800C3AF8_4 = 0.0174532942f;
const float unbake_rodata_800C3AFC_4 = 0.0174532942f;
const float unbake_rodata_800C3B00_4 = 1.0f;
const float unbake_rodata_800C3B04_4 = 0.200000003f;
const float unbake_rodata_800C3B08_4 = 10.2399998f;
const float unbake_rodata_800C3B0C_4 = 4.0f;
const float unbake_rodata_800C3B10_4 = 0.200000003f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3CA4_4 = 1.0f;
const float unbake_rodata_800C3CA8_4 = 0.436332345f;
const float unbake_rodata_800C3CAC_4 = 0.163624629f;
const float unbake_rodata_800C3CB0_4 = 0.375f;
const float unbake_rodata_800C3CB4_4 = 0.436332345f;
const float unbake_rodata_800C3CB8_4 = 0.163624629f;
const float unbake_rodata_800C3CBC_4 = 0.375f;
const float unbake_rodata_800C3CC0_4 = 25.0f;
const float unbake_rodata_800C3CC4_4 = 18.75f;
const float unbake_rodata_800C3CC8_4 = 0.75f;
const float unbake_rodata_800C3CCC_4 = 0.5f;
const float unbake_rodata_800C3CD0_4 = 1.0f;
#endif

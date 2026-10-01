void func_80219480(void) {
    char pad[0x10];
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4DC8_4 = 65536.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F88_4 = 65536.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800C4DCC_D[] = {0x4C, 0x69, 0x74, 0x20, 0x56, 0x65, 0x72, 0x74, 0x69, 0x63, 0x65, 0x73, 0x00};
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4DDC_4 = 56.0000038f;
const float unbake_rodata_800C4DE0_4 = 0.21960786f;
const float unbake_rodata_800C4DE4_4 = 255.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E4C_4 = 0.00392156886f;
const float unbake_rodata_800C4E50_4 = 65536.0f;
#endif

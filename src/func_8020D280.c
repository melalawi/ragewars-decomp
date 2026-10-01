typedef struct func_8020D280_S1 func_8020D280_S1;
struct func_8020D280_S1 {
    char pad0[0x28];
    int unk28;
};

int func_8020D280(void *arg0) {
    ((func_8020D280_S1 *)(arg0))->unk28 = 1;
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C36A0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800C87F8_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
const float unbake_rodata_800C880C_4 = 1.5f;
const float unbake_rodata_800C8810_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3808_4 = 1.0f;
const float unbake_rodata_800C380C_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3808_4 = 1.0f;
const float unbake_rodata_800C380C_4 = 0.17453295f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C3708_11[] = {0x61, 0x6E, 0x69, 0x6D, 0x20, 0x6F, 0x62, 0x6A, 0x65, 0x63, 0x74, 0x20, 0x69, 0x6E, 0x66, 0x6F, 0x00};
const float unbake_rodata_800C371C_4 = 1.5f;
const float unbake_rodata_800C3720_4 = 1.0f;
#endif

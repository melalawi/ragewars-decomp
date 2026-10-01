extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_802067FC_S1 func_802067FC_S1;
struct func_802067FC_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_802067FC(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_802067FC_S1 *)(arg0))->unkA, ((func_802067FC_S1 *)(arg0))->unk4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C28F0_4 = 5.11999989f;
const float unbake_rodata_800C28F4_4 = 5.11999989f;
const float unbake_rodata_800C28F8_4 = 11.25f;
const float unbake_rodata_800C28FC_4 = 5.11999989f;
const float unbake_rodata_800C2900_4 = 6.0f;
const float unbake_rodata_800C2904_4 = 10.0f;
const float unbake_rodata_800C2908_4 = 8.0f;
const float unbake_rodata_800C290C_4 = 12.0f;
const float unbake_rodata_800C2910_4 = 8.0f;
const float unbake_rodata_800C2914_4 = 23.0f;
const float unbake_rodata_800C2918_4 = 8.0f;
const float unbake_rodata_800C291C_4 = 23.0f;
const float unbake_rodata_800C2920_4 = 8.0f;
const float unbake_rodata_800C2924_4 = 23.0f;
const float unbake_rodata_800C2928_4 = 7.0f;
const float unbake_rodata_800C292C_4 = 23.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C79A4_4 = 0.5f;
const float unbake_rodata_800C79A8_4 = 3.14159274f;
const float unbake_rodata_800C79AC_4 = 0.5f;
const float unbake_rodata_800C79B0_4 = 1.57079637f;
const float unbake_rodata_800C79B4_4 = 0.5f;
const float unbake_rodata_800C79B8_4 = 3.14159274f;
const float unbake_rodata_800C79BC_4 = 0.75f;
const float unbake_rodata_800C79C0_4 = 0.75f;
const float unbake_rodata_800C79C4_4 = 0.75f;
const float unbake_rodata_800C79C8_4 = 1.57079637f;
const float unbake_rodata_800C79CC_4 = 7.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2A74_4 = 0.25f;
const float unbake_rodata_800C2A78_4 = 1.33333337f;
const float unbake_rodata_800C2A7C_4 = 0.00100000005f;
const float unbake_rodata_800C2A80_4 = 1024.0f;
const float unbake_rodata_800C2A84_4 = 0.0009765625f;
const float unbake_rodata_800C2A88_4 = 1.0f;
const float unbake_rodata_800C2A8C_4 = 0.0210000016f;
const float unbake_rodata_800C2A90_4 = 0.000100000005f;
const float unbake_rodata_800C2A94_4 = (-51.1999969f);
const float unbake_rodata_800C2A98_4 = 0.785398245f;
const float unbake_rodata_800C2A9C_4 = 0.699999988f;
const float unbake_rodata_800C2AA0_4 = 0.00999999978f;
const float unbake_rodata_800C2AA4_4 = 40.9599991f;
const float unbake_rodata_800C2AA8_4 = 40.9599991f;
const float unbake_rodata_800C2AAC_4 = (-10.2399998f);
const float unbake_rodata_800C2AB0_4 = 10.2399998f;
const float unbake_rodata_800C2AB4_4 = 66.5599976f;
const float unbake_rodata_800C2AB8_4 = 0.042857144f;
const float unbake_rodata_800C2ABC_4 = 5120.0f;
const float unbake_rodata_800C2AC0_4 = 100.0f;
const float unbake_rodata_800C2AC4_4 = 0.400000006f;
const float unbake_rodata_800C2AC8_4 = 1.0f;
const float unbake_rodata_800C2ACC_4 = 75.0f;
const float unbake_rodata_800C2AD0_4 = 15.0f;
const float unbake_rodata_800C2AD4_4 = 30.0f;
const float unbake_rodata_800C2AD8_4 = 20.0f;
const float unbake_rodata_800C2ADC_4 = 75.0f;
const float unbake_rodata_800C2AE0_4 = 150.0f;
const float unbake_rodata_800C2AE4_4 = 600.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2A84_4 = 40.9599991f;
const float unbake_rodata_800C2A88_4 = 3.0f;
const float unbake_rodata_800C2A8C_4 = 0.069813177f;
const float unbake_rodata_800C2A90_4 = 0.069813177f;
const float unbake_rodata_800C2A94_4 = 4.09600019f;
const float unbake_rodata_800C2A98_4 = 4.09600019f;
const float unbake_rodata_800C2A9C_4 = 81.9199982f;
const float unbake_rodata_800C2AA0_4 = 3.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C28B4_4 = 0.5f;
const float unbake_rodata_800C28B8_4 = 3.14159274f;
const float unbake_rodata_800C28BC_4 = 0.5f;
const float unbake_rodata_800C28C0_4 = 1.57079637f;
const float unbake_rodata_800C28C4_4 = 0.5f;
const float unbake_rodata_800C28C8_4 = 3.14159274f;
const float unbake_rodata_800C28CC_4 = 0.75f;
const float unbake_rodata_800C28D0_4 = 0.75f;
const float unbake_rodata_800C28D4_4 = 0.75f;
const float unbake_rodata_800C28D8_4 = 1.57079637f;
const float unbake_rodata_800C28DC_4 = 7.5f;
#endif

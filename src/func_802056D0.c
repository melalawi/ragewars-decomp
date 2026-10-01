extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_802056D0_S1 func_802056D0_S1;
struct func_802056D0_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_802056D0(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_802056D0_S1 *)(arg0))->unkA, ((func_802056D0_S1 *)(arg0))->unk4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2230_4 = 437.5f;
const float unbake_rodata_800C2234_4 = (-675.0f);
const float unbake_rodata_800C2238_4 = 0.25f;
const float unbake_rodata_800C223C_4 = 0.1875f;
const float unbake_rodata_800C2240_4 = 1.57079649f;
const float unbake_rodata_800C2244_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C73A0_4 = 0.400000006f;
const float unbake_rodata_800C73A4_4 = 1.29999995f;
const float unbake_rodata_800C73A8_4 = 0.100000001f;
const float unbake_rodata_800C73AC_4 = (-0.600000024f);
const float unbake_rodata_800C73B0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C24C0_4 = 0.400000006f;
const float unbake_rodata_800C24C4_4 = (-0.600000024f);
const float unbake_rodata_800C24C8_4 = 1.29999995f;
const float unbake_rodata_800C24CC_4 = 0.100000001f;
const float unbake_rodata_800C24D0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C24E0_4 = 255.0f;
const float unbake_rodata_800C24E4_4 = 0.5f;
const float unbake_rodata_800C24E8_4 = 2.14748365e+09f;
const float unbake_rodata_800C24EC_4 = 0.00312500005f;
const float unbake_rodata_800C24F0_4 = 0.00416666688f;
const float unbake_rodata_800C24F4_4 = 63.0f;
const float unbake_rodata_800C24F8_4 = 192.0f;
const float unbake_rodata_800C24FC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2298_4 = 2.0f;
const float unbake_rodata_800C229C_4 = 0.25f;
const float unbake_rodata_800C22A0_4 = 1.0f;
const float unbake_rodata_800C22A4_4 = 0.25f;
const float unbake_rodata_800C22A8_4 = 0.52359885f;
#endif

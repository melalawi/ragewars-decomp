extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_802062B0_S1 func_802062B0_S1;
struct func_802062B0_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_802062B0(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_802062B0_S1 *)(arg0))->unkA, ((func_802062B0_S1 *)(arg0))->unk4, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C24F4_4 = 0.899999976f;
const float unbake_rodata_800C24F8_4 = (-9.0f);
const float unbake_rodata_800C24FC_4 = 1.0f;
const float unbake_rodata_800C2500_4 = 10.0f;
const float unbake_rodata_800C2504_4 = 32.0f;
const float unbake_rodata_800C2508_4 = 8.0f;
const float unbake_rodata_800C250C_4 = 6.0f;
const float unbake_rodata_800C2510_4 = 4.0f;
const float unbake_rodata_800C2514_4 = 8.0f;
const float unbake_rodata_800C2518_4 = 6.0f;
const float unbake_rodata_800C251C_4 = 4.0f;
const float unbake_rodata_800C2520_4 = 8.0f;
const float unbake_rodata_800C2524_4 = 6.0f;
const float unbake_rodata_800C2528_4 = 4.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C74A4_4 = 0.0800000057f;
const float unbake_rodata_800C74A8_4 = 0.519999981f;
const float unbake_rodata_800C74AC_4 = (-5120.0f);
const float unbake_rodata_800C74B0_4 = (-1024.0f);
const float unbake_rodata_800C74B4_4 = 11.25f;
const float unbake_rodata_800C74B8_4 = 20.4799995f;
const float unbake_rodata_800C74BC_4 = 1.25f;
const float unbake_rodata_800C74C0_4 = 0.75f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2618_4 = 0.0666666701f;
const float unbake_rodata_800C261C_4 = 1.0f;
const float unbake_rodata_800C2620_4 = 51.1999969f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C2628_20[] = {0x0021B738U, 0x0021B744U, 0x0021B750U, 0x0021B75CU, 0x0021B768U, 0x0021B774U, 0x0021B780U, 0x0021B78CU};
const float unbake_rodata_800C2648_4 = 10.2399998f;
const float unbake_rodata_800C264C_4 = 81.9199982f;
const float unbake_rodata_800C2650_4 = 512.0f;
const float unbake_rodata_800C2654_4 = 5.11999989f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C23D4_4 = 0.5f;
const float unbake_rodata_800C23D8_4 = (-64.0f);
const float unbake_rodata_800C23DC_4 = 1.0f;
#endif

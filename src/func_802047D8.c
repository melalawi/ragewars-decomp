extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_802047D8_S1 func_802047D8_S1;
struct func_802047D8_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_802047D8(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_802047D8_S1 *)(arg0))->unkA, ((func_802047D8_S1 *)(arg0))->unk4, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C1E20_20[] = {0x0020EFC8U, 0x0020F00CU, 0x0020F01CU, 0x0020F028U, 0x0020F034U, 0x0020F068U, 0x0020F078U, 0x0020F088U};
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6F50_4 = 51200.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C2060_1C[] = {0x0020DF38U, 0x0020DF64U, 0x0020DF38U, 0x0020DF50U, 0x0020DF24U, 0x0020DF64U, 0x0020DF24U};
const float unbake_rodata_800C207C_4 = (-90.0f);
const float unbake_rodata_800C2080_4 = 90.0f;
const float unbake_rodata_800C2084_4 = 57.2957764f;
const float unbake_rodata_800C2088_4 = (-90.0f);
const float unbake_rodata_800C208C_4 = 90.0f;
const float unbake_rodata_800C2090_4 = 57.2957764f;
const float unbake_rodata_800C2094_4 = 45.0f;
const float unbake_rodata_800C2098_4 = (-45.0f);
const float unbake_rodata_800C209C_4 = 45.0f;
const float unbake_rodata_800C20A0_4 = 90.0f;
const float unbake_rodata_800C20A4_4 = 0.5f;
const float unbake_rodata_800C20A8_4 = 0.0174532942f;
const float unbake_rodata_800C20AC_4 = 1.0f;
const float unbake_rodata_800C20B0_4 = 45.0f;
const float unbake_rodata_800C20B4_4 = 90.0f;
const float unbake_rodata_800C20B8_4 = 45.0f;
const float unbake_rodata_800C20BC_4 = (-45.0f);
const float unbake_rodata_800C20C0_4 = 45.0f;
const float unbake_rodata_800C20C4_4 = 90.0f;
const float unbake_rodata_800C20C8_4 = 45.0f;
const float unbake_rodata_800C20CC_4 = (-45.0f);
const float unbake_rodata_800C20D0_4 = 45.0f;
const float unbake_rodata_800C20D4_4 = 90.0f;
const float unbake_rodata_800C20D8_4 = 1.0f;
const float unbake_rodata_800C20DC_4 = 0.5f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C20A0_1C[] = {0x0020DF38U, 0x0020DF64U, 0x0020DF38U, 0x0020DF50U, 0x0020DF24U, 0x0020DF64U, 0x0020DF24U};
const float unbake_rodata_800C20BC_4 = (-90.0f);
const float unbake_rodata_800C20C0_4 = 90.0f;
const float unbake_rodata_800C20C4_4 = 57.2957764f;
const float unbake_rodata_800C20C8_4 = (-90.0f);
const float unbake_rodata_800C20CC_4 = 90.0f;
const float unbake_rodata_800C20D0_4 = 57.2957764f;
const float unbake_rodata_800C20D4_4 = 45.0f;
const float unbake_rodata_800C20D8_4 = (-45.0f);
const float unbake_rodata_800C20DC_4 = 45.0f;
const float unbake_rodata_800C20E0_4 = 90.0f;
const float unbake_rodata_800C20E4_4 = 0.5f;
const float unbake_rodata_800C20E8_4 = 0.0174532942f;
const float unbake_rodata_800C20EC_4 = 1.0f;
const float unbake_rodata_800C20F0_4 = 45.0f;
const float unbake_rodata_800C20F4_4 = 90.0f;
const float unbake_rodata_800C20F8_4 = 45.0f;
const float unbake_rodata_800C20FC_4 = (-45.0f);
const float unbake_rodata_800C2100_4 = 45.0f;
const float unbake_rodata_800C2104_4 = 90.0f;
const float unbake_rodata_800C2108_4 = 45.0f;
const float unbake_rodata_800C210C_4 = (-45.0f);
const float unbake_rodata_800C2110_4 = 45.0f;
const float unbake_rodata_800C2114_4 = 90.0f;
const float unbake_rodata_800C2118_4 = 1.0f;
const float unbake_rodata_800C211C_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1E60_4 = 51200.0f;
#endif

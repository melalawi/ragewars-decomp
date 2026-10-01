extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_80207F60_S1 func_80207F60_S1;
struct func_80207F60_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_80207F60(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_80207F60_S1 *)(arg0))->unkA, ((func_80207F60_S1 *)(arg0))->unk4, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3090_4 = 1.0f;
const float unbake_rodata_800C3094_4 = 1.0f;
const float unbake_rodata_800C3098_4 = 15.0f;
const float unbake_rodata_800C309C_4 = 1.0f;
const float unbake_rodata_800C30A0_4 = (-2.0f);
const float unbake_rodata_800C30A4_4 = 3.0f;
const float unbake_rodata_800C30A8_4 = 255.0f;
const float unbake_rodata_800C30AC_4 = 2.14748365e+09f;
const double unbake_rodata_800C30B0_8 = 4294967296.0;
const double unbake_rodata_800C30B8_8 = 4294967296.0;
const double unbake_rodata_800C30C0_8 = 4294967296.0;
const float unbake_rodata_800C30C8_4 = 995.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C819C_4 = 2.14748365e+09f;
const float unbake_rodata_800C81A0_4 = 2.14748365e+09f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C31A0_4 = 1.0f;
const float unbake_rodata_800C31A4_4 = 1.0f;
const float unbake_rodata_800C31A8_4 = 1.79049289f;
const float unbake_rodata_800C31AC_4 = 1.0f;
const float unbake_rodata_800C31B0_4 = 1.79049289f;
const float unbake_rodata_800C31B4_4 = 1.0f;
const float unbake_rodata_800C31B8_4 = 1.79049289f;
const float unbake_rodata_800C31BC_4 = 1.79049289f;
const float unbake_rodata_800C31C0_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C31D8_4 = 1.0f;
const float unbake_rodata_800C31DC_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C30AC_4 = 2.14748365e+09f;
const float unbake_rodata_800C30B0_4 = 2.14748365e+09f;
#endif

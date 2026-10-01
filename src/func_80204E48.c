extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_80204E48_S1 func_80204E48_S1;
struct func_80204E48_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_80204E48(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_80204E48_S1 *)(arg0))->unkA, ((func_80204E48_S1 *)(arg0))->unk4, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1FD0_4 = 360000.0f;
const float unbake_rodata_800C1FD4_4 = 0.400000006f;
const float unbake_rodata_800C1FD8_4 = 3.14159274f;
const float unbake_rodata_800C1FDC_4 = 1.57079637f;
const float unbake_rodata_800C1FE0_4 = 100.0f;
const float unbake_rodata_800C1FE4_4 = 3.14159274f;
const float unbake_rodata_800C1FE8_4 = 1.57079637f;
const float unbake_rodata_800C1FEC_4 = 100.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7100_4 = 360000.0f;
const float unbake_rodata_800C7104_4 = 0.400000006f;
const float unbake_rodata_800C7108_4 = 3.14159274f;
const float unbake_rodata_800C710C_4 = 1.57079637f;
const float unbake_rodata_800C7110_4 = 100.0f;
const float unbake_rodata_800C7114_4 = 3.14159274f;
const float unbake_rodata_800C7118_4 = 1.57079637f;
const float unbake_rodata_800C711C_4 = 100.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2238_4 = 100.0f;
const float unbake_rodata_800C223C_4 = 2.25f;
const float unbake_rodata_800C2240_4 = 0.5f;
const float unbake_rodata_800C2244_4 = 153.599991f;
const float unbake_rodata_800C2248_4 = 307.199982f;
const float unbake_rodata_800C224C_4 = 100.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2278_4 = 100.0f;
const float unbake_rodata_800C227C_4 = 2.25f;
const float unbake_rodata_800C2280_4 = 0.5f;
const float unbake_rodata_800C2284_4 = 153.599991f;
const float unbake_rodata_800C2288_4 = 307.199982f;
const float unbake_rodata_800C228C_4 = 100.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2030_4 = 0.600000024f;
const float unbake_rodata_800C2034_4 = 10000.0f;
const float unbake_rodata_800C2038_4 = 3.14159274f;
const float unbake_rodata_800C203C_4 = 100.0f;
const float unbake_rodata_800C2040_4 = 1.0f;
const float unbake_rodata_800C2044_4 = 10000.0f;
const float unbake_rodata_800C2048_4 = 100.0f;
const float unbake_rodata_800C204C_4 = (-1.0f);
const float unbake_rodata_800C2050_4 = 3.14159274f;
const float unbake_rodata_800C2054_4 = 1.57079637f;
const float unbake_rodata_800C2058_4 = 100.0f;
const float unbake_rodata_800C205C_4 = 3.14159274f;
const float unbake_rodata_800C2060_4 = 1.57079637f;
const float unbake_rodata_800C2064_4 = 100.0f;
#endif

extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_80204DFC_S1 func_80204DFC_S1;
struct func_80204DFC_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_80204DFC(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_80204DFC_S1 *)(arg0))->unkA, ((func_80204DFC_S1 *)(arg0))->unk4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1F60_4 = 0.600000024f;
const float unbake_rodata_800C1F64_4 = 10000.0f;
const float unbake_rodata_800C1F68_4 = 3.14159274f;
const float unbake_rodata_800C1F6C_4 = 100.0f;
const float unbake_rodata_800C1F70_4 = 1.0f;
const float unbake_rodata_800C1F74_4 = 10000.0f;
const float unbake_rodata_800C1F78_4 = 100.0f;
const float unbake_rodata_800C1F7C_4 = (-1.0f);
const float unbake_rodata_800C1F80_4 = 3.14159274f;
const float unbake_rodata_800C1F84_4 = 1.57079637f;
const float unbake_rodata_800C1F88_4 = 100.0f;
const float unbake_rodata_800C1F8C_4 = 3.14159274f;
const float unbake_rodata_800C1F90_4 = 1.57079637f;
const float unbake_rodata_800C1F94_4 = 100.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7088_4 = 100.0f;
const float unbake_rodata_800C708C_4 = 2.25f;
const float unbake_rodata_800C7090_4 = 0.5f;
const float unbake_rodata_800C7094_4 = 153.599991f;
const float unbake_rodata_800C7098_4 = 307.199982f;
const float unbake_rodata_800C709C_4 = 100.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C21F0_4 = 1536.0f;
const float unbake_rodata_800C21F4_4 = 921.599976f;
const float unbake_rodata_800C21F8_4 = 512.0f;
const float unbake_rodata_800C21FC_4 = 0.785398245f;
const float unbake_rodata_800C2200_4 = 2.35619473f;
const float unbake_rodata_800C2204_4 = 1.10000002f;
const float unbake_rodata_800C2208_4 = 1.20000005f;
const float unbake_rodata_800C220C_4 = 0.800000012f;
const float unbake_rodata_800C2210_4 = 0.800000012f;
const float unbake_rodata_800C2214_4 = 1.10000002f;
const float unbake_rodata_800C2218_4 = 1.20000005f;
const float unbake_rodata_800C221C_4 = 1.0f;
const float unbake_rodata_800C2220_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2230_4 = 1536.0f;
const float unbake_rodata_800C2234_4 = 921.599976f;
const float unbake_rodata_800C2238_4 = 512.0f;
const float unbake_rodata_800C223C_4 = 0.785398245f;
const float unbake_rodata_800C2240_4 = 2.35619473f;
const float unbake_rodata_800C2244_4 = 1.10000002f;
const float unbake_rodata_800C2248_4 = 1.20000005f;
const float unbake_rodata_800C224C_4 = 0.800000012f;
const float unbake_rodata_800C2250_4 = 0.800000012f;
const float unbake_rodata_800C2254_4 = 1.10000002f;
const float unbake_rodata_800C2258_4 = 1.20000005f;
const float unbake_rodata_800C225C_4 = 1.0f;
const float unbake_rodata_800C2260_4 = 0.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1FB0_4 = 3.14159274f;
const float unbake_rodata_800C1FB4_4 = 0.392699093f;
const float unbake_rodata_800C1FB8_4 = 6.28318548f;
const float unbake_rodata_800C1FBC_4 = 6.28318548f;
const float unbake_rodata_800C1FC0_4 = 6.18318558f;
const float unbake_rodata_800C1FC4_4 = 0.100000001f;
const float unbake_rodata_800C1FC8_4 = 0.159154937f;
const float unbake_rodata_800C1FCC_4 = 8.0f;
const float unbake_rodata_800C1FD0_4 = 180.0f;
const float unbake_rodata_800C1FD4_4 = 140.0f;
#endif

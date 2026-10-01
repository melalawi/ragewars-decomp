extern void *func_8028D220(char *a, unsigned char b, short c);
extern char D_8011FE88;

typedef struct func_80219434_S1 func_80219434_S1;
struct func_80219434_S1 {
    char pad0[0x1];
    char unk1;
    char pad1[0x4 - 0x1 - sizeof(char)];
    short unk4;
};

void func_80219434(void *arg0) {
    func_8028D220(&D_8011FE88, ((func_80219434_S1 *)(arg0))->unk1, ((func_80219434_S1 *)(arg0))->unk4);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C4D84_4 = 1.41421354f;
const float unbake_rodata_800C4D88_4 = 0.5f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9F44_4 = 1.41421354f;
const float unbake_rodata_800C9F48_4 = 0.5f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4D9C_4 = 56.0000038f;
const float unbake_rodata_800C4DA0_4 = 0.21960786f;
const float unbake_rodata_800C4DA4_4 = 255.0f;
#elif defined(VERSION_EU_X)
const double unbake_rodata_800C4D90_8 = 4294967296.0;
const double unbake_rodata_800C4D98_8 = 4294967296.0;
const float unbake_rodata_800C4DA0_4 = 1.0f;
const float unbake_rodata_800C4DA4_4 = (-1.0f);
const float unbake_rodata_800C4DA8_4 = (-1.0f);
const float unbake_rodata_800C4DAC_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C4E04_4 = 6.28318548f;
const float unbake_rodata_800C4E08_4 = 262144.0f;
const float unbake_rodata_800C4E0C_4 = 262144.0f;
const unsigned int unbake_rodata_800C4E10_1C[] = {0x002803C0U, 0x002803CCU, 0x002803D8U, 0x0028040CU, 0x00280438U, 0x002803B4U, 0x002803ACU};
const float unbake_rodata_800C4E2C_4 = 0.09765625f;
const float unbake_rodata_800C4E30_4 = 2.85714293f;
const float unbake_rodata_800C4E34_4 = (-1.0f);
const float unbake_rodata_800C4E38_4 = 0.418879062f;
const float unbake_rodata_800C4E3C_4 = 255.0f;
#endif

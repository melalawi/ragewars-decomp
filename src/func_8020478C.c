extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_8020478C_S1 func_8020478C_S1;
struct func_8020478C_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_8020478C(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_8020478C_S1 *)(arg0))->unkA, ((func_8020478C_S1 *)(arg0))->unk4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C1D90_4 = 51200.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6EA4_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2050_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2090_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C1DB0_4 = 1.0f;
#endif

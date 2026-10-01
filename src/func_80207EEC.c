extern void func_8028B64C(void *a, unsigned short b, unsigned short c, int d);
extern char D_8011FE88;

typedef struct func_80207EEC_S1 func_80207EEC_S1;
struct func_80207EEC_S1 {
    char pad0[0x4];
    unsigned short unk4;
    char pad4[0xA - 0x4 - sizeof(unsigned short)];
    unsigned short unkA;
};

void func_80207EEC(void *arg0) {
    func_8028B64C(&D_8011FE88, ((func_80207EEC_S1 *)(arg0))->unkA, ((func_80207EEC_S1 *)(arg0))->unk4, 1);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3018_8 = 4294967296.0;
const float unbake_rodata_800C3020_4 = 0.0174532942f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C80C0_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3190_4 = 0.100000001f;
const float unbake_rodata_800C3194_4 = 1.0f;
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C3188_48[] = {0x002301A4U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x0023011CU, 0x002301B0U, 0x002300ECU, 0x00230180U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x002301B0U, 0x00230104U};
#elif defined(VERSION_DE)
const float unbake_rodata_800C2FD0_4 = 1.0f;
#endif

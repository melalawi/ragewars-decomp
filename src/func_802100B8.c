extern void func_8020FDB0(void *a, int b);

typedef struct func_802100B8_S1 func_802100B8_S1;
struct func_802100B8_S1 {
    char pad0[0x18];
    int unk18;
};

int func_802100B8(void *arg0) {
    func_8020FDB0(arg0, ((func_802100B8_S1 *)(*(void **)arg0))->unk18 + 0xAC);
    return 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const double unbake_rodata_800C3ED0_8 = 4294967296.0;
const float unbake_rodata_800C3ED8_4 = 0.00999999978f;
const float unbake_rodata_800C3EDC_4 = 4.53514731e-05f;
const float unbake_rodata_800C3EE0_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9010_4 = 1.0f;
const float unbake_rodata_800C9014_4 = 0.800000012f;
const float unbake_rodata_800C9018_4 = 0.00999999978f;
const float unbake_rodata_800C901C_4 = 1.0f;
const float unbake_rodata_800C9020_4 = 1.0f;
const float unbake_rodata_800C9024_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C3EA8_3C[] = {0x0024D388U, 0x0024D330U, 0x0024D398U, 0x0024D398U, 0x0024D330U, 0x0024D388U, 0x0024D378U, 0x0024D368U, 0x0024D340U, 0x0024D398U, 0x0024D388U, 0x0024D2F0U, 0x0024D388U, 0x0024D388U, 0x0024D388U};
const float unbake_rodata_800C3EE4_4 = 122.879997f;
const float unbake_rodata_800C3EE8_4 = 102.399994f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3E58_4 = 0.5f;
const float unbake_rodata_800C3E5C_4 = 0.300000012f;
const float unbake_rodata_800C3E60_4 = (-2.0f);
const float unbake_rodata_800C3E64_4 = (-1.0f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C3EDC_4 = 127.0f;
#endif

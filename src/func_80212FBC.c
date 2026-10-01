typedef struct func_80212FBC_S1 func_80212FBC_S1;
typedef struct func_80212FBC_S2 func_80212FBC_S2;
typedef struct func_80212FBC_S3 func_80212FBC_S3;
struct func_80212FBC_S1 {
    char pad0[0x1D8];
    void* unk1D8;
};
struct func_80212FBC_S2 {
    char pad0[0x1454];
    void* unk1454;
};
struct func_80212FBC_S3 {
    char pad0[0x220];
    int unk220;
    char pad220[0x224 - 0x220 - sizeof(int)];
    int unk224;
};

/** Reset two state words reached through the object's linked records. */
void func_80212FBC(void *object) {
    void *first = ((func_80212FBC_S1 *)(object))->unk1D8;
    void *second = ((func_80212FBC_S2 *)(first))->unk1454;
    ((func_80212FBC_S3 *)(second))->unk220 = 0;
    ((func_80212FBC_S3 *)(second))->unk224 = -1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C41C0_4 = 0.99000001f;
const float unbake_rodata_800C41C4_4 = 0.0078125f;
const float unbake_rodata_800C41C8_4 = 1.0f;
const float unbake_rodata_800C41CC_4 = 0.100000001f;
const float unbake_rodata_800C41D0_4 = 0.75f;
const float unbake_rodata_800C41D4_4 = 1.0f;
const float unbake_rodata_800C41D8_4 = (-1.0f);
const float unbake_rodata_800C41DC_4 = 0.0125000002f;
const float unbake_rodata_800C41E0_4 = 1.0f;
const float unbake_rodata_800C41E4_4 = (-1.0f);
const float unbake_rodata_800C41E8_4 = 0.0125000002f;
const float unbake_rodata_800C41EC_4 = 0.0125000002f;
const float unbake_rodata_800C41F0_4 = 1.0f;
const float unbake_rodata_800C41F4_4 = (-1.0f);
const float unbake_rodata_800C41F8_4 = 0.0125000002f;
const float unbake_rodata_800C41FC_4 = 1.0f;
const float unbake_rodata_800C4200_4 = (-1.0f);
const float unbake_rodata_800C4204_4 = 0.0125000002f;
const float unbake_rodata_800C4208_4 = 0.75f;
const float unbake_rodata_800C420C_4 = 1.0f;
const float unbake_rodata_800C4210_4 = 0.75f;
const float unbake_rodata_800C4214_4 = (-1.0f);
const float unbake_rodata_800C4218_4 = 0.100000001f;
#elif defined(VERSION_US_REV1)
const double unbake_rodata_800C9320_8 = 4294967296.0;
const double unbake_rodata_800C9328_8 = 4294967296.0;
const double unbake_rodata_800C9330_8 = 4294967296.0;
const double unbake_rodata_800C9338_8 = 4294967296.0;
const double unbake_rodata_800C9340_8 = 4294967296.0;
#elif defined(VERSION_EU)
const float unbake_rodata_800C4344_4 = 3.05185094e-05f;
const float unbake_rodata_800C4348_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C42FC_4 = 32767.0f;
const float unbake_rodata_800C4300_4 = 0.100000001f;
const float unbake_rodata_800C4304_4 = 60.0f;
#elif defined(VERSION_DE)
const double unbake_rodata_800C41C8_8 = 4294967296.0;
const double unbake_rodata_800C41D0_8 = 4294967296.0;
const double unbake_rodata_800C41D8_8 = 4294967296.0;
const double unbake_rodata_800C41E0_8 = 4294967296.0;
const double unbake_rodata_800C41E8_8 = 4294967296.0;
const float unbake_rodata_800C41F0_4 = 9.58767268e-05f;
const float unbake_rodata_800C41F4_4 = 9.58767268e-05f;
#endif

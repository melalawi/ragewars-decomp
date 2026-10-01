typedef struct func_80206930_S1 func_80206930_S1;
typedef struct func_80206930_S2 func_80206930_S2;
typedef struct func_80206930_S3 func_80206930_S3;
struct func_80206930_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_80206930_S2 {
    char pad0[0xE];
    unsigned char unkE;
    char padE[0x10 - 0xE - sizeof(unsigned char)];
    unsigned char unk10;
};
struct func_80206930_S3 {
    char pad0[0x7];
    unsigned char unk7;
};

/** Copy the source byte at offset 7 into two fields under object offset 0x18. */
void func_80206930(void *arg0, int arg1, void *arg2) {
    void *inner = ((func_80206930_S1 *)(arg0))->unk18;
    ((func_80206930_S2 *)(inner))->unkE = ((func_80206930_S3 *)(arg2))->unk7;
    inner = ((func_80206930_S1 *)(arg0))->unk18;
    ((func_80206930_S2 *)(inner))->unk10 = ((func_80206930_S3 *)(arg2))->unk7;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2A24_4 = 0.279252708f;
const float unbake_rodata_800C2A28_4 = 1.0f;
const float unbake_rodata_800C2A2C_4 = 0.00999999978f;
const float unbake_rodata_800C2A30_4 = 0.0599999987f;
const float unbake_rodata_800C2A34_4 = 80.0f;
const float unbake_rodata_800C2A38_4 = 0.0174532942f;
const float unbake_rodata_800C2A3C_4 = 8.0f;
const float unbake_rodata_800C2A40_4 = 90.0f;
const float unbake_rodata_800C2A44_4 = 0.5f;
const float unbake_rodata_800C2A48_4 = 2.5f;
const float unbake_rodata_800C2A4C_4 = 2.5f;
const float unbake_rodata_800C2A50_4 = 50.0f;
const float unbake_rodata_800C2A54_4 = 1.0f;
const float unbake_rodata_800C2A58_4 = 10.2399998f;
const float unbake_rodata_800C2A5C_4 = 10.2399998f;
const float unbake_rodata_800C2A60_4 = 15.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7AF0_4 = 57.2957764f;
const float unbake_rodata_800C7AF4_4 = (-40.0f);
const float unbake_rodata_800C7AF8_4 = 10.2399998f;
const float unbake_rodata_800C7AFC_4 = 0.069813177f;
const float unbake_rodata_800C7B00_4 = 0.0436332375f;
const float unbake_rodata_800C7B04_4 = 0.087266475f;
const float unbake_rodata_800C7B08_4 = 0.104719765f;
const float unbake_rodata_800C7B0C_4 = 11.25f;
const float unbake_rodata_800C7B10_4 = 1.02400005f;
const float unbake_rodata_800C7B14_4 = (-1.02400005f);
const float unbake_rodata_800C7B18_4 = 5.11999989f;
const float unbake_rodata_800C7B1C_4 = 11.25f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2BB4_4 = 0.087266475f;
const float unbake_rodata_800C2BB8_4 = 21.0f;
const float unbake_rodata_800C2BBC_4 = 0.100000001f;
const float unbake_rodata_800C2BC0_4 = 0.116666667f;
const float unbake_rodata_800C2BC4_4 = 0.000555555569f;
const float unbake_rodata_800C2BC8_4 = 0.0599999987f;
const float unbake_rodata_800C2BCC_4 = 0.0174532942f;
const float unbake_rodata_800C2BD0_4 = 0.899999976f;
const float unbake_rodata_800C2BD4_4 = 82.9439926f;
const float unbake_rodata_800C2BD8_4 = 10.2399998f;
const float unbake_rodata_800C2BDC_4 = 0.5f;
const float unbake_rodata_800C2BE0_4 = 8.19200039f;
const float unbake_rodata_800C2BE4_4 = 3.14159274f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2BC0_4 = 0.5f;
const float unbake_rodata_800C2BC4_4 = 0.5f;
const float unbake_rodata_800C2BC8_4 = 0.75f;
const float unbake_rodata_800C2BCC_4 = 0.75f;
const float unbake_rodata_800C2BD0_4 = 0.5f;
const float unbake_rodata_800C2BD4_4 = 0.75f;
const float unbake_rodata_800C2BD8_4 = 0.75f;
const float unbake_rodata_800C2BDC_4 = 0.75f;
const float unbake_rodata_800C2BE0_4 = 4.0f;
const float unbake_rodata_800C2BE4_4 = 1.79999995f;
const float unbake_rodata_800C2BE8_4 = 16.0f;
const float unbake_rodata_800C2BEC_4 = 0.0174532942f;
const float unbake_rodata_800C2BF0_4 = 7.5f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2A00_4 = 57.2957764f;
const float unbake_rodata_800C2A04_4 = (-40.0f);
const float unbake_rodata_800C2A08_4 = 10.2399998f;
const float unbake_rodata_800C2A0C_4 = 0.069813177f;
const float unbake_rodata_800C2A10_4 = 0.0436332375f;
const float unbake_rodata_800C2A14_4 = 0.087266475f;
const float unbake_rodata_800C2A18_4 = 0.104719765f;
const float unbake_rodata_800C2A1C_4 = 11.25f;
const float unbake_rodata_800C2A20_4 = 1.02400005f;
const float unbake_rodata_800C2A24_4 = (-1.02400005f);
const float unbake_rodata_800C2A28_4 = 5.11999989f;
const float unbake_rodata_800C2A2C_4 = 11.25f;
#endif

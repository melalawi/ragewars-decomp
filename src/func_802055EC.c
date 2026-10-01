typedef struct func_802055EC_S1 func_802055EC_S1;
typedef struct func_802055EC_S2 func_802055EC_S2;
typedef struct func_802055EC_S3 func_802055EC_S3;
struct func_802055EC_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    unsigned int unk100;
};
struct func_802055EC_S2 {
    char pad0[0xCB];
    signed char unkCB;
};
struct func_802055EC_S3 {
    char pad0[0x14];
    unsigned int unk14;
};

/** Clear two flags when the controlling byte and nested flag are set. */
void func_802055EC(void *arg0, void *arg1) {
    char *nested = ((func_802055EC_S1 *)(arg0))->unk18;
    if (((func_802055EC_S2 *)(arg1))->unkCB != 0 &&
        (((func_802055EC_S3 *)(nested))->unk14 & 0x20) != 0) {
        unsigned int flags = ((func_802055EC_S1 *)(arg0))->unk100;
        flags &= ~0x2000;
        flags &= ~0x100;
        ((func_802055EC_S1 *)(arg0))->unk100 = flags;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C21E0_4 = 0.400000006f;
const float unbake_rodata_800C21E4_4 = 1.29999995f;
const float unbake_rodata_800C21E8_4 = 0.100000001f;
const float unbake_rodata_800C21EC_4 = (-0.600000024f);
const float unbake_rodata_800C21F0_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C7338_4 = 0.785398245f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C2438_4 = 0.899999976f;
const float unbake_rodata_800C243C_4 = 1.0f;
const float unbake_rodata_800C2440_4 = (-1.0f);
const float unbake_rodata_800C2444_4 = 1.0f;
const float unbake_rodata_800C2448_4 = (-1.0f);
const float unbake_rodata_800C244C_4 = 1.0f;
const float unbake_rodata_800C2450_4 = (-1.0f);
const float unbake_rodata_800C2454_4 = 1.22173059f;
const float unbake_rodata_800C2458_4 = 1.91986239f;
const float unbake_rodata_800C245C_4 = 1.0f;
const float unbake_rodata_800C2460_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C2460_4 = 1.0f;
const float unbake_rodata_800C2464_4 = (-1.0f);
const float unbake_rodata_800C2468_4 = 0.52359885f;
const float unbake_rodata_800C246C_4 = 3.14159274f;
const float unbake_rodata_800C2470_4 = 0.261799425f;
const float unbake_rodata_800C2474_4 = (-0.261799425f);
#elif defined(VERSION_DE)
const float unbake_rodata_800C2220_4 = 0.400000006f;
const float unbake_rodata_800C2224_4 = (-0.600000024f);
const float unbake_rodata_800C2228_4 = 1.29999995f;
const float unbake_rodata_800C222C_4 = 0.100000001f;
const float unbake_rodata_800C2230_4 = 1.0f;
#endif

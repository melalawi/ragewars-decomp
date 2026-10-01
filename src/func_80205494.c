typedef struct func_80205494_S1 func_80205494_S1;
typedef struct func_80205494_S2 func_80205494_S2;
typedef struct func_80205494_S3 func_80205494_S3;
struct func_80205494_S1 {
    char pad0[0x18];
    char* unk18;
    char pad18[0x100 - 0x18 - sizeof(char*)];
    unsigned int unk100;
};
struct func_80205494_S2 {
    char pad0[0xCB];
    signed char unkCB;
};
struct func_80205494_S3 {
    char pad0[0x14];
    unsigned int unk14;
};

/** Clear two flags when the controlling byte and nested flag are set. */
void func_80205494(void *arg0, void *arg1) {
    char *nested = ((func_80205494_S1 *)(arg0))->unk18;
    if (((func_80205494_S2 *)(arg1))->unkCB != 0 &&
        (((func_80205494_S3 *)(nested))->unk14 & 0x4) != 0) {
        unsigned int flags = ((func_80205494_S1 *)(arg0))->unk100;
        flags &= ~0x2000;
        flags &= ~0x100;
        ((func_80205494_S1 *)(arg0))->unk100 = flags;
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C2178_4 = 0.785398245f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C72C0_4 = 1.0f;
const float unbake_rodata_800C72C4_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C2408_4 = 3.40282347e+38f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C243C_4 = 51.1999969f;
const float unbake_rodata_800C2440_4 = 51.1999969f;
const float unbake_rodata_800C2444_4 = 3.14159274f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C2198_4 = 0.899999976f;
const float unbake_rodata_800C219C_4 = 1.0f;
const float unbake_rodata_800C21A0_4 = (-1.0f);
const float unbake_rodata_800C21A4_4 = 1.0f;
const float unbake_rodata_800C21A8_4 = (-1.0f);
const float unbake_rodata_800C21AC_4 = 1.0f;
const float unbake_rodata_800C21B0_4 = (-1.0f);
const float unbake_rodata_800C21B4_4 = 1.22173059f;
const float unbake_rodata_800C21B8_4 = 1.91986239f;
const float unbake_rodata_800C21BC_4 = 1.0f;
const float unbake_rodata_800C21C0_4 = 0.5f;
#endif

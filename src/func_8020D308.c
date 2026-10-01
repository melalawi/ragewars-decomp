typedef struct func_8020D308_S1 func_8020D308_S1;
struct func_8020D308_S1 {
    char pad0[0x28];
    int unk28;
};

int func_8020D308(void *arg0) {
    return ((func_8020D308_S1 *)(arg0))->unk28 == 1;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C36E4_4 = 0.0666666701f;
const float unbake_rodata_800C36E8_4 = 0.0666666701f;
const float unbake_rodata_800C36EC_4 = (-0.5f);
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8824_4 = 1.0f;
const float unbake_rodata_800C8828_4 = (-1.0f);
#elif defined(VERSION_EU)
const float unbake_rodata_800C3854_4 = 1.0f;
const float unbake_rodata_800C3858_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3850_4 = 1.0f;
const float unbake_rodata_800C3854_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3734_4 = 1.0f;
const float unbake_rodata_800C3738_4 = (-1.0f);
#endif

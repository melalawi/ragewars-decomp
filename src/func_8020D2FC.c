typedef struct func_8020D2FC_S1 func_8020D2FC_S1;
struct func_8020D2FC_S1 {
    char pad0[0x28];
    int unk28;
};

/** Set the word at byte offset 0x28 to the state value two. */
void func_8020D2FC(void *object) {
    ((func_8020D2FC_S1 *)(object))->unk28 = 2;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C36A4_4 = 0.699999988f;
const float unbake_rodata_800C36A8_4 = 0.699999988f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C8820_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C3810_4 = 1.0f;
const float unbake_rodata_800C3814_4 = 15.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C3848_4 = 1.0f;
const float unbake_rodata_800C384C_4 = 15.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C3730_4 = 1.0f;
#endif

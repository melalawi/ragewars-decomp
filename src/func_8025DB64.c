
extern float D_800C9108;
typedef struct func_8025DB64_S1 func_8025DB64_S1;
struct func_8025DB64_S1 {
    char pad0[0x38];
    int unk38;
    char pad38[0x40 - 0x38 - sizeof(int)];
    float unk40;
};

/** Clear offset 0x38 and initialize offset 0x40 from D_800C9108. */
void func_8025DB64(void *arg0) {
    ((func_8025DB64_S1 *)(arg0))->unk40 = D_800C9108;
    ((func_8025DB64_S1 *)(arg0))->unk38 = 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C3F48_4 = 1.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C9108_4 = 1.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C42C8_4 = 1.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C4308_4 = 1.0f;
#elif defined(VERSION_DE)
const float unbake_rodata_800C4018_4 = 1.0f;
#endif

extern void func_80214178(void *a, void *b, int c);

typedef struct func_80203AB0_S1 func_80203AB0_S1;
struct func_80203AB0_S1 {
    char pad0[0xCB];
    char unkCB;
};

void func_80203AB0(void *a, void *b) {
    if (((func_80203AB0_S1 *)(b))->unkCB != 0) {
        func_80214178(a, b, 0x3E);
    }
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C19A4_4 = 8.5f;
const float unbake_rodata_800C19A8_4 = 255.0f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800C6B64_4 = 8.5f;
const float unbake_rodata_800C6B68_4 = 255.0f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C1D0C_4 = 4.0f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C1D4C_4 = 4.0f;
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800C1A58_14[] = {0x00204218U, 0x00204220U, 0x00204228U, 0x00204230U, 0x00204238U};
#endif

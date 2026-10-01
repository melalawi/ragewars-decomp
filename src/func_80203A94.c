typedef struct func_80203A94_S1 func_80203A94_S1;
struct func_80203A94_S1 {
    char pad0[0x18];
    char* unk18;
};

/** Return the nested record's field, or a fallback constant when zero. */
int func_80203A94(void *arg0) {
    int temp = *(int *)(((func_80203A94_S1 *)(arg0))->unk18 + 0x1C);
    if (temp != 0) {
        return temp;
    }
    return 0x2F44;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800C1988_14[] = {0x00204218U, 0x00204220U, 0x00204228U, 0x00204230U, 0x00204238U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800C6B48_14[] = {0x00204218U, 0x00204220U, 0x00204228U, 0x00204230U, 0x00204238U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800C1CF8_14[] = {0x0020421CU, 0x00204224U, 0x0020422CU, 0x00204234U, 0x0020423CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800C1D38_14[] = {0x0020421CU, 0x00204224U, 0x0020422CU, 0x00204234U, 0x0020423CU};
#elif defined(VERSION_DE)
const float unbake_rodata_800C1A50_4 = 122.879997f;
#endif

typedef struct func_8024E768_S1 func_8024E768_S1;
struct func_8024E768_S1 {
    char pad0[0x38];
    unsigned int unk38;
};

/** Return the low three mode bits when the record type is one. */
int func_8024E768(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_8024E768_S1 *)(arg0))->unk38 & 7;
    }
    return 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800FE204_3[] = {0x27, 0xC2, 0x00};
#endif

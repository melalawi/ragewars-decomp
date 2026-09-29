typedef struct func_8024E600_S1 func_8024E600_S1;
struct func_8024E600_S1 {
    char pad0[0x34];
    int unk34;
};

/** Return offset 0x34 only when the type byte at offset 0 is 1. */
int func_8024E600(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_8024E600_S1 *)(arg0))->unk34;
    }
    return 0;
}

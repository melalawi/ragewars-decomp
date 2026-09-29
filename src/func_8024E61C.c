typedef struct func_8024E61C_S1 func_8024E61C_S1;
struct func_8024E61C_S1 {
    char pad0[0x38];
    unsigned int unk38;
};

/** Return the low three mode bits when the record type is one. */
int func_8024E61C(void *arg0) {
    if (*(unsigned char *)arg0 == 1) {
        return ((func_8024E61C_S1 *)(arg0))->unk38 & 7;
    }
    return 0;
}

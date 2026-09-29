typedef struct func_802B6958_S1 func_802B6958_S1;
struct func_802B6958_S1 {
    char pad0[0x24];
    int unk24;
};

/** Clamp (record - arg1) at a lower bound of 0x3E8 for negative results. */
int func_802B6958(void *arg0, int arg1) {
    int v = ((func_802B6958_S1 *)(arg0))->unk24 - arg1;
    if (v >= 0) {
        return v;
    }
    return 0x3E8;
}

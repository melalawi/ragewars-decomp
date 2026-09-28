/** Clamp (record - arg1) at a lower bound of 0x3E8 for negative results. */
int func_802B6958(void *arg0, int arg1) {
    int v = *(int *)((char *)arg0 + 0x24) - arg1;
    if (v >= 0) {
        return v;
    }
    return 0x3E8;
}

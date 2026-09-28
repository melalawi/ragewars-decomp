extern int D_800D0910;

/** Advance the wrapping counter D_800D0910, resetting to 0x380000 at 0x3FFFFF. */
int func_80250B98(void) {
    int temp_v0;

    temp_v0 = D_800D0910 + 1;
    D_800D0910 = temp_v0;
    if (temp_v0 == 0x3FFFFF) {
        D_800D0910 = 0x380000;
    }
    return D_800D0910;
}

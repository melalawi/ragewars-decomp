extern void *D_800D80A0;

void *func_802B8CC8(void) {
    void *temp_v0;
    void *var_v1;

    temp_v0 = *(void **)((char *)D_800D80A0 + 0x2C);
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = temp_v0;
        *(void **)((char *)D_800D80A0 + 0x2C) = *(void **)var_v1;
        *(void **)var_v1 = 0;
    }
    return var_v1;
}

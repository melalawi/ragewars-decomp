typedef struct func_802B8CC8_S1 func_802B8CC8_S1;
struct func_802B8CC8_S1 {
    char pad0[0x2C];
    void* unk2C;
};

extern func_802B8CC8_S1 *D_800D80A0;

void *func_802B8CC8(void) {
    void *temp_v0;
    void *var_v1;

    temp_v0 = D_800D80A0->unk2C;
    var_v1 = 0;
    if (temp_v0 != 0) {
        var_v1 = temp_v0;
        D_800D80A0->unk2C = *(void **)var_v1;
        *(void **)var_v1 = 0;
    }
    return var_v1;
}

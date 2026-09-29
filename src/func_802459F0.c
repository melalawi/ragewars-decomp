typedef struct func_802459F0_S1 func_802459F0_S1;
struct func_802459F0_S1 {
    char pad0[0x100];
    float unk100;
};

extern func_802459F0_S1 *D_800E2830;
void func_802459F0(float arg0) {
    D_800E2830->unk100 = arg0;
}

typedef struct func_802458E8_S1 func_802458E8_S1;
struct func_802458E8_S1 {
    char pad0[0x3C];
    int unk3C;
};

extern func_802458E8_S1 *D_800E2830;
void func_802458E8(void) {
    D_800E2830->unk3C = 0;
}

typedef struct func_80245AB8_S1 func_80245AB8_S1;
struct func_80245AB8_S1 {
    char pad0[0x1E0];
    int unk1E0;
};

extern func_80245AB8_S1 *D_800E2830;
void func_80245AB8(void) {
    D_800E2830->unk1E0 = 0;
}

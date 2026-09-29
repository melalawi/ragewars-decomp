typedef struct func_80245A10_S1 func_80245A10_S1;
struct func_80245A10_S1 {
    char pad0[0x104];
    int unk104;
};

extern func_80245A10_S1 *D_800E2830;
void func_80245A10(int arg0) {
    D_800E2830->unk104 = arg0;
}

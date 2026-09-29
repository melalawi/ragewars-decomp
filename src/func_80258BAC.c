typedef struct func_80258BAC_S1 func_80258BAC_S1;
struct func_80258BAC_S1 {
    char pad0[0x2BA0];
    int unk2BA0;
};

void func_80258BAC(void *arg0, int arg1) {
    ((func_80258BAC_S1 *)(arg0))->unk2BA0 = arg1;
}

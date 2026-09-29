typedef struct func_8024575C_S1 func_8024575C_S1;
struct func_8024575C_S1 {
    char pad0[0xDC];
    int unkDC;
};

extern func_8024575C_S1 *D_800E2830;
int func_8024575C(void) {
    return D_800E2830->unkDC != -1;
}

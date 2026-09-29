typedef struct func_8020D280_S1 func_8020D280_S1;
struct func_8020D280_S1 {
    char pad0[0x28];
    int unk28;
};

int func_8020D280(void *arg0) {
    ((func_8020D280_S1 *)(arg0))->unk28 = 1;
    return 1;
}

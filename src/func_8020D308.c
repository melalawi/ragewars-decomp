typedef struct func_8020D308_S1 func_8020D308_S1;
struct func_8020D308_S1 {
    char pad0[0x28];
    int unk28;
};

int func_8020D308(void *arg0) {
    return ((func_8020D308_S1 *)(arg0))->unk28 == 1;
}

typedef struct func_80259B10_S1 func_80259B10_S1;
typedef struct func_80259B10_S2 func_80259B10_S2;
struct func_80259B10_S1 {
    char pad0[0x4];
    void* unk4;
};
struct func_80259B10_S2 {
    char pad0[0x4];
    void* unk4;
};

void func_80259B10(void **arg0, void *arg1) {
    *(void **)arg1 = *arg0;
    ((func_80259B10_S1 *)(arg1))->unk4 = arg0;
    ((func_80259B10_S2 *)((*arg0)))->unk4 = arg1;
    *arg0 = arg1;
}

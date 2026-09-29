typedef struct func_80253294_S1 func_80253294_S1;
struct func_80253294_S1 {
    char pad0[0xC];
    int unkC;
};

int func_80253294(void *arg0) {
    return ((func_80253294_S1 *)(arg0))->unkC & 0x100;
}

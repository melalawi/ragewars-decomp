typedef struct func_802B7198_S1 func_802B7198_S1;
struct func_802B7198_S1 {
    char pad0[0xC];
    int unkC;
};

int func_802B7198(void *arg0) {
    return ((func_802B7198_S1 *)(arg0))->unkC;
}

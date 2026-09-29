typedef struct func_8022F330_S1 func_8022F330_S1;
struct func_8022F330_S1 {
    char pad0[0x15];
    unsigned char unk15;
};

int func_8022F330(void *arg0) {
    int v = ((func_8022F330_S1 *)(arg0))->unk15 + 0x32;
    ((func_8022F330_S1 *)(arg0))->unk15 = (unsigned char)v;
    return v;
}

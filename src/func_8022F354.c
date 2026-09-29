typedef struct func_8022F354_S1 func_8022F354_S1;
struct func_8022F354_S1 {
    char pad0[0x16];
    unsigned char unk16;
};

int func_8022F354(void *arg0) {
    int v = ((func_8022F354_S1 *)(arg0))->unk16 + 0x32;
    ((func_8022F354_S1 *)(arg0))->unk16 = (unsigned char)v;
    return v;
}

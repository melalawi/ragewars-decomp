typedef struct func_8022F340_S1 func_8022F340_S1;
struct func_8022F340_S1 {
    char pad0[0x15];
    unsigned char unk15;
};

unsigned char func_8022F340(void *arg0) {
    return ((func_8022F340_S1 *)(arg0))->unk15;
}

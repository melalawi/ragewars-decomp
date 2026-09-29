typedef struct func_8022C444_S1 func_8022C444_S1;
typedef struct func_8022C444_S2 func_8022C444_S2;
struct func_8022C444_S1 {
    char pad0[0x5D8];
    void* unk5D8;
};
struct func_8022C444_S2 {
    char pad0[0x90];
    char unk90;
};

void *func_8022C444(void *arg0) {
    void *p = ((func_8022C444_S1 *)(arg0))->unk5D8;
    ((func_8022C444_S2 *)(p))->unk90 = 0;
    return p;
}

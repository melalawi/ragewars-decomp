extern char D_800CD5D0;
extern char D_204C34;

typedef struct func_80204BB4_S1 func_80204BB4_S1;
struct func_80204BB4_S1 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void* unk108;
};

void func_80204BB4(void *arg0, void *arg1) {
    ((func_80204BB4_S1 *)(arg1))->unk2C = &D_800CD5D0;
    ((func_80204BB4_S1 *)(arg1))->unk108 = &D_204C34;
}

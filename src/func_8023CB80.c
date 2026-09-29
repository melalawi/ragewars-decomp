typedef struct func_8023CB80_S1 func_8023CB80_S1;
typedef struct func_8023CB80_S2 func_8023CB80_S2;
typedef struct func_8023CB80_S3 func_8023CB80_S3;
struct func_8023CB80_S1 {
    char pad0[0x4];
    void* unk4;
};
struct func_8023CB80_S2 {
    char pad0[0x4];
    void* unk4;
};
struct func_8023CB80_S3 {
    char pad0[0x4];
    void* unk4;
};

void func_8023CB80(void *arg0, void *arg1) {
    void *temp_v0;

    ((func_8023CB80_S1 *)(arg1))->unk4 = 0;
    *(void **)arg1 = *(void **)arg0;
    temp_v0 = *(void **)arg0;
    if (temp_v0 != 0) {
        ((func_8023CB80_S2 *)(temp_v0))->unk4 = arg1;
    }
    *(void **)arg0 = arg1;
    if (((func_8023CB80_S3 *)(arg0))->unk4 == 0) {
        ((func_8023CB80_S3 *)(arg0))->unk4 = arg1;
    }
}

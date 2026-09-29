typedef struct func_8023CB50_S1 func_8023CB50_S1;
typedef struct func_8023CB50_S2 func_8023CB50_S2;
struct func_8023CB50_S1 {
    char pad0[0x4];
    void* unk4;
};
struct func_8023CB50_S2 {
    char pad0[0x4];
    void* unk4;
};

void func_8023CB50(void *arg0, void *arg1) {
    void *temp_v0;

    *(void **)arg1 = 0;
    ((func_8023CB50_S1 *)(arg1))->unk4 = ((func_8023CB50_S2 *)(arg0))->unk4;
    temp_v0 = ((func_8023CB50_S2 *)(arg0))->unk4;
    if (temp_v0 != 0) {
        *(void **)temp_v0 = arg1;
    }
    ((func_8023CB50_S2 *)(arg0))->unk4 = arg1;
    if (*(void **)arg0 == 0) {
        *(void **)arg0 = arg1;
    }
}

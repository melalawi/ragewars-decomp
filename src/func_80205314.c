typedef struct func_80205314_S1 func_80205314_S1;
typedef struct func_80205314_S2 func_80205314_S2;
struct func_80205314_S1 {
    char pad0[0x18];
    void* unk18;
};
struct func_80205314_S2 {
    char pad0[0x2C];
    int unk2C;
};

int func_80205314(void *arg0) {
    return ((func_80205314_S2 *)((((func_80205314_S1 *)(arg0))->unk18)))->unk2C;
}

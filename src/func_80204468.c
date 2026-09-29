extern char D_800CD4C4;
extern char D_2043E0;

typedef struct func_80204468_S1 func_80204468_S1;
typedef struct func_80204468_S2 func_80204468_S2;
typedef struct func_80204468_S3 func_80204468_S3;
struct func_80204468_S1 {
    char pad0[0x2C];
    void* unk2C;
    char pad2C[0x108 - 0x2C - sizeof(void*)];
    void* unk108;
    char pad108[0x124 - 0x108 - sizeof(void*)];
    int unk124;
    char pad124[0x128 - 0x124 - sizeof(int)];
    int unk128;
    char pad128[0x12C - 0x128 - sizeof(int)];
    int unk12C;
};
struct func_80204468_S2 {
    char pad0[0x18];
    void* unk18;
    char pad18[0x100 - 0x18 - sizeof(void*)];
    int unk100;
};
struct func_80204468_S3 {
    char pad0[0x14];
    int unk14;
};

void func_80204468(void *arg0, void *arg1) {
    ((func_80204468_S1 *)(arg1))->unk2C = &D_800CD4C4;
    ((func_80204468_S1 *)(arg1))->unk108 = &D_2043E0;
    ((func_80204468_S1 *)(arg1))->unk124 = 0;
    ((func_80204468_S1 *)(arg1))->unk128 = 0;
    ((func_80204468_S1 *)(arg1))->unk12C = 0;
    if (((func_80204468_S3 *)((((func_80204468_S2 *)(arg0))->unk18)))->unk14 & 1) {
        ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 | 0x10000;
        return;
    }
    ((func_80204468_S2 *)(arg0))->unk100 = ((func_80204468_S2 *)(arg0))->unk100 & 0xFFFEFFFF;
}

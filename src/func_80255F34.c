typedef struct func_80255F34_S1 func_80255F34_S1;
typedef union func_80255F34_S1_U4 { char* v0; int v1; } func_80255F34_S1_U4;
struct func_80255F34_S1 {
    char pad0[0x4];
    func_80255F34_S1_U4 unk4;
    char pad4[0x8 - 0x4 - sizeof(func_80255F34_S1_U4)];
    int unk8;
    char pad8[0x10 - 0x8 - sizeof(int)];
    int unk10;
};

/** Advance the cursor by its stride and decrement its remaining count. */
void func_80255F34(void *arg0) {
    char *cursor = ((func_80255F34_S1 *)(arg0))->unk4.v0;
    int stride = ((func_80255F34_S1 *)(arg0))->unk8;
    int value = *(int *)(cursor + stride);
    int count = ((func_80255F34_S1 *)(arg0))->unk10 - 1;
    ((func_80255F34_S1 *)(arg0))->unk10 = count;
    ((func_80255F34_S1 *)(arg0))->unk4.v1 = value;
}

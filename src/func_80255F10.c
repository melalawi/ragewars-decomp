typedef struct func_80255F10_S1 func_80255F10_S1;
struct func_80255F10_S1 {
    char pad0[0xC];
    int unkC;
    char padC[0x10 - 0xC - sizeof(int)];
    int unk10;
};

/** Advance the cursor by its stride and decrement its remaining count. */
void func_80255F10(void *arg0) {
    char *cursor = *(char **)arg0;
    int stride = ((func_80255F10_S1 *)(arg0))->unkC;
    int value = *(int *)(cursor + stride);
    int count = ((func_80255F10_S1 *)(arg0))->unk10 - 1;
    ((func_80255F10_S1 *)(arg0))->unk10 = count;
    *(int *)arg0 = value;
}

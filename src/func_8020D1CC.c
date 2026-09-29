typedef struct func_8020D1CC_S1 func_8020D1CC_S1;
struct func_8020D1CC_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0x10 - 0x4 - sizeof(int)];
    char* unk10;
};

/** Look up a byte in a strided grid addressed via a base-record pointer. */
unsigned char func_8020D1CC(void *arg0, int arg1, int arg2) {
    int stride = ((func_8020D1CC_S1 *)(arg0))->unk4;
    char *base = ((func_8020D1CC_S1 *)(arg0))->unk10;
    int span = *(int *)base;
    int index = (arg1 * stride + arg2) * span;
    return *(unsigned char *)(index + (int)base + 8);
}

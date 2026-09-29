typedef struct func_8020C9B0_S1 func_8020C9B0_S1;
struct func_8020C9B0_S1 {
    char pad0[0x8];
    char* unk8;
};

/** Return an indexed record from the table at object offset 0x8. */
void *func_8020C9B0(void *object, int index) {
    char *base = ((func_8020C9B0_S1 *)(object))->unk8;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

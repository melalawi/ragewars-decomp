typedef struct func_8028AFE8_S1 func_8028AFE8_S1;
struct func_8028AFE8_S1 {
    char pad0[0xA0];
    char* unkA0;
};

/** Return an indexed record from the table at object offset 0xA0. */
void *func_8028AFE8(void *object, int index) {
    char *base = ((func_8028AFE8_S1 *)(object))->unkA0;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

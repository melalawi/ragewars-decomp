typedef struct func_8028CE54_S1 func_8028CE54_S1;
struct func_8028CE54_S1 {
    char pad0[0xA4];
    char* unkA4;
};

/** Return an indexed record from the table at object offset 0xA4. */
void *func_8028CE54(void *object, int index) {
    char *base = ((func_8028CE54_S1 *)(object))->unkA4;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

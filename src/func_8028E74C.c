typedef struct func_8028E74C_S1 func_8028E74C_S1;
struct func_8028E74C_S1 {
    char pad0[0xAC];
    char* unkAC;
};

/** Return an indexed record from the table at object offset 0xAC. */
void *func_8028E74C(void *object, int index) {
    char *base = ((func_8028E74C_S1 *)(object))->unkAC;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

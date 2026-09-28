/** Look up a byte in a strided grid addressed via a base-record pointer. */
unsigned char func_8020D1CC(void *arg0, int arg1, int arg2) {
    int stride = *(int *)((char *)arg0 + 4);
    char *base = *(char **)((char *)arg0 + 0x10);
    int span = *(int *)base;
    int index = (arg1 * stride + arg2) * span;
    return *(unsigned char *)(index + (int)base + 8);
}

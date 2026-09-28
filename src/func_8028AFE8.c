/** Return an indexed record from the table at object offset 0xA0. */
void *func_8028AFE8(void *object, int index) {
    char *base = *(char **)((char *)object + 0xA0);
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

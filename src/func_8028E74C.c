/** Return an indexed record from the table at object offset 0xAC. */
void *func_8028E74C(void *object, int index) {
    char *base = *(char **)((char *)object + 0xAC);
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

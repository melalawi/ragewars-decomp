/** Return an indexed record from the table at object offset 0x8. */
void *func_8020C9B0(void *object, int index) {
    char *base = *(char **)((char *)object + 0x8);
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

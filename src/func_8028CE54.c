/** Return an indexed record from the table at object offset 0xA4. */
void *func_8028CE54(void *object, int index) {
    char *base = *(char **)((char *)object + 0xA4);
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

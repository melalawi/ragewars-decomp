/** Return an indexed record from the table referenced by the input. */
void *func_8020C994(void *table, int index) {
    char *base = *(char **)table;
    int stride = *(int *)base;
    return base + (index * stride + 8);
}

/** Advance the cursor by its stride and decrement its remaining count. */
void func_80255F10(void *arg0) {
    char *cursor = *(char **)arg0;
    int stride = *(int *)((char *)arg0 + 0xC);
    int value = *(int *)(cursor + stride);
    int count = *(int *)((char *)arg0 + 0x10) - 1;
    *(int *)((char *)arg0 + 0x10) = count;
    *(int *)arg0 = value;
}

/** Advance the cursor by its stride and decrement its remaining count. */
void func_80255F34(void *arg0) {
    char *cursor = *(char **)((char *)arg0 + 0x4);
    int stride = *(int *)((char *)arg0 + 0x8);
    int value = *(int *)(cursor + stride);
    int count = *(int *)((char *)arg0 + 0x10) - 1;
    *(int *)((char *)arg0 + 0x10) = count;
    *(int *)((char *)arg0 + 0x4) = value;
}

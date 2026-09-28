/** Copy four scalar fields from the source into output pointers. */
void func_80290A28(void *source, int *word, float *third, float *fourth, float *second) {
    *word = *(int *)((char *)source + 0x20);
    *second = *(float *)((char *)source + 0x10);
    *third = *(float *)((char *)source + 8);
    *fourth = *(float *)((char *)source + 0xC);
}

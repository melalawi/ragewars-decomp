/** Initialize the compact state record to its default values. */
void func_80219460(void *record) {
    *(int *)((char *)record + 4) = 1;
    *(int *)record = 0;
    *(short *)((char *)record + 0xC) = 0;
    *((signed char *)record + 0xE) = 0;
    *((signed char *)record + 0x12) = -1;
}

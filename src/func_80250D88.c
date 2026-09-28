/** Select one of two signed bytes according to a doubled nested count. */
int func_80250D88(void *object) {
    void *nested = *(void **)((char *)object + 0x18);
    if (*(unsigned int *)((char *)object + 0xDC) <
        *(unsigned int *)((char *)nested + 0x24) * 2) {
        return *(signed char *)((char *)nested + 0xE);
    }
    return *(signed char *)((char *)nested + 0xF);
}

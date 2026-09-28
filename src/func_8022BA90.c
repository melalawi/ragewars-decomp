/** Report whether the nested pointer's word at 0x564 is nonzero. */
int func_8022BA90(void *object) {
    void *nested = *(void **)((char *)object + 0x5DC);
    if (nested != 0) {
        return *(int *)((char *)nested + 0x564) != 0;
    }
    return 0;
}

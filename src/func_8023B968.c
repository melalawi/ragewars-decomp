/** Compare two records by the float at nested offset 0x210. */
int func_8023B968(void *first, void *second) {
    void *left = *(void **)first;
    void *right = *(void **)second;
    int result = 1;
    if (*(float *)((char *)left + 0x210) <
        *(float *)((char *)right + 0x210)) {
        result = -1;
    }
    return result;
}

/** Order two records by their scalar at offset four. */
int func_80240628(void *left, void *right) {
    return *(float *)((char *)left + 4) < *(float *)((char *)right + 4) ? -1 : 1;
}

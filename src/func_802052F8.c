/** Return the nested record's field, or a fallback constant when zero. */
int func_802052F8(void *arg0) {
    int temp = *(int *)(*(char **)((char *)arg0 + 0x18) + 0x24);
    if (temp != 0) {
        return temp;
    }
    return 0x5334;
}

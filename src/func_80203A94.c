/** Return the nested record's field, or a fallback constant when zero. */
int func_80203A94(void *arg0) {
    int temp = *(int *)(*(char **)((char *)arg0 + 0x18) + 0x1C);
    if (temp != 0) {
        return temp;
    }
    return 0x2F44;
}

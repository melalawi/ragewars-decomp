/** Return the word at offset 0x40 through the pointer stored at offset 0x18. */
int func_802054D0(void *object) {
    return *(int *)(*(char **)((char *)object + 0x18) + 0x40);
}

/** Read the object word at offset 0x2C. */
int func_802B3B70(void *object) {
    return *(int *)((char *)object + 0x2C);
}

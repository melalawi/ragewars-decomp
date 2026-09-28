/** Return the word at offset 0x58 in the supplied object. */
int func_802A2B18(void *object) {
    return *(int *)((char *)object + 0x58);
}

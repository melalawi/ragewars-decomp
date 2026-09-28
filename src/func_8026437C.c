/** Report whether flag 0x1000 is set in the word at offset 0xB4. */
int func_8026437C(void *object) {
    int flags = *(int *)((char *)object + 0xB4) & 0x1000;
    return flags != 0;
}

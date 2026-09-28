/** Store the second argument at byte offset 0x2BA8 in the first argument. */
void func_80258BDC(void *object, int value) {
    *(int *)((char *)object + 0x2BA8) = value;
}

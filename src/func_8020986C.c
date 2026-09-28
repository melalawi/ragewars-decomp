/** Store the second argument at byte offset 0x214 in the first argument. */
void func_8020986C(void *object, int value) {
    *(int *)((char *)object + 0x214) = value;
}

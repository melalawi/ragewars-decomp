/** Store a word at offset 0x2c. */
void func_8040F290(void *object, int value) {
    *(int *)((char *)object + 0x2C) = value;
}

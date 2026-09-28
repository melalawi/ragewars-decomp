/** Set the fixed flags on the supplied object and word. */
void func_80207FC4(char *object, unsigned int *flags) {
    *flags |= 0x20000;
    *(unsigned int *)(object + 0x100) |= 0x2100;
}

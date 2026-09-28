/** Set flag 0x10000 in the word at offset 0x100. */
void func_80279260(void *object) {
    *(unsigned int *)((char *)object + 0x100) |= 0x10000;
}

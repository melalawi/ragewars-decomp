/** Set flags 0x2100 in the word at offset 0x100. */
void func_80207F90(void *arg0) {
    *(unsigned int *)((char *)arg0 + 0x100) |= 0x2100;
}

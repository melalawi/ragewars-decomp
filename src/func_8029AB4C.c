extern void *D_8014D080;

/** Return the word at offset 0x14 of the current global object. */
unsigned int func_8029AB4C(void) {
    return *(unsigned int *)((char *)D_8014D080 + 0x14);
}

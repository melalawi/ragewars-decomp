extern void *D_8014D080;

/** Return one greater than the current object's word at offset four. */
unsigned int func_8029A9E0(void) {
    return *(unsigned int *)((char *)D_8014D080 + 4) + 1;
}

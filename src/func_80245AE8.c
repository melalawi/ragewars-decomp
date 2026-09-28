extern void *D_800E2830;

/** Return the word at offset 0xB0 of the current global object. */
unsigned int func_80245AE8(void) {
    return *(unsigned int *)((char *)D_800E2830 + 0xB0);
}

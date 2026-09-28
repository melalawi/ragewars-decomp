extern void *D_800E2830;

/** Return the word at offset 0x3C of the current global object. */
unsigned int func_80245840(void) {
    return *(unsigned int *)((char *)D_800E2830 + 0x3C);
}

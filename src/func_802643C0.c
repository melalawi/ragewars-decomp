/** Report whether any selected status bit is set. */
int func_802643C0(void *object) {
    return (*(unsigned int *)((char *)object + 0xC0) & 0x40101) != 0;
}

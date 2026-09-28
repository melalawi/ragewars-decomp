/** Report whether either low bit of the VI current register is set. */
int func_802BEE60(void) {
    return (*(volatile unsigned int *)0xA4800018 & 3) != 0;
}

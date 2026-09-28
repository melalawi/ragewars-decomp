/** Read the SP status register. */
unsigned int func_802BF280(void) {
    return *(volatile unsigned int *)0xA4040010;
}

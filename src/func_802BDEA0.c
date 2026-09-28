/** Read the PI status register at 0xA4600010. */
unsigned int func_802BDEA0(void) {
    return *(volatile unsigned int *)0xA4600010;
}

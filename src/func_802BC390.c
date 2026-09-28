/** Read the hardware register at 0xA450000C. */
unsigned int func_802BC390(void) {
    return *(volatile unsigned int *)0xA450000C;
}

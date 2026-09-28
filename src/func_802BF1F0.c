/** Write a word to the SP status register. */
void func_802BF1F0(unsigned int arg0) {
    *(volatile unsigned int *)0xA4040010 = arg0;
}

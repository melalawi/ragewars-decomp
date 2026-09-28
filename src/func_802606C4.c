/** Repack the low address bits while retaining the high nibble. */
unsigned int func_802606C4(unsigned int arg0) {
    return (arg0 & 0xF0000000) | ((arg0 & 0x0FFFFFE0) >> 3);
}

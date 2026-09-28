/** Preserve the top nibble and shift the lower 28 bits right by three. */
unsigned int func_802606A4(unsigned int value) {
    return (value & 0xF0000000) | ((value & 0x0FFFFFFF) >> 3);
}

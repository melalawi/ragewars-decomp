/** Store the low byte of the third argument in an indexed 0x30-byte record. */
void func_802B7FA0(void *object, short index, unsigned char value) {
    *(short *)((char *)*(void **)((char *)object + 0x40) + index * 0x30 + 0x20) = value;
}

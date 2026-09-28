/** Store the supplied halfword at offset 0x16. */
void func_802B8540(void *unused, void *object, unsigned short value) {
    *(unsigned short *)((char *)object + 0x16) = value;
}

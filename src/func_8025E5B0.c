/** Return the signed halfword at offset 0x14 in the supplied object. */
int func_8025E5B0(void *object) {
    return *(short *)((char *)object + 0x14);
}

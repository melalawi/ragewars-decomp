/** Return the signed halfword stored at offset 0x10. */
int func_8025E58C(void *object) {
    return *(short *)((char *)object + 0x10);
}

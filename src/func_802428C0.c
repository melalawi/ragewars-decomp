/** Set flag 8 in the first object and flag 0x10 in the second. */
void func_802428C0(void *first, void *second) {
    *(unsigned int *)((char *)first + 0x3C) |= 8;
    *(unsigned int *)((char *)second + 0x38) |= 0x10;
}

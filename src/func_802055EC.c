/** Clear two flags when the controlling byte and nested flag are set. */
void func_802055EC(void *arg0, void *arg1) {
    char *nested = *(char **)((char *)arg0 + 0x18);
    if (*(signed char *)((char *)arg1 + 0xCB) != 0 &&
        (*(unsigned int *)(nested + 0x14) & 0x20) != 0) {
        unsigned int flags = *(unsigned int *)((char *)arg0 + 0x100);
        flags &= ~0x2000;
        flags &= ~0x100;
        *(unsigned int *)((char *)arg0 + 0x100) = flags;
    }
}

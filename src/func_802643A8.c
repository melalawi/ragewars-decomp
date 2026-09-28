/** Report whether any of the selected object flag bytes are set. */
int func_802643A8(void *object) {
    return (*(unsigned int *)((char *)object + 0xC0) & 0x20202) != 0;
}

/** Return the object's 0x200 status bit. */
unsigned int func_80205700(void *object) {
    return *(unsigned int *)((char *)object + 0xC) & 0x200;
}

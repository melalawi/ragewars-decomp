/** Return the first word of the object referenced at offset 0x10. */
unsigned int func_802604BC(void *object) {
    return **(unsigned int **)((char *)object + 0x10);
}

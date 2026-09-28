/** Read the signed byte at offset 0xE from the object's linked record. */
signed char func_80250A34(void *object) {
    void *linked = *(void **)((char *)object + 0x18);
    return ((signed char *)linked)[0xE];
}

/** Store the supplied byte at offset 0x16. */
void func_8022F34C(void *object, unsigned char value) {
    *(unsigned char *)((char *)object + 0x16) = value;
}

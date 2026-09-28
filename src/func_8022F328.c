/** Store a byte in the object field at offset 0x15. */
void func_8022F328(void *object, unsigned char value) {
    ((unsigned char *)object)[0x15] = value;
}

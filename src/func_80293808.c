/** Set the state byte and linked value in a large object. */
void func_80293808(void *object, int value) {
    *((unsigned char *)object + 0x26DC1) = 2;
    *(int *)((char *)object + 0x26DBC) = value;
}

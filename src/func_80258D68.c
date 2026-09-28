/** Store a word in the object field at offset 0x2BB8. */
void func_80258D68(void *object, int value) {
    *(int *)((char *)object + 0x2BB8) = value;
}

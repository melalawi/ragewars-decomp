/** Store a value in the field at offset 0x44. */
void func_802AB784(char *object, int value) {
    *(int *)(object + 0x44) = value;
}

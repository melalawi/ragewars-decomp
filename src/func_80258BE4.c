/** Return the indexed twelve-byte record from the table at offset 0x2B70. */
char *func_80258BE4(char *object, int index) {
    return *(char **)(object + 0x2B70) + index * 12;
}

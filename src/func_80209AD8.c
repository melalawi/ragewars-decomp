/** Report whether the state word at offset 0x21C equals eight. */
int func_80209AD8(char *object) {
    return *(int *)(object + 0x21C) == 8;
}

/** Return bit two of the nested state word. */
unsigned int func_8024E28C(char *object) {
    return (*(unsigned int *)(*(char **)(object + 0x18) + 4) >> 2) & 1;
}

/** Return the nested signed byte unless flag 0x40 suppresses it. */
int func_80250A0C(char *object) {
    if (*(unsigned short *)(object + 0xD8) & 0x40) {
        return 0;
    }
    return *(signed char *)(*(char **)(object + 0x18) + 0x12);
}

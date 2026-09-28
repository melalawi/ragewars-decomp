int func_802A2E20(char *object) {
    char *record = *(char **)(object + 8);
    *(int *)(object + 0x5C) = 2;
    *(int *)(object + 0x48) = 0;
    while (record != 0) {
        if (*(unsigned short *)(record + 0xE) != 8) {
            *(unsigned char *)(record + 0x10) = 200;
        }
        record = *(char **)(record + 4);
    }
    return 0;
}

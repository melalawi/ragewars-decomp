/** Find the first linked record whose nested flags include either type marker. */
void *func_8022A82C(char *object) {
    char *record = *(char **)(object + 0x20);
    while (record != 0) {
        char *nested = *(char **)(record + 0x5D8);
        if (*(unsigned char *)(nested + 0x8F) == 1 ||
            *(unsigned char *)(nested + 0x90) == 1) {
            return record;
        }
        record = *(char **)(record + 0x16E0);
    }
    return record;
}

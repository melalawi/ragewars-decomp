extern char D_8014AEB0;

/** Reset the record's fields, marking slot 1 active. */
void func_802958D8(void) {
    char *object = &D_8014AEB0;

    *(char *)(object + 0x0) = 0;
    *(char *)(object + 0x1) = 0;
    *(int *)(object + 0xC) = 0;
    *(int *)(object + 0x10) = 0;
    *(int *)(object + 0x8) = 1;
    *(int *)(object + 0x4) = 0;
    *(int *)(object + 0x14) = 0;
    *(int *)(object + 0x1C) = 0;
    *(int *)(object + 0x24) = 0;
    *(int *)(object + 0x28) = 0;
    *(int *)(object + 0x20) = 0;
    *(int *)(object + 0x212C) = 0;
    *(int *)(object + 0x2130) = 0;
    *(int *)(object + 0x2134) = 0;
    *(int *)(object + 0x21B8) = 0;
}

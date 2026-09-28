extern void *D_80103FCC;

/** Reset the selected fields of the current global record. */
void func_8023EE24(void) {
    char *record = (char *)D_80103FCC;
    *(unsigned int *)(record + 0x00) = 0;
    *(int *)(record + 0x14) = -1;
    *(unsigned int *)(record + 0x88) = 0;
    *(unsigned int *)(record + 0x9C) = 0;
    *(unsigned int *)(record + 0xB0) = 0;
    *(unsigned int *)(record + 0xB4) = 0;
    *(unsigned int *)(record + 0xC4) = 0;
}

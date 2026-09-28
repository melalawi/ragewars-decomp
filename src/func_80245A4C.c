extern void *D_800E2830;

/** Store four incoming words into the global record's tail fields. */
void func_80245A4C(int arg0, int arg1, int arg2, int arg3) {
    char *record = (char *)D_800E2830;
    *(int *)(record + 0x10C) = arg1;
    *(int *)(record + 0x108) = arg0;
    *(int *)(record + 0x110) = arg2;
    *(int *)(record + 0x114) = arg3;
}

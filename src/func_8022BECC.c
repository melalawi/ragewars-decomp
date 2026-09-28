extern void *D_800D052C[];

int func_8022BECC(void *arg0) {
    short index = *(short *)((char *)arg0 + 0x62E);
    return *(short *)((char *)D_800D052C[index] + 8) > 0;
}

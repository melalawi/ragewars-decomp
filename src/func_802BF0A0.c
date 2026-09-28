int func_802BF0A0(void) {
    int flag = *(volatile int *)0xA4040010 & 0x1C;
    return flag != 0;
}

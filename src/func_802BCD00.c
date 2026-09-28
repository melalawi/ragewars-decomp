int func_802BCD00(void) {
    int flag = *(volatile int *)0xA410000C & 0x100;
    return flag != 0;
}

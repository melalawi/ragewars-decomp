extern void func_80214178(void *a, void *b, int c);

void func_802061D8(void *a, void *b) {
    if (*((signed char *)b + 0xCB) != 0) {
        func_80214178(a, b, 0x0);
    }
}

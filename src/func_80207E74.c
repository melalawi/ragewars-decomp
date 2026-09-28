extern void func_80214178(void *a, void *b, int c);

void func_80207E74(void *arg0, int *arg1) {
    *(int *)((char *)arg0 + 0x100) |= 0x2100;
    *arg1 |= 0x20000;
    func_80214178(arg0, arg1, 3);
}

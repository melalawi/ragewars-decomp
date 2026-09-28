extern void func_8020FDB0(void *a, int b);

int func_80210018(void *arg0) {
    func_8020FDB0(arg0, *(int *)((char *)*(void **)arg0 + 0x18) + 0x8C);
    return 1;
}

extern void func_8020FDB0(void *a, int b);

int func_802100B8(void *arg0) {
    func_8020FDB0(arg0, *(int *)((char *)*(void **)arg0 + 0x18) + 0xAC);
    return 1;
}

extern void *D_800D80A0;

void func_802B8CF4(void *arg0) {
    void *head = D_800D80A0;
    *(void **)arg0 = *(void **)((char *)head + 0x2C);
    *(void **)((char *)head + 0x2C) = arg0;
}

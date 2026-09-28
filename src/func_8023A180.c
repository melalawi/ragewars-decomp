void *func_802533DC(int a, int b, int c, void *d);
void func_802A101C(int a, int b, int c);

extern int D_800C83CC;

void func_8023A180(void *arg0, int arg1) {
    void *ret;
    int scaled;
    int first;
    scaled = arg1 << 6;
    *(int *)((char *)arg0 + 0xF20) = arg1;
    ret = func_802533DC(0, scaled, 0x23, &D_800C83CC);
    *(void **)((char *)arg0 + 0xF18) = ret;
    first = *(int *)ret;
    *(int *)((char *)arg0 + 0xF1C) = first;
    func_802A101C(first, 0, scaled);
}

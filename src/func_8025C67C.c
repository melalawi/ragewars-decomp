void func_802B76A0(void *a, short b);

void func_8025C67C(void *arg0) {
    void *base;
    void *arrayBase;
    short *slot;
    base = *(void **)((char *)arg0 + 0xB0);
    arrayBase = (char *)base + 0x7C;
    slot = (short *)((char *)arrayBase + (*(int *)((char *)arg0 + 0x0)) * 2 + 0x60);
    func_802B76A0((char *)base + 0x84, *slot);
    slot = (short *)((char *)arrayBase + (*(int *)((char *)arg0 + 0x0)) * 2 + 0x60);
    *slot = -1;
    *(short *)((char *)arg0 + 0x38) = 0;
    *(int *)((char *)arg0 + 0xC) = -1;
    *(int *)((char *)arg0 + 0x8) = -1;
    *(int *)((char *)arg0 + 0xA8) = -1;
    *(short *)((char *)arg0 + 0x3A) = -1;
    *(int *)((char *)arg0 + 0xB4) = -1;
}

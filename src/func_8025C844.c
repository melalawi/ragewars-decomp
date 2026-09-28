void func_802B76A0(void *a, short b);

int func_8025C844(int arg0, short arg1) {
    void *base;
    void *arrayBase;
    short *slot;
    int entry;

    entry = arg1 * 0xCC;
    entry = entry + arg0;
    entry = entry + 4;
    base = *(void **)(entry + 0xB0);
    arrayBase = (char *)base + 0x7C;
    slot = (short *)((char *)arrayBase + (*(int *)(entry + 0x0)) * 2 + 0x60);
    func_802B76A0((char *)base + 0x84, *slot);
    slot = (short *)((char *)arrayBase + (*(int *)(entry + 0x0)) * 2 + 0x60);
    *slot = -1;
    *(short *)(entry + 0x38) = 0;
    *(int *)(entry + 0xC) = -1;
    *(int *)(entry + 0x8) = -1;
    *(int *)(entry + 0xA8) = -1;
    *(short *)(entry + 0x3A) = -1;
    *(int *)(entry + 0xB4) = -1;
    return 0;
}

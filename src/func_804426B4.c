extern void func_80255C40(void *, int, int);

void func_804426B4(void *object) {
    func_80255C40(object, 0x1D0, 0x1D4);
    *(short *)((char *)object + 0x14) = 0;
}

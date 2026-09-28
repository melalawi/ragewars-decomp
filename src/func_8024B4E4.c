typedef void (*FuncPtr)(void *, void *);

extern void func_8026EE90(void *arg0, int arg1, void *arg2);

void func_8024B4E4(void *arg0, int arg1) {
    FuncPtr fn = *(FuncPtr *)((char *)arg0 + 0x28C);
    fn(arg0, (char *)arg0 + 0x170);
    func_8026EE90((char *)arg0 + 0x74, arg1, (char *)arg0 + 0xE8);
}

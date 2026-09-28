typedef void (*FuncPtr)(void);

void func_802171FC(void *arg0, void *arg1) {
    FuncPtr fn = *(FuncPtr *)((char *)arg1 + 0x110);
    if (fn != 0) {
        fn();
    }
}

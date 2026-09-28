typedef void (*FuncPtr)(void);

void func_802052C4(void *arg0, void *arg1) {
    void *obj = *(void **)((char *)arg1 + 0x30);
    if (obj != 0) {
        FuncPtr fn = *(FuncPtr *)((char *)obj + 8);
        if (fn != 0) {
            fn();
        }
    }
}

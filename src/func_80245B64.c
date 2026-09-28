typedef void (*FuncPtr)(void);

extern void *D_800E2830;

void func_80245B64(void) {
    void *record;
    FuncPtr fn;

    record = D_800E2830;
    if (*(int *)((char *)record + 0x44) == 0) {
        fn = *(FuncPtr *)((char *)record + 0x10);
        if (fn != 0) {
            *(FuncPtr *)((char *)record + 0x10) = 0;
            fn();
        }
        record = D_800E2830;
        *(int *)((char *)record + 0x44) = 1;
    }
}

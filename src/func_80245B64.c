typedef void (*FuncPtr)(void);

extern void *D_800E2830;

typedef struct func_80245B64_S1 func_80245B64_S1;
struct func_80245B64_S1 {
    char pad0[0x10];
    FuncPtr unk10;
    char pad10[0x44 - 0x10 - sizeof(FuncPtr)];
    int unk44;
};

void func_80245B64(void) {
    void *record;
    FuncPtr fn;

    record = D_800E2830;
    if (((func_80245B64_S1 *)(record))->unk44 == 0) {
        fn = ((func_80245B64_S1 *)(record))->unk10;
        if (fn != 0) {
            ((func_80245B64_S1 *)(record))->unk10 = 0;
            fn();
        }
        record = D_800E2830;
        ((func_80245B64_S1 *)(record))->unk44 = 1;
    }
}

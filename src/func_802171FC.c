typedef void (*FuncPtr)(void);

typedef struct func_802171FC_S1 func_802171FC_S1;
struct func_802171FC_S1 {
    char pad0[0x110];
    FuncPtr unk110;
};

void func_802171FC(void *arg0, void *arg1) {
    FuncPtr fn = ((func_802171FC_S1 *)(arg1))->unk110;
    if (fn != 0) {
        fn();
    }
}

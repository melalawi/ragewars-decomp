typedef void (*FuncPtr)(void);

typedef struct func_80206724_S1 func_80206724_S1;
typedef struct func_80206724_S2 func_80206724_S2;
struct func_80206724_S1 {
    char pad0[0x30];
    void* unk30;
};
struct func_80206724_S2 {
    char pad0[0x8];
    FuncPtr unk8;
};

void func_80206724(void *arg0, void *arg1) {
    void *obj = ((func_80206724_S1 *)(arg1))->unk30;
    if (obj != 0) {
        FuncPtr fn = ((func_80206724_S2 *)(obj))->unk8;
        if (fn != 0) {
            fn();
        }
    }
}

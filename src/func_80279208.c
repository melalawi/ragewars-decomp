extern void func_8025E280(int arg0);

typedef struct func_80279208_S1 func_80279208_S1;
struct func_80279208_S1 {
    char pad0[0x6];
    unsigned short unk6;
};

void func_80279208(int arg0, int arg1, void *arg2) {
    func_8025E280(((func_80279208_S1 *)(arg2))->unk6);
}

extern int D_80105180;

extern void func_80255F58(void *arg0);

typedef struct func_80254D44_S1 func_80254D44_S1;
struct func_80254D44_S1 {
    char pad0[0x10];
    int unk10;
};

void func_80254D44(void *arg0, void *arg1) {
    int *p = &D_80105180;
    ((func_80254D44_S1 *)(arg1))->unk10 = *p;
    func_80255F58((char *)p - 0xC10);
}

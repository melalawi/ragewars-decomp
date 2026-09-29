void *func_802533DC(int a, int b, int c, void *d);
void func_802A101C(int a, int b, int c);

extern int D_800C83CC;

typedef struct func_8023A180_S1 func_8023A180_S1;
struct func_8023A180_S1 {
    char pad0[0xF18];
    void* unkF18;
    char padF18[0xF1C - 0xF18 - sizeof(void*)];
    int unkF1C;
    char padF1C[0xF20 - 0xF1C - sizeof(int)];
    int unkF20;
};

void func_8023A180(void *arg0, int arg1) {
    void *ret;
    int scaled;
    int first;
    scaled = arg1 << 6;
    ((func_8023A180_S1 *)(arg0))->unkF20 = arg1;
    ret = func_802533DC(0, scaled, 0x23, &D_800C83CC);
    ((func_8023A180_S1 *)(arg0))->unkF18 = ret;
    first = *(int *)ret;
    ((func_8023A180_S1 *)(arg0))->unkF1C = first;
    func_802A101C(first, 0, scaled);
}

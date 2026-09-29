extern int func_8025DF54(short arg0);

typedef struct func_802791A8_S1 func_802791A8_S1;
struct func_802791A8_S1 {
    char pad0[0x6];
    short unk6;
};

void func_802791A8(int arg0, int arg1, void *arg2) {
    func_8025DF54(((func_802791A8_S1 *)(arg2))->unk6);
}

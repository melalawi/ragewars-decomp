typedef struct func_802B7550_S1 func_802B7550_S1;
typedef struct func_802B7550_S2 func_802B7550_S2;
struct func_802B7550_S1 {
    char pad0[0x4];
    void* unk4;
};
struct func_802B7550_S2 {
    char pad0[0x4];
    void* unk4;
};

void func_802B7550(void *arg0, void **arg1) {
    void *temp;

    temp = *arg1;
    ((func_802B7550_S1 *)(arg0))->unk4 = arg1;
    *(void **)arg0 = temp;
    temp = *arg1;
    if (temp != 0) {
        ((func_802B7550_S2 *)(temp))->unk4 = arg0;
    }
    *arg1 = arg0;
}

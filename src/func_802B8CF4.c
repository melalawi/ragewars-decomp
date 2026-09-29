extern void *D_800D80A0;

typedef struct func_802B8CF4_S1 func_802B8CF4_S1;
struct func_802B8CF4_S1 {
    char pad0[0x2C];
    void* unk2C;
};

void func_802B8CF4(void *arg0) {
    void *head = D_800D80A0;
    *(void **)arg0 = ((func_802B8CF4_S1 *)(head))->unk2C;
    ((func_802B8CF4_S1 *)(head))->unk2C = arg0;
}

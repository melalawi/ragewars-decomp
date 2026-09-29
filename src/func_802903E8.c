extern char D_8011F448;

typedef struct func_802903E8_S1 func_802903E8_S1;
struct func_802903E8_S1 {
    signed char unk0;
    char pad0[0x18 - 0x0 - sizeof(signed char)];
    void* unk18;
    char pad18[0x1D0 - 0x18 - sizeof(void*)];
    int unk1D0;
};

void func_802903E8(void *arg0) {
    ((func_802903E8_S1 *)(arg0))->unk18 = &D_8011F448;
    ((func_802903E8_S1 *)(arg0))->unk0 = 3;
    ((func_802903E8_S1 *)(arg0))->unk1D0 = 0;
}

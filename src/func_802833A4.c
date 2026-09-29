typedef struct func_802833A4_S1 func_802833A4_S1;
struct func_802833A4_S1 {
    char pad0[0x12C];
    int unk12C;
};

int func_802833A4(void *arg0) {
    return ((func_802833A4_S1 *)(arg0))->unk12C;
}

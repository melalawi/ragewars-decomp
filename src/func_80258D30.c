typedef struct func_80258D30_S1 func_80258D30_S1;
struct func_80258D30_S1 {
    char pad0[0x2BAC];
    int unk2BAC;
};

int func_80258D30(void *arg0) {
    return ((func_80258D30_S1 *)(arg0))->unk2BAC;
}

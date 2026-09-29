typedef struct func_80258D60_S1 func_80258D60_S1;
struct func_80258D60_S1 {
    char pad0[0x84];
    char unk84;
};

void *func_80258D60(void *arg0) {
    return &((func_80258D60_S1 *)(arg0))->unk84;
}

typedef struct func_802643D8_S1 func_802643D8_S1;
struct func_802643D8_S1 {
    char pad0[0xC0];
    int unkC0;
};

int func_802643D8(void *arg0) {
    int flag = ((func_802643D8_S1 *)(arg0))->unkC0 & 0x10808;
    return flag != 0;
}

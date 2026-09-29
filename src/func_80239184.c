typedef struct func_80239184_S1 func_80239184_S1;
struct func_80239184_S1 {
    char pad0[0x548];
    signed char unk548;
    char pad548[0x549 - 0x548 - sizeof(signed char)];
    signed char unk549;
};

void func_80239184(void *arg0, signed char arg1, signed char arg2) {
    if (arg0 != 0) {
        ((func_80239184_S1 *)(arg0))->unk548 = arg1;
        ((func_80239184_S1 *)(arg0))->unk549 = arg2;
    }
}

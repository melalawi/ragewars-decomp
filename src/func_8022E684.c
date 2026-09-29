typedef struct func_8022E684_S1 func_8022E684_S1;
struct func_8022E684_S1 {
    char pad0[0x650];
    short unk650;
};

int func_8022E684(void *arg0) {
    return ((func_8022E684_S1 *)(arg0))->unk650 == 0xF;
}

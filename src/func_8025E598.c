typedef struct func_8025E598_S1 func_8025E598_S1;
struct func_8025E598_S1 {
    char pad0[0x6];
    unsigned short unk6;
};

unsigned short func_8025E598(void *arg0) {
    return ((func_8025E598_S1 *)(arg0))->unk6 & 0x3FFF;
}

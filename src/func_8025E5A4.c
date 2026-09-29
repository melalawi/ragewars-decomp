typedef struct func_8025E5A4_S1 func_8025E5A4_S1;
struct func_8025E5A4_S1 {
    char pad0[0x12];
    short unk12;
};

short func_8025E5A4(void *arg0) {
    return ((func_8025E5A4_S1 *)(arg0))->unk12;
}

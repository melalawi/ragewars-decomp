typedef struct func_8025E568_S1 func_8025E568_S1;
struct func_8025E568_S1 {
    char pad0[0x6];
    unsigned short unk6;
};

/** Return the upper two bits of the halfword at object offset 6. */
unsigned int func_8025E568(void *arg0) {
    return ((func_8025E568_S1 *)(arg0))->unk6 >> 14;
}

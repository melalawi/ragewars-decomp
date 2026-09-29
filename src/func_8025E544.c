typedef struct func_8025E544_S1 func_8025E544_S1;
struct func_8025E544_S1 {
    char pad0[0x5];
    signed char unk5;
};

/** Return the signed byte at offset five. */
int func_8025E544(void *arg0) {
    return ((func_8025E544_S1 *)(arg0))->unk5;
}

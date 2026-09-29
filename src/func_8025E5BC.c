typedef struct func_8025E5BC_S1 func_8025E5BC_S1;
struct func_8025E5BC_S1 {
    char pad0[0xC];
    short unkC;
};

/** Return the signed halfword at offset twelve. */
int func_8025E5BC(void *arg0) {
    return ((func_8025E5BC_S1 *)(arg0))->unkC;
}

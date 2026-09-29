typedef struct func_802643C0_S1 func_802643C0_S1;
struct func_802643C0_S1 {
    char pad0[0xC0];
    unsigned int unkC0;
};

/** Report whether any selected status bit is set. */
int func_802643C0(void *object) {
    return (((func_802643C0_S1 *)(object))->unkC0 & 0x40101) != 0;
}

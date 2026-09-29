typedef struct func_802643A8_S1 func_802643A8_S1;
struct func_802643A8_S1 {
    char pad0[0xC0];
    unsigned int unkC0;
};

/** Report whether any of the selected object flag bytes are set. */
int func_802643A8(void *object) {
    return (((func_802643A8_S1 *)(object))->unkC0 & 0x20202) != 0;
}

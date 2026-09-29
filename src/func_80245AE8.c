typedef struct func_80245AE8_S1 func_80245AE8_S1;
struct func_80245AE8_S1 {
    char pad0[0xB0];
    unsigned int unkB0;
};

extern func_80245AE8_S1 *D_800E2830;

/** Return the word at offset 0xB0 of the current global object. */
unsigned int func_80245AE8(void) {
    return D_800E2830->unkB0;
}

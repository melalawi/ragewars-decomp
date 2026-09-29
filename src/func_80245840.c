typedef struct func_80245840_S1 func_80245840_S1;
struct func_80245840_S1 {
    char pad0[0x3C];
    unsigned int unk3C;
};

extern func_80245840_S1 *D_800E2830;

/** Return the word at offset 0x3C of the current global object. */
unsigned int func_80245840(void) {
    return D_800E2830->unk3C;
}

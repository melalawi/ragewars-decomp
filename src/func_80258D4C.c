typedef struct func_80258D4C_S1 func_80258D4C_S1;
struct func_80258D4C_S1 {
    char pad0[0x2BB0];
    int unk2BB0;
};

/** Read the object word at offset 0x2BB0. */
int func_80258D4C(void *object) {
    return ((func_80258D4C_S1 *)(object))->unk2BB0;
}

typedef struct func_802AB78C_S1 func_802AB78C_S1;
struct func_802AB78C_S1 {
    char pad0[0x8C];
    int unk8C;
};

/** Store a value in the field at offset 0x8C. */
void func_802AB78C(void *object, int value) {
    ((func_802AB78C_S1 *)(object))->unk8C = value;
}

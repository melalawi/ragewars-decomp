typedef struct func_80258D3C_S1 func_80258D3C_S1;
struct func_80258D3C_S1 {
    char pad0[0x2BB4];
    int unk2BB4;
};

/** Store a value in the field at offset 0x2BB4. */
void func_80258D3C(char *object, int value) {
    ((func_80258D3C_S1 *)(object))->unk2BB4 = value;
}

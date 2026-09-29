typedef struct func_80258D68_S1 func_80258D68_S1;
struct func_80258D68_S1 {
    char pad0[0x2BB8];
    int unk2BB8;
};

/** Store a word in the object field at offset 0x2BB8. */
void func_80258D68(void *object, int value) {
    ((func_80258D68_S1 *)(object))->unk2BB8 = value;
}

typedef struct func_8020986C_S1 func_8020986C_S1;
struct func_8020986C_S1 {
    char pad0[0x214];
    int unk214;
};

/** Store the second argument at byte offset 0x214 in the first argument. */
void func_8020986C(void *object, int value) {
    ((func_8020986C_S1 *)(object))->unk214 = value;
}

typedef struct func_8040F290_S1 func_8040F290_S1;
struct func_8040F290_S1 {
    char pad0[0x2C];
    int unk2C;
};

/** Store a word at offset 0x2c. */
void func_8040F290(void *object, int value) {
    ((func_8040F290_S1 *)(object))->unk2C = value;
}

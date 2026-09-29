typedef struct func_80293808_S1 func_80293808_S1;
struct func_80293808_S1 {
    char pad0[0x26DBC];
    int unk26DBC;
    char pad26DBC[0x26DC1 - 0x26DBC - sizeof(int)];
    char unk26DC1;
};

/** Set the state byte and linked value in a large object. */
void func_80293808(void *object, int value) {
    ((func_80293808_S1 *)(object))->unk26DC1 = 2;
    ((func_80293808_S1 *)(object))->unk26DBC = value;
}

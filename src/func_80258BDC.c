typedef struct func_80258BDC_S1 func_80258BDC_S1;
struct func_80258BDC_S1 {
    char pad0[0x2BA8];
    int unk2BA8;
};

/** Store the second argument at byte offset 0x2BA8 in the first argument. */
void func_80258BDC(void *object, int value) {
    ((func_80258BDC_S1 *)(object))->unk2BA8 = value;
}

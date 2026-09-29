typedef struct func_80258D28_S1 func_80258D28_S1;
struct func_80258D28_S1 {
    char pad0[0x2BAC];
    int unk2BAC;
};

/** Store the second argument at offset 0x2BAC. */
void func_80258D28(void *arg0, int arg1) {
    ((func_80258D28_S1 *)(arg0))->unk2BAC = arg1;
}

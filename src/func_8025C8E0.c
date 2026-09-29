typedef struct func_8025C8E0_S1 func_8025C8E0_S1;
struct func_8025C8E0_S1 {
    char pad0[0x8];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
};

/** Initialize the two object words at offsets 8 and 12 to negative one. */
void func_8025C8E0(void *arg0) {
    ((func_8025C8E0_S1 *)(arg0))->unkC = -1;
    ((func_8025C8E0_S1 *)(arg0))->unk8 = -1;
}

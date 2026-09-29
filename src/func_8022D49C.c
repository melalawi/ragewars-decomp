typedef struct func_8022D49C_S1 func_8022D49C_S1;
struct func_8022D49C_S1 {
    char pad0[0x122C];
    unsigned int unk122C;
};

/** Set bit 0x20 in the word at object offset 0x122C. */
void func_8022D49C(void *arg0) {
    ((func_8022D49C_S1 *)(arg0))->unk122C |= 0x20;
}

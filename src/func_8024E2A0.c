typedef struct func_8024E2A0_S1 func_8024E2A0_S1;
struct func_8024E2A0_S1 {
    char pad0[0x18];
    int* unk18;
};

/** Report whether the object pointed to at offset 0x18 equals one. */
int func_8024E2A0(void *arg0) {
    return *(int *)(((func_8024E2A0_S1 *)(arg0))->unk18) == 1;
}

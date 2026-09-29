typedef struct func_802054D0_S1 func_802054D0_S1;
struct func_802054D0_S1 {
    char pad0[0x18];
    char* unk18;
};

/** Return the word at offset 0x40 through the pointer stored at offset 0x18. */
int func_802054D0(void *object) {
    return *(int *)(((func_802054D0_S1 *)(object))->unk18 + 0x40);
}

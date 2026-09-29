typedef struct func_802A2B18_S1 func_802A2B18_S1;
struct func_802A2B18_S1 {
    char pad0[0x58];
    int unk58;
};

/** Return the word at offset 0x58 in the supplied object. */
int func_802A2B18(void *object) {
    return ((func_802A2B18_S1 *)(object))->unk58;
}

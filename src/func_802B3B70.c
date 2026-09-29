typedef struct func_802B3B70_S1 func_802B3B70_S1;
struct func_802B3B70_S1 {
    char pad0[0x2C];
    int unk2C;
};

/** Read the object word at offset 0x2C. */
int func_802B3B70(void *object) {
    return ((func_802B3B70_S1 *)(object))->unk2C;
}

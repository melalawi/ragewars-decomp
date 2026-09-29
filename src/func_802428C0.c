typedef struct func_802428C0_S1 func_802428C0_S1;
typedef struct func_802428C0_S2 func_802428C0_S2;
struct func_802428C0_S1 {
    char pad0[0x3C];
    unsigned int unk3C;
};
struct func_802428C0_S2 {
    char pad0[0x38];
    unsigned int unk38;
};

/** Set flag 8 in the first object and flag 0x10 in the second. */
void func_802428C0(void *first, void *second) {
    ((func_802428C0_S1 *)(first))->unk3C |= 8;
    ((func_802428C0_S2 *)(second))->unk38 |= 0x10;
}

typedef struct func_802B8540_S1 func_802B8540_S1;
struct func_802B8540_S1 {
    char pad0[0x16];
    unsigned short unk16;
};

/** Store the supplied halfword at offset 0x16. */
void func_802B8540(void *unused, void *object, unsigned short value) {
    ((func_802B8540_S1 *)(object))->unk16 = value;
}

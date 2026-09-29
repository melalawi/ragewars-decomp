typedef struct func_802A2FB8_S1 func_802A2FB8_S1;
struct func_802A2FB8_S1 {
    char pad0[0x48];
    int unk48;
    char pad48[0x5C - 0x48 - sizeof(int)];
    int unk5C;
};

/** Apply state two for event class three when the subcode is six or seven. */
int func_802A2FB8(void *object, int unused, unsigned int event, int subcode) {
    if ((event >> 16) == 3 && subcode < 8 && subcode >= 6) {
        ((func_802A2FB8_S1 *)(object))->unk5C = 2;
        ((func_802A2FB8_S1 *)(object))->unk48 = 0;
    }
    return 0;
}

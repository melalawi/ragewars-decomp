typedef struct func_80258D44_S1 func_80258D44_S1;
struct func_80258D44_S1 {
    char pad0[0x2B98];
    int unk2B98;
};

/** Store a value in the field at offset 0x2B98. */
void func_80258D44(void *object, int value) {
    ((func_80258D44_S1 *)(object))->unk2B98 = value;
}

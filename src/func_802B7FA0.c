typedef struct Slot { char pad0[0x20]; short value; char pad22[0xE]; } Slot;

typedef struct func_802B7FA0_S1 func_802B7FA0_S1;
struct func_802B7FA0_S1 {
    char pad0[0x40];
    void* unk40;
};

/** Store the low byte of the third argument in an indexed 0x30-byte record. */
void func_802B7FA0(void *object, short index, unsigned char value) {
    ((Slot *)((func_802B7FA0_S1 *)object)->unk40)[index].value = value;
}

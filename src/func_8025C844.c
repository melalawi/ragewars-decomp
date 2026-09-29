typedef struct { char pad0[0x60]; short slot[1]; } SlotArray;
void func_802B76A0(void *a, short b);

typedef struct func_8025C844_S1 func_8025C844_S1;
struct func_8025C844_S1 {
    char pad0[0x7C];
    char unk7C;
    char pad7C[0x84 - 0x7C - sizeof(char)];
    char unk84;
};

int func_8025C844(int arg0, short arg1) {
    void *base;
    void *arrayBase;
    short *slot;
    unsigned char *cursor;
    int entry;

    entry = arg1 * 0xCC;
    entry = entry + arg0;
    entry = entry + 4;
    base = *(void **)(entry + 0xB0);
    arrayBase = &((func_8025C844_S1 *)(base))->unk7C;
    cursor = (*(int *)(entry + 0x0) * 2) + (unsigned char *)arrayBase;
    cursor += 0x60;
    slot = (short *)cursor;
    func_802B76A0(&((func_8025C844_S1 *)(base))->unk84, *slot);
    arrayBase = ((short *)arrayBase) + *(int *)entry;
    slot = &((SlotArray *)arrayBase)->slot[0];
    *slot = -1;
    *(short *)(entry + 0x38) = 0;
    *(int *)(entry + 0xC) = -1;
    *(int *)(entry + 0x8) = -1;
    *(int *)(entry + 0xA8) = -1;
    *(short *)(entry + 0x3A) = -1;
    *(int *)(entry + 0xB4) = -1;
    return 0;
}

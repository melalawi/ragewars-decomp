typedef struct { char pad0[0x60]; short slot[1]; } SlotArray;
void func_802B76A0(void *a, short b);

typedef struct func_8025C67C_S1 func_8025C67C_S1;
typedef struct func_8025C67C_S2 func_8025C67C_S2;
struct func_8025C67C_S1 {
    int unk0;
    char pad0[0x8 - 0x0 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x38 - 0xC - sizeof(int)];
    short unk38;
    char pad38[0x3A - 0x38 - sizeof(short)];
    short unk3A;
    char pad3A[0xA8 - 0x3A - sizeof(short)];
    int unkA8;
    char padA8[0xB0 - 0xA8 - sizeof(int)];
    void* unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(void*)];
    int unkB4;
};
struct func_8025C67C_S2 {
    char pad0[0x7C];
    char unk7C;
    char pad7C[0x84 - 0x7C - sizeof(char)];
    char unk84;
};

void func_8025C67C(void *arg0) {
    void *base;
    void *arrayBase;
    short *slot;
    unsigned char *cursor;
    base = ((func_8025C67C_S1 *)(arg0))->unkB0;
    arrayBase = &((func_8025C67C_S2 *)(base))->unk7C;
    cursor = (((func_8025C67C_S1 *)(arg0))->unk0 * 2) + (unsigned char *)arrayBase;
    cursor += 0x60;
    slot = (short *)cursor;
    func_802B76A0(&((func_8025C67C_S2 *)(base))->unk84, *slot);
    arrayBase = ((short *)arrayBase) + ((func_8025C67C_S1 *)arg0)->unk0;
    slot = &((SlotArray *)arrayBase)->slot[0];
    *slot = -1;
    ((func_8025C67C_S1 *)(arg0))->unk38 = 0;
    ((func_8025C67C_S1 *)(arg0))->unkC = -1;
    ((func_8025C67C_S1 *)(arg0))->unk8 = -1;
    ((func_8025C67C_S1 *)(arg0))->unkA8 = -1;
    ((func_8025C67C_S1 *)(arg0))->unk3A = -1;
    ((func_8025C67C_S1 *)(arg0))->unkB4 = -1;
}

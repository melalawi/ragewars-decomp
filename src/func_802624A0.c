typedef struct func_802624A0_S1 func_802624A0_S1;
struct func_802624A0_S1 {
    char pad0[0x4];
    short unk4;
    char pad4[0x6 - 0x4 - sizeof(short)];
    short unk6;
    char pad6[0x8 - 0x6 - sizeof(short)];
    short unk8;
    char pad8[0xA - 0x8 - sizeof(short)];
    unsigned char unkA;
    char padA[0xB - 0xA - sizeof(unsigned char)];
    unsigned char unkB;
    char padB[0x10 - 0xB - sizeof(unsigned char)];
    int unk10;
};

/** Initialize the compact record fields written by the VRAM 0x802624A0 leaf. */
void func_802624A0(void *record) {
    ((func_802624A0_S1 *)(record))->unk4 = -1;
    ((func_802624A0_S1 *)(record))->unk6 = 0;
    *(int *)record = 0;
    ((func_802624A0_S1 *)(record))->unk8 = 0;
    ((func_802624A0_S1 *)(record))->unkA = 0;
    ((func_802624A0_S1 *)(record))->unkB = 1;
    ((func_802624A0_S1 *)(record))->unk10 = 0;
}

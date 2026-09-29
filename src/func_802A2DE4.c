typedef struct func_802A2DE4_S1 func_802A2DE4_S1;
typedef struct func_802A2DE4_S2 func_802A2DE4_S2;
struct func_802A2DE4_S1 {
    char pad0[0x8];
    char* unk8;
    char pad8[0x48 - 0x8 - sizeof(char*)];
    int unk48;
    char pad48[0x5C - 0x48 - sizeof(int)];
    int unk5C;
};
struct func_802A2DE4_S2 {
    char pad0[0x4];
    char* unk4;
    char pad4[0xE - 0x4 - sizeof(char*)];
    unsigned short unkE;
    char padE[0x10 - 0xE - sizeof(unsigned short)];
    unsigned char unk10;
};

/** Reset the object state and mark non-type-eight linked records. */
int func_802A2DE4(char *object) {
    char *record = ((func_802A2DE4_S1 *)(object))->unk8;
    ((func_802A2DE4_S1 *)(object))->unk5C = 2;
    ((func_802A2DE4_S1 *)(object))->unk48 = 0;
    while (record != 0) {
        if (((func_802A2DE4_S2 *)(record))->unkE != 8) {
            ((func_802A2DE4_S2 *)(record))->unk10 = 100;
        }
        record = ((func_802A2DE4_S2 *)(record))->unk4;
    }
    return 0;
}

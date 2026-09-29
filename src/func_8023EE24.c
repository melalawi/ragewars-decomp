extern void *D_80103FCC;

typedef struct func_8023EE24_S1 func_8023EE24_S1;
struct func_8023EE24_S1 {
    unsigned int unk0;
    char pad0[0x14 - 0x0 - sizeof(unsigned int)];
    int unk14;
    char pad14[0x88 - 0x14 - sizeof(int)];
    unsigned int unk88;
    char pad88[0x9C - 0x88 - sizeof(unsigned int)];
    unsigned int unk9C;
    char pad9C[0xB0 - 0x9C - sizeof(unsigned int)];
    unsigned int unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(unsigned int)];
    unsigned int unkB4;
    char padB4[0xC4 - 0xB4 - sizeof(unsigned int)];
    unsigned int unkC4;
};

/** Reset the selected fields of the current global record. */
void func_8023EE24(void) {
    char *record = (char *)D_80103FCC;
    ((func_8023EE24_S1 *)(record))->unk0 = 0;
    ((func_8023EE24_S1 *)(record))->unk14 = -1;
    ((func_8023EE24_S1 *)(record))->unk88 = 0;
    ((func_8023EE24_S1 *)(record))->unk9C = 0;
    ((func_8023EE24_S1 *)(record))->unkB0 = 0;
    ((func_8023EE24_S1 *)(record))->unkB4 = 0;
    ((func_8023EE24_S1 *)(record))->unkC4 = 0;
}

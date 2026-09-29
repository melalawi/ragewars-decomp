typedef struct func_80219460_S1 func_80219460_S1;
struct func_80219460_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    short unkC;
    char padC[0xE - 0xC - sizeof(short)];
    char unkE;
    char padE[0x12 - 0xE - sizeof(char)];
    char unk12;
};

/** Initialize the compact state record to its default values. */
void func_80219460(void *record) {
    ((func_80219460_S1 *)(record))->unk4 = 1;
    *(int *)record = 0;
    ((func_80219460_S1 *)(record))->unkC = 0;
    ((func_80219460_S1 *)(record))->unkE = 0;
    ((func_80219460_S1 *)(record))->unk12 = -1;
}

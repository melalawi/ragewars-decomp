typedef struct func_80218F84_S1 func_80218F84_S1;
struct func_80218F84_S1 {
    unsigned int unk0;
    char pad0[0x4 - 0x0 - sizeof(unsigned int)];
    unsigned int unk4;
    char pad4[0x8 - 0x4 - sizeof(unsigned int)];
    unsigned int unk8;
    char pad8[0x6C - 0x8 - sizeof(unsigned int)];
    int unk6C;
};

/** Reset a record and mark its word at offset 0x6C as invalid. */
void func_80218F84(void *record) {
    ((func_80218F84_S1 *)(record))->unk0 = 0;
    ((func_80218F84_S1 *)(record))->unk4 = 0;
    ((func_80218F84_S1 *)(record))->unk6C = -1;
    ((func_80218F84_S1 *)(record))->unk8 = 0;
}

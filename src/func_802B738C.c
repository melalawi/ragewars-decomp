typedef struct func_802B738C_S1 func_802B738C_S1;
typedef struct func_802B738C_S2 func_802B738C_S2;
struct func_802B738C_S1 {
    char pad0[0x8];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x1A - 0xC - sizeof(int)];
    unsigned short unk1A;
};
struct func_802B738C_S2 {
    int unk0;
    char pad0[0x4 - 0x0 - sizeof(int)];
    int unk4;
    char pad4[0xC - 0x4 - sizeof(int)];
    unsigned short unkC;
};

/** Copy selected fields from the compact source record. */
void func_802B738C(void *arg0, void *arg1) {
    ((func_802B738C_S1 *)(arg0))->unk8 = ((func_802B738C_S2 *)(arg1))->unk0;
    ((func_802B738C_S1 *)(arg0))->unk1A = ((func_802B738C_S2 *)(arg1))->unkC;
    ((func_802B738C_S1 *)(arg0))->unkC = ((func_802B738C_S2 *)(arg1))->unk4;
}

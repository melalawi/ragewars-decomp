typedef struct func_80239CDC_S1 func_80239CDC_S1;
struct func_80239CDC_S1 {
    char pad0[0x4];
    int unk4;
    char pad4[0x8 - 0x4 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x10 - 0xC - sizeof(int)];
    int unk10;
};

/** Clear four consecutive object words beginning at offset 4. */
void func_80239CDC(void *arg0) {
    ((func_80239CDC_S1 *)(arg0))->unk4 = 0;
    ((func_80239CDC_S1 *)(arg0))->unk8 = 0;
    ((func_80239CDC_S1 *)(arg0))->unkC = 0;
    ((func_80239CDC_S1 *)(arg0))->unk10 = 0;
}

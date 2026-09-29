typedef struct func_8028D628_S1 func_8028D628_S1;
struct func_8028D628_S1 {
    char pad0[0x944];
    int unk944;
    char pad944[0xB48 - 0x944 - sizeof(int)];
    int unkB48;
    char padB48[0xC4C - 0xB48 - sizeof(int)];
    int unkC4C;
    char padC4C[0xE50 - 0xC4C - sizeof(int)];
    int unkE50;
    char padE50[0xF54 - 0xE50 - sizeof(int)];
    int unkF54;
    char padF54[0xFDC - 0xF54 - sizeof(int)];
    int unkFDC;
    char padFDC[0x1020 - 0xFDC - sizeof(int)];
    int unk1020;
    char pad1020[0x10A4 - 0x1020 - sizeof(int)];
    int unk10A4;
    char pad10A4[0x10B8 - 0x10A4 - sizeof(int)];
    int unk10B8;
    char pad10B8[0x10BC - 0x10B8 - sizeof(int)];
    int unk10BC;
    char pad10BC[0x1504 - 0x10BC - sizeof(int)];
    int unk1504;
};

/** Clear the scene counters and linked state fields. */
void func_8028D628(void *object) {
    ((func_8028D628_S1 *)(object))->unk944 = 0;
    ((func_8028D628_S1 *)(object))->unkB48 = 0;
    ((func_8028D628_S1 *)(object))->unkC4C = 0;
    ((func_8028D628_S1 *)(object))->unkE50 = 0;
    ((func_8028D628_S1 *)(object))->unkF54 = 0;
    ((func_8028D628_S1 *)(object))->unkFDC = 0;
    ((func_8028D628_S1 *)(object))->unk1020 = 0;
    ((func_8028D628_S1 *)(object))->unk10A4 = 0;
    ((func_8028D628_S1 *)(object))->unk10B8 = 0;
    ((func_8028D628_S1 *)(object))->unk10BC = 0;
    ((func_8028D628_S1 *)(object))->unk1504 = 0;
}

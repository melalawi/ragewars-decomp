typedef struct func_8029FBC8_S1 func_8029FBC8_S1;
typedef struct func_8029FBC8_S2 func_8029FBC8_S2;
struct func_8029FBC8_S1 {
    float unk0;
    char pad0[0x14 - 0x0 - sizeof(float)];
    float unk14;
    char pad14[0x28 - 0x14 - sizeof(float)];
    float unk28;
};
struct func_8029FBC8_S2 {
    float unk0;
    char pad0[0x4 - 0x0 - sizeof(float)];
    float unk4;
    char pad4[0x8 - 0x4 - sizeof(float)];
    float unk8;
};

/** Scatter three floats from arg1 into arg0's fields. */
void func_8029FBC8(void *arg0, void *arg1) {
    ((func_8029FBC8_S1 *)(arg0))->unk0 = ((func_8029FBC8_S2 *)(arg1))->unk0;
    ((func_8029FBC8_S1 *)(arg0))->unk14 = ((func_8029FBC8_S2 *)(arg1))->unk4;
    ((func_8029FBC8_S1 *)(arg0))->unk28 = ((func_8029FBC8_S2 *)(arg1))->unk8;
}

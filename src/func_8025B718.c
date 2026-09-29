/* Initialises an object: sets the words at 0x8, 0xC, 0x40 and 0xB4 and the halfword at 0x3A to -1,
   stores the two arguments at 0xB0 and 0x0, clears the halfword at 0x38 and the words at 0x14, 0x58,
   0x5C, 0xA4, 0xAC, 0xBC and 0xC0, sets the word at 0xC4 to 1 and writes D_800C9068 into the floats
   at 0x2C, 0x34 and 0xB8. */
extern float D_800C9068;
typedef struct func_8025B718_S1 func_8025B718_S1;
struct func_8025B718_S1 {
    int unk0;
    char pad0[0x8 - 0x0 - sizeof(int)];
    int unk8;
    char pad8[0xC - 0x8 - sizeof(int)];
    int unkC;
    char padC[0x14 - 0xC - sizeof(int)];
    int unk14;
    char pad14[0x2C - 0x14 - sizeof(int)];
    float unk2C;
    char pad2C[0x34 - 0x2C - sizeof(float)];
    float unk34;
    char pad34[0x38 - 0x34 - sizeof(float)];
    short unk38;
    char pad38[0x3A - 0x38 - sizeof(short)];
    short unk3A;
    char pad3A[0x40 - 0x3A - sizeof(short)];
    int unk40;
    char pad40[0x58 - 0x40 - sizeof(int)];
    int unk58;
    char pad58[0x5C - 0x58 - sizeof(int)];
    int unk5C;
    char pad5C[0xA4 - 0x5C - sizeof(int)];
    int unkA4;
    char padA4[0xAC - 0xA4 - sizeof(int)];
    int unkAC;
    char padAC[0xB0 - 0xAC - sizeof(int)];
    int unkB0;
    char padB0[0xB4 - 0xB0 - sizeof(int)];
    int unkB4;
    char padB4[0xB8 - 0xB4 - sizeof(int)];
    float unkB8;
    char padB8[0xBC - 0xB8 - sizeof(float)];
    int unkBC;
    char padBC[0xC0 - 0xBC - sizeof(int)];
    int unkC0;
    char padC0[0xC4 - 0xC0 - sizeof(int)];
    int unkC4;
};

void func_8025B718(void *arg0, int arg1, int arg2) {
    float k = D_800C9068;

    ((func_8025B718_S1 *)(arg0))->unkC = -1;
    ((func_8025B718_S1 *)(arg0))->unk8 = -1;
    ((func_8025B718_S1 *)(arg0))->unk3A = -1;
    ((func_8025B718_S1 *)(arg0))->unk40 = -1;
    ((func_8025B718_S1 *)(arg0))->unkB4 = -1;
    ((func_8025B718_S1 *)(arg0))->unkB0 = arg1;
    ((func_8025B718_S1 *)(arg0))->unk0 = arg2;
    ((func_8025B718_S1 *)(arg0))->unk38 = 0;
    ((func_8025B718_S1 *)(arg0))->unk14 = 0;
    ((func_8025B718_S1 *)(arg0))->unk58 = 0;
    ((func_8025B718_S1 *)(arg0))->unk5C = 0;
    ((func_8025B718_S1 *)(arg0))->unkA4 = 0;
    ((func_8025B718_S1 *)(arg0))->unkAC = 0;
    ((func_8025B718_S1 *)(arg0))->unkBC = 0;
    ((func_8025B718_S1 *)(arg0))->unkC0 = 0;
    ((func_8025B718_S1 *)(arg0))->unkC4 = 1;
    ((func_8025B718_S1 *)(arg0))->unk2C = k;
    ((func_8025B718_S1 *)(arg0))->unk34 = k;
    ((func_8025B718_S1 *)(arg0))->unkB8 = k;
}

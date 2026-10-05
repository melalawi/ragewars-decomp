#include "span_1000/code_8025A3EC.h"
/* Initialises an object: sets the words at 0x8, 0xC, 0x40 and 0xB4 and the halfword at 0x3A to -1,
   stores the two arguments at 0xB0 and 0x0, clears the halfword at 0x38 and the words at 0x14, 0x58,
   0x5C, 0xA4, 0xAC, 0xBC and 0xC0, sets the word at 0xC4 to 1 and writes D_800C9068 into the floats
   at 0x2C, 0x34 and 0xB8. */
extern float D_800C3F78_de;



void func_8025B6F8_de(void *arg0, int arg1, int arg2) {
    float k = D_800C3F78_de;

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


#include "basetypes.h"
typedef struct func_8023919C_S1 func_8023919C_S1;
struct func_8023919C_S1 {
    char pad0[0x538];
    s32 unk538;
    char pad538[0x544 - 0x538 - sizeof(s32)];
    s32 unk544;
    char pad544[0x54A - 0x544 - sizeof(s32)];
    s8 unk54A;
    char pad54A[0x54B - 0x54A - sizeof(s8)];
    s8 unk54B;
    char pad54B[0x54C - 0x54B - sizeof(s8)];
    s8 unk54C;
    char pad54C[0x54D - 0x54C - sizeof(s8)];
    s8 unk54D;
    char pad54D[0x54E - 0x54D - sizeof(s8)];
    s8 unk54E;
    char pad54E[0x54F - 0x54E - sizeof(s8)];
    s8 unk54F;
    char pad54F[0x550 - 0x54F - sizeof(s8)];
    s8 unk550;
    char pad550[0x551 - 0x550 - sizeof(s8)];
    s8 unk551;
};

void func_8023919C(void *arg0, s8 arg1, s8 arg2, s8 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
 do { if (arg0 != 0) { ((func_8023919C_S1 *)(arg0))->unk550 = (s8) arg4; ((func_8023919C_S1 *)(arg0))->unk54A = arg1; ((func_8023919C_S1 *)(arg0))->unk54E = arg2; ((func_8023919C_S1 *)(arg0))->unk54F = arg3; ((func_8023919C_S1 *)(arg0))->unk551 = 0; ((func_8023919C_S1 *)(arg0))->unk54B = (s8) arg5; ((func_8023919C_S1 *)(arg0))->unk54C = (s8) arg6; ((func_8023919C_S1 *)(arg0))->unk54D = (s8) arg7; ((func_8023919C_S1 *)(arg0))->unk538 = 0; ((func_8023919C_S1 *)(arg0))->unk544 = 1; } } while (0);
}

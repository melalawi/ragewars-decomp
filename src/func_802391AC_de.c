#include "span_1000/code_80233920.h"
#include "types.h"




/* The native ABI receives full words. Narrowing happens at the byte stores,
 * so callers may pass values such as 0x80 and 0xFF without sign extension. */
void func_802391AC_de(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7)
{
 do { if (arg0 != 0) { ((func_8023919C_S1 *)(arg0))->unk550 = (s8) arg4; ((func_8023919C_S1 *)(arg0))->unk54A = arg1; ((func_8023919C_S1 *)(arg0))->unk54E = arg2; ((func_8023919C_S1 *)(arg0))->unk54F = arg3; ((func_8023919C_S1 *)(arg0))->unk551 = 0; ((func_8023919C_S1 *)(arg0))->unk54B = (s8) arg5; ((func_8023919C_S1 *)(arg0))->unk54C = (s8) arg6; ((func_8023919C_S1 *)(arg0))->unk54D = (s8) arg7; ((func_8023919C_S1 *)(arg0))->unk538 = 0; ((func_8023919C_S1 *)(arg0))->unk544 = 1; } } while (0);
}

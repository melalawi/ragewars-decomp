#include "basetypes.h"
typedef struct Triple { s32 x; s32 y; s32 z; } Triple;
typedef struct Pair { s32 x; s32 y; } Pair;
extern void func_80266830(s32, s32, s32, Triple, Pair, s32, s32, s32);
void func_80267FA8(s32 arg0, s32 arg1, s32 arg2, Triple arg3, Pair arg6) {
    func_80266830(arg0, arg1, arg2, arg3, arg6, 1, 0, 0x100);
}

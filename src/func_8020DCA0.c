#include "basetypes.h"
typedef s32 M2C_UNK;

s32 func_80274544(void);
s32 func_8020DD04(s32);
M2C_UNK func_80209874(void *, s32);

void func_8020DCA0(void *arg0) {
    s32 temp_v0;
    if ((func_80274544() % 4) == 1) {
        temp_v0 = func_8020DD04((*(s32 *)((s8 *)((*(void **)((s8 *)arg0 + 0))) + 0x18)) + 0x14);
        (*(s32 *)((s8 *)arg0 + 0x230)) = temp_v0;
        func_80209874(arg0, temp_v0);
    }
}

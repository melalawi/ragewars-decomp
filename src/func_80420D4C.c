/* Applies the chosen character when the active player panel is ready. */
#include "basetypes.h"
typedef struct {s32 a,unk4;char p[8];s32 unk10,unk14;} State;
void func_8029A73C();                                  /* extern */
s32 func_8040EC50(s32);                             /* extern */
s32 func_8041B87C(s32, s32);                        /* extern */
s32 func_8041B890(s32, s32);                        /* extern */
void func_80420688(s32, s32);                          /* extern */
extern State *D_800E42D0;

#ifdef VERSION_EU_X
#define SPECIAL_CHAR 0x85
#else
#define SPECIAL_CHAR 0x81
#endif

s32 func_80420D4C(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;
    s32 temp_s1;
    s32 var_a1;
    State *temp_a0;

    temp_s0 = arg2 & 0xFFFF;
    temp_s1 = func_8041B890(D_800E42D0->unk4, temp_s0);
    func_8029A73C();
    temp_a0 = (State *)((char *)D_800E42D0 + (temp_s0 * 0x4C8));
    if (temp_a0->unk14 == 1) {
        if (temp_s1 == SPECIAL_CHAR) func_80420688(temp_s0,temp_a0->unk10);
        else if (func_8040EC50(func_8041B87C(D_800E42D0->unk4,temp_s0)) == 0) func_80420688(temp_s0,temp_s1);
    }
    return 0;
}

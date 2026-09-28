#include "basetypes.h"

extern s32 D_800D2AE0;
extern s32 D_8014AEC8;
extern u8 D_8014AEB0;
extern s32 D_8014AECC;
extern s32 D_8014AED8;

void func_802956AC(s32 arg0, s32 **arg1) {
    s32 var_v1;
    s32 var_v1_2;
    char *state;
    char *entry;

    if ((D_800D2AE0 != 0) && (*arg1 != 0)) {
        state = (char *)&D_8014AEC8;
        if (*(s32 *)state != 0) {
            return;
        }
        var_v1 = 0;
        if (D_8014AEB0 != 0) {
            var_v1 = (u32)D_800D2AE0 > 0U;
        }
        if (var_v1 != 0) {
            var_v1_2 = (*(s32 *)(state + 0x21A0) % 10) < 3;
        } else {
            var_v1_2 = 1;
        }
        entry = (char *)&D_8014AECC;
        if (arg0 == *(s32 *)entry) {
            if (var_v1_2 != 0) {
                *arg1 = (s32 *)(entry + 0x2010);
                return;
            }
            *arg1 = (s32 *)D_8014AED8;
        }
    }
}

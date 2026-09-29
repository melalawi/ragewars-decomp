#include "basetypes.h"

extern s32 D_800D2AE0;
extern s32 D_8014AEC8;
extern u8 D_8014AEB0;
extern s32 D_8014AECC;
extern s32 D_8014AED8;

typedef struct func_802956AC_S1 func_802956AC_S1;
typedef struct func_802956AC_S2 func_802956AC_S2;
struct func_802956AC_S1 {
    char pad0[0x21A0];
    s32 unk21A0;
};
struct func_802956AC_S2 {
    char pad0[0x2010];
    s32 unk2010;
};

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
            var_v1_2 = (((func_802956AC_S1 *)(state))->unk21A0 % 10) < 3;
        } else {
            var_v1_2 = 1;
        }
        entry = (char *)&D_8014AECC;
        if (arg0 == *(s32 *)entry) {
            if (var_v1_2 != 0) {
                *arg1 = &((func_802956AC_S2 *)(entry))->unk2010;
                return;
            }
            *arg1 = (s32 *)D_8014AED8;
        }
    }
}

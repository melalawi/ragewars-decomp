#include "basetypes.h"

extern s32 D_800D2AE0;
extern u8 D_8014AEB0;
extern char D_8014AEC8[];
typedef struct {
    s32 value;
    char pad4[12];
} Selection;
extern Selection D_8014AECC;
extern s32 *D_8014AED4;

typedef struct func_802955EC_S1 func_802955EC_S1;
struct func_802955EC_S1 {
    char pad0[0x10];
    s32 unk10;
};

void func_802955EC(s32 arg0, s32 **arg1) {
    s32 enabled;
    s32 choose;

    if ((D_800D2AE0 != 0) && (*arg1 != 0) && (*(s32 *)&D_8014AEC8[0] == 0)) {
        enabled = 0;
        if (D_8014AEB0 != 0) {
            enabled = (u32)D_800D2AE0 > 0U;
        }
        if (enabled != 0) {
            choose = (*(s32 *)&D_8014AEC8[0x21A0] % 10) < 3;
        } else {
            choose = 1;
        }
        if (arg0 == D_8014AECC.value) {
            if (choose != 0) {
                *arg1 = &((func_802955EC_S1 *)(&D_8014AECC))->unk10;
                return;
            }
            *arg1 = D_8014AED4;
        }
    }
}

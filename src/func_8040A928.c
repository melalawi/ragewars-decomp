/* Selects a menu string and replaces its eleven-byte suffix for the current mode. */
#include "basetypes.h"
typedef struct { char pad[0x14]; u8 **unk14; } Menu;
extern s8 D_80153720[]; extern s32 D_80153774; extern u8 *D_800D77FC[], *D_800D7804[]; extern u8 *D_800D7A24, *D_800D7A28[], *D_800D7A3C[], *D_800D7A44, *D_800D7A48[]; s32 func_80442158(void);
s32 func_8040A928(Menu *arg0) {
    s32 var_v1;
    u8 *var_s0;
    u8 *var_s1;
    u8 temp_v0;

    if (D_80153774 != 0) {
        arg0->unk14 = D_800D77FC;
    } else {
        arg0->unk14 = D_800D7804;
        switch (D_80153720[0]) {
        case 0: case 1: case 4: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13:
        default:
            var_s1 = D_800D7A24;
            break;
        case 5:
            var_s1 = *D_800D7A28;
            break;
        case 3:
            var_s1 = *D_800D7A3C;
            break;
        case 2:
            var_s1 = D_800D7A44;
            break;
        case 14:
            var_s1 = *D_800D7A48;
            break;
        }
        var_s0 = *arg0->unk14;
        var_s0 = var_s0 + (func_80442158() - 0xB);
        var_v1 = 0;
        do {
            temp_v0 = *var_s1;
            var_s1 += 1;
            var_v1 += 1;
            *var_s0 = temp_v0;
            var_s0 += 1;
        } while (var_v1 < 0xB);
    }
    return 0;
}

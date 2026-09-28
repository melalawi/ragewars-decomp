/* Sets up pointer in arg0->unk14 based on game state and copies data. */

#include "basetypes.h"

s32 func_80442158(void);

extern u8 D_80152789;
extern s8 D_80153720;
extern s32 D_80153774;
extern void *D_800E2994;
extern void *D_800E29B4;
extern u8 *D_800E3234[4];
extern u8 *D_800E3244[0x14];
extern u8 *D_800E3294[8];
extern u8 *D_800E32B4[4];
extern u8 *eu_D_800E32C4[0x24];

s32 func_8040AC68(void *arg0) {
    u8 *temp_s0;
    s32 var_v1;
    u8 *var_s0;
    u8 *var_s1;
    u8 temp_v0;

    if (D_80153774 != 0) {
        *(void **)((u32)arg0 + 0x14) = &D_800E2994;
    } else {
        *(void **)((u32)arg0 + 0x14) = &D_800E29B4;
        switch (D_80153720) {
        case 0:
        default:
            var_s1 = D_800E3234[D_80152789];
            break;
        case 5:
            var_s1 = D_800E3244[D_80152789];
            break;
        case 3:
            var_s1 = D_800E3294[D_80152789];
            break;
        case 2:
            var_s1 = D_800E32B4[D_80152789];
            break;
        case 14:
            var_s1 = eu_D_800E32C4[D_80152789];
            break;
        }
        temp_s0 = *(u8 **)((u32)(*(void **)((u32)arg0 + 0x14)) + (D_80152789 * 4));
        var_s0 = temp_s0 + (func_80442158() - 0xB);
        var_v1 = 0;
        do {
            temp_v0 = *var_s1;
            var_s1++;
            var_v1++;
            *var_s0 = temp_v0;
            var_s0++;
        } while (var_v1 < 0xB);
    }
    return 0;
}

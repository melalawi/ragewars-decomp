/* Select the status text and right-align its nonblank characters. */
#include "basetypes.h"
#define NULL ((void *)0)
typedef struct { char pad[0x14]; s32 *unk14; } Obj;
s32 func_80442158(void *);                            /* extern */
extern u8 D_80153724[];
extern u8 D_8015372B;
extern s32 D_80153774;
extern s32 D_800D77F8;                 /* const */
extern s32 D_800D7800;                 /* const */

s32 func_8040A83C(Obj *arg0) {
    s8 *temp_s0;
    s8 *temp_s0_2;
    s32 var_s1;
    s32 var_v1;
    s32 space;
    s32 var_v1_2;
    s8 *var_v0;
    u8 *var_a1;
    u8 *var_s0;
    u8 temp_v0;

    var_s1 = 8;
    if (D_80153774 != 0) {
        arg0->unk14 = &D_800D77F8;
    } else {
        arg0->unk14 = &D_800D7800;
        var_a1 = &D_8015372B;
        while (*var_a1-- == 0x20 && var_s1 != 0) var_s1--;
        temp_s0 = *arg0->unk14;
        temp_s0 = temp_s0 + (func_80442158(arg0) - 8);
        space = 0x20;
        var_v1 = 7;
        var_v0 = temp_s0 + 7;
        do {
            *var_v0 = space;
            var_v1 -= 1;
            var_v0 -= 1;
        } while (var_v1 >= 0);
        temp_s0 = temp_s0 + (8 - var_s1);
        var_v1_2 = 0;
        if (var_s1 > 0) {
            do {
                temp_v0 = D_80153724[var_v1_2];
                var_v1_2 += 1;
                *(u8 *)temp_s0 = temp_v0;
                temp_s0 += 1;
            } while (var_v1_2 < var_s1);
        }
    }
    return 0;
}

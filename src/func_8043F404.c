/* Adjusts a typed menu variable by its step for directional input, clamps it to its bounds and writes it through its accessor. */
#include "basetypes.h"
typedef struct { int unk0; unsigned int unk4; float unk8,unkC,unk10; int unk14; void *(*unk18)(); } Variable;
typedef struct { char pad[0x14]; Variable *unk14; } Menu;
typedef struct { char pad[0x20]; int unk20; } Input;
s32 func_802643A8(s32);                             /* extern */
s32 func_802643C0(s32);                             /* extern */

s32 func_8043F404(Menu *arg0, Input *arg1) {
    void *temp_a0_2;
    void *temp_v1;
    f32 temp_v0;
    f32 var_f0;
    f32 var_f20;
    f64 var_f1;
    s32 var_condition_bit;
    u32 temp_a0;
    u32 temp_v1_2;
    Variable *temp_s0;
    Variable *temp_s0_2;

    temp_s0 = arg0->unk14;
    temp_v1 = temp_s0->unk18();
    temp_a0 = temp_s0->unk4;
    switch (temp_a0) {                              /* switch 1 */
    default:                                        /* switch 1 */
        var_f20 = 0.0f;
        break;
    case 0:                                         /* switch 1 */
        var_f20 = *(float *)temp_v1;
        break;
    case 3:                                         /* switch 1 */
        var_f20 = (f32) *(signed char *)temp_v1;
        break;
    case 4:                                         /* switch 1 */
        var_f20 = (f32) *(short *)temp_v1;
        break;
    case 1:                                         /* switch 1 */
    case 2:                                         /* switch 1 */
    case 5:                                         /* switch 1 */
        var_f20 = (f32) *(int *)temp_v1;
        break;
    case 6:                                         /* switch 1 */
        var_f20 = (f32) *(unsigned char *)temp_v1;
        break;
    case 7:                                         /* switch 1 */
        var_f20 = (f32) *(unsigned short *)temp_v1;
        break;
    case 8:                                         /* switch 1 */
        var_f20 = (float)*(unsigned int *)temp_v1;
        break;
    }
    if (func_802643A8(arg1->unk20) != 0) {
        var_f20 -= temp_s0->unk10;
        if (var_f20 < temp_s0->unk8) var_f20 = temp_s0->unk8;
    } else if (func_802643C0(arg1->unk20) != 0) {
        var_f20 += temp_s0->unk10;
        if (var_f20 > temp_s0->unkC) var_f20 = temp_s0->unkC;
    }
    temp_s0_2 = arg0->unk14;
    temp_a0_2 = temp_s0_2->unk18(arg0);
    temp_v1_2 = temp_s0_2->unk4;
    switch (temp_v1_2) {
    case 0: *(float *)temp_a0_2 = var_f20; break;
    case 3: *(signed char *)temp_a0_2 = (int)var_f20; break;
    case 4: *(short *)temp_a0_2 = (int)var_f20; break;
    case 1: case 2: case 5: *(int *)temp_a0_2 = var_f20; break;
    case 6: *(unsigned char *)temp_a0_2 = (unsigned int)var_f20; break;
    case 7: *(unsigned short *)temp_a0_2 = (unsigned int)var_f20; break;
    case 8: *(unsigned int *)temp_a0_2 = var_f20; break;
    }
    return 0;
}

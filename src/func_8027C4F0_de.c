#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"
/* Picks an animation slot from a global mode, then plays the slot's effect, spawns its object at the owner or a fixed position, plays its sound, and flags the owner. Adapted from func_8027C9CC_de, with the slot chosen by a switch on D_801042C4 (the extra case below 7 that shares the default body is needed for the decision tree; its value is not recoverable), the constant triple, one argument, the dropped func_80271F9C_de call, and the final test changed. */





extern Triple D_801002B8;
extern Triple D_801002C8;
extern char D_8011D8D0;

extern void func_80265E10_de(void *, void *, s32, s32, Triple, struct Shape_func_802764D4_de_2);
extern void func_80271818_de(struct Shape_typemap_165 *, Triple *);
extern s32 func_802800C0_de(void *, void *, void *, s32, s32, s32, Triple, struct Shape_typemap_165, Triple, s32, s32, s32);
extern s32 func_8025DE54_de(s16, s32, s32, s32, s32, s32);
extern void func_80284570_de(void *, void *);
extern s32 func_80284434_de(void *);









void func_8027C4F0_de(void *arg0) {
    struct Shape_func_802764D4_de_2 pair;
    struct Shape_typemap_165 rotation;
    Triple position;
    s32 temp_a1;
    s32 temp_v0;
    s32 var_a0;
    s32 temp_a2;
    s32 temp_s2;
    s32 sound;
    void *temp_s1;
    void *temp_v0_2;
    void *temp_v1;

    switch (D_801002C4) {
    case 1:
    default:
        var_a0 = 1;
        break;
    case 7:
        var_a0 = 7;
        break;
    case 8:
        var_a0 = 8;
        break;
    }
    temp_s1 = ((func_8027C5A0_S1 *)(arg0))->unk118.v0;
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_802066A4_S3 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_8027C324_S3 *)(temp_v1))->unk70;
    temp_a2 = ((func_8027C324_S3 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(struct Shape_func_802764D4_de_2 *)temp_v0_2;
    sound = ((func_8027C324_S3 *)((( func_802066A4_S3 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E10_de(arg0, arg0, temp_a2, -1, D_801002B8, pair);
    }
    if (temp_s2 != 0xFFFF) {
        if ((*((func_8027C5A0_S1 *)(arg0))->unk118.v1 & 0x10) != 0) {
            position = D_801002C8;
        } else {
            position = ((func_8027C5A0_S1 *)(arg0))->unk1C;
        }
        func_80271818_de(&rotation, &position);
        func_802800C0_de(&D_8011D8D0, arg0,
                      ((func_8027C5A0_S1 *)(arg0))->unk12C,
                      ((func_8027C5A0_S1 *)(arg0))->unk130,
                      ((func_8027C5A0_S1 *)(arg0))->unk134, temp_s2,
                      position, rotation, D_801002B8, 0,
                      -5,
                      (((func_8027C5A0_S1 *)(arg0))->unk5C & 0x200006) | 1);
    }
    if (sound != 0xFFFF) {
        func_8025DE54_de((s16)sound, D_801002B8.x,
                      D_801002B8.y, D_801002B8.z, 0, -1);
    }
    ((func_8027C5A0_S1 *)(arg0))->unk5C |= 0x200;
    if ((*((func_8027C5A0_S1 *)(arg0))->unk118.v1 & 0x20000) != 0) {
        func_80284570_de(&D_8011D8D0, arg0);
        func_80284434_de(arg0);
    }
}

#include "common/types.h"
#include "span_1000/code_80279764.h"
#include "span_1000/types.h"
#include "types.h"




extern Triple D_801002A8;
extern Triple D_801002C8;
extern char D_8011D8D0;

extern s32 func_802757E4_de(s32);
extern s32 func_80276088_de(s32);
extern s32 func_80276054_de(s32);
extern void func_80265E10_de(void *, void *, s32, s32, Triple, struct Shape_func_802764D4_de_2);
extern void func_80271818_de(struct Shape_typemap_165 *, Triple *);
extern s32 func_802800C0_de(void *, void *, void *, s32, s32, s32, Triple, struct Shape_typemap_165, Triple, s32, s32, s32);
extern s32 func_8025DE54_de(s16, s32, s32, s32, s32, s32);
extern void func_80271F9C_de(void *, void *, s32);
extern void func_80284570_de(void *, void *);
extern s32 func_80284434_de(void *);









void func_8027C758_de(void *arg0) {
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

    if (func_802757E4_de(0) != 0) {
        var_a0 = func_80276088_de(0);
    } else {
        var_a0 = func_80276054_de(0);
    }
    if (var_a0 == 10) {
        var_a0 = 0;
    }
    temp_s1 = ((func_8027C808_S1 *)(arg0))->unk118.v0;
    temp_a1 = var_a0 * 2;
    temp_v0 = ((func_802066A4_S3 *)(temp_s1))->unk18;
    temp_v1 = (char *)temp_v0 + temp_a1;
    temp_s2 = ((func_8027C324_S3 *)(temp_v1))->unk70;
    temp_a2 = ((func_8027C324_S3 *)(temp_v1))->unk8C;
    temp_v0_2 = (char *)temp_v0 + (var_a0 * 8);
    pair = *(struct Shape_func_802764D4_de_2 *)temp_v0_2;
    sound = ((func_8027C324_S3 *)((( func_802066A4_S3 *)temp_s1)->unk18 + temp_a1))->unkA8;
    if (temp_a2 != 0xFFFF) {
        func_80265E10_de(arg0, arg0, temp_a2, -1, D_801002A8, pair);
    }
    if (temp_s2 != 0xFFFF) {
        if ((*((func_8027C808_S1 *)(arg0))->unk118.v1 & 0x10) != 0) {
            position = D_801002C8;
        } else {
            position = ((func_8027C808_S1 *)(arg0))->unk1C;
        }
        func_80271818_de(&rotation, &position);
        func_802800C0_de(&D_8011D8D0, arg0,
                      ((func_8027C808_S1 *)(arg0))->unk12C,
                      ((func_8027C808_S1 *)(arg0))->unk130,
                      ((func_8027C808_S1 *)(arg0))->unk134, temp_s2,
                      position, rotation, D_801002A8, 0,
                      -3,
                      (((func_8027C808_S1 *)(arg0))->unk5C & 0x200006) | 1);
    }
    if (sound != 0xFFFF) {
        func_8025DE54_de((s16)sound, D_801002A8.x,
                      D_801002A8.y, D_801002A8.z, 0, -1);
    }
    func_80271F9C_de(&((func_8027C808_S1 *)(arg0))->unk18C, &((func_8027C808_S1 *)(arg0))->unk18C,
                  ((func_8027C808_S1 *)(arg0))->unk1C4);
    ((func_8027C808_S1 *)(arg0))->unk5C |= 0x200;
    if (((func_8027C808_S1 *)(arg0))->unk1BA == 1) {
        func_80284570_de(&D_8011D8D0, arg0);
        func_80284434_de(arg0);
    }
}

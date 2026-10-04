#include "common/types.h"
#include "span_1000/code_8027ED40.h"
#include "types.h"





extern Vec3 D_801002C8;
extern Triple D_801002A8;
extern char D_8011D8D0;

extern void func_80271818_de(Vector4f *, Vec3 *);
extern void func_802800C0_de(void *, void *, void *, s32, s32, s32,
                          Vec3, Vector4f, Triple, s32, s32, s32);




void func_802836D0_de(void *arg0, s32 arg1) {
    Vector4f rotation;
    Vec3 position;

    if ((*((func_802836A4_S1 *)(arg0))->unk118 & 0x10) != 0) {
        position = D_801002C8;
    } else {
        position = ((func_802836A4_S1 *)(arg0))->unk1C;
    }
    func_80271818_de(&rotation, &position);
    func_802800C0_de(&D_8011D8D0, arg0,
                  ((func_802836A4_S1 *)(arg0))->unk12C,
                  ((func_802836A4_S1 *)(arg0))->unk130,
                  ((func_802836A4_S1 *)(arg0))->unk134, arg1,
                  position, rotation, D_801002A8, 0, -2,
                  (((func_802836A4_S1 *)(arg0))->unk5C & 0x200006) | 1);
}

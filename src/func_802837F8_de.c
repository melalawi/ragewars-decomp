#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8028308C.h"
#include "types.h"





extern Vec3 D_801042C8;
extern Triple D_801002B8;
extern char D_8011D8D0;

extern void func_80271818_de(struct Shape_typemap_165 *, Vec3 *);
extern s32 func_802800C0_de(void *, void *, void *, s32, s32, s32,
                         Vec3, struct Shape_typemap_165, Triple, s32, s32, s32);




void func_802837F8_de(void *arg0, s32 arg1) {
    struct Shape_typemap_165 rotation;
    Vec3 position;

    if (*((func_802836A4_S1 *)(arg0))->unk118 & 0x10) {
        position = D_801042C8;
    } else {
        position = ((func_802836A4_S1 *)(arg0))->unk1C;
    }
    func_80271818_de(&rotation, &position);
    func_802800C0_de(&D_8011D8D0, arg0,
                  ((func_802836A4_S1 *)(arg0))->unk12C,
                  ((func_802836A4_S1 *)(arg0))->unk130,
                  ((func_802836A4_S1 *)(arg0))->unk134, arg1,
                  position, rotation, D_801002B8, 0, -5,
                  (((func_802836A4_S1 *)(arg0))->unk5C & 0x200006) | 1);
}

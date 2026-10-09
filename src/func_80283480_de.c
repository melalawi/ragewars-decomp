#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "span_1000/code_8028308C.h"
#include "types.h"





extern Triple D_801042C8;
extern Params D_80100290;
extern char D_8011D8D0;

extern void func_80271818_de(struct Shape_typemap_165 *out, Triple *in);
extern s32 func_802800C0_de(void *, void *, void *, s32, s32, s32, Triple, struct Shape_typemap_165, Triple, s32, s32, s32);




void func_80283480_de(void *arg0, s32 arg1) {
    struct Shape_typemap_165 q;
    Triple pos;

    if ((*((func_80283454_S1 *)(arg0))->unk118 & 0x10) != 0) {
        pos = D_801042C8;
    } else {
        pos = ((func_80283454_S1 *)(arg0))->unk1C;
    }
    func_80271818_de(&q, &pos);
    func_802800C0_de(&D_8011D8D0, arg0,
                  ((func_80283454_S1 *)(arg0))->unk12C,
                  ((func_80283454_S1 *)(arg0))->unk130,
                  ((func_80283454_S1 *)(arg0))->unk134, arg1,
                  pos, q, D_80100290.v, 0, D_80100290.w,
                  (((func_80283454_S1 *)(arg0))->unk5C & 0x200006) | 1);
}

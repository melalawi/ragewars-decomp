#include "common/types_06e4f7ef1f9e.h"
#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802106E0.h"
#include "types.h"
extern s32 func_802744D4_de(void);









void func_802123FC_eu(void *arg0) {
    void *level1 = ((func_8020A028_S3 *)(arg0))->unk1D8;
    void *inner = ((func_80212828_S2 *)(level1))->unk1454;
    s32 r1, r2;

    ((func_802123DC_S3 *)(inner))->unk220 = 0;
    func_80209988_de(inner);

    r1 = func_802744D4_de();
    ((func_802123DC_S3 *)(inner))->unk2D8 = r1 % 4 + 0xC;

    r2 = func_802744D4_de();
    ((func_802123DC_S3 *)(inner))->unk2DC = r2 % 2;
}

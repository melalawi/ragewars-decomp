#include "common/types_1dc8418c21db.h"
#include "span_166000/code_80426310.h"
#include "types.h"
/* Points arg0's unk14 field at the entry of D_44FB94 that D_80154030 selects when it is below 12, else at D_800D7E14, and returns 0. */





extern u32 D_8014DDA0;
extern Entry_func_8043CF44_de D_0044EF44[];
extern char D_800D3DE8;

s32 func_8043CF44_de(func_80254D70_S1 *arg0) {
    if (D_8014DDA0 < 12) {
        arg0->unk14 = D_0044EF44[D_8014DDA0].ptr;
    } else {
        arg0->unk14 = &D_800D3DE8;
    }
    return 0;
}

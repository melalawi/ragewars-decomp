#include "common/types_1dc8418c21db.h"
#include "span_16E000/code_80409A88.h"
#include "types.h"

/* Points offset 0x14 of a record at D_800D7794 when D_8015375C is set, and returns zero. */


extern s32 D_8014D4CC;
extern char D_800D3768[];

s32 func_8040A458_de(struct func_80254D70_S1 *record) {
    if (D_8014D4CC != 0) {
        record->unk14 = D_800D3768;
    }
    return 0;
}

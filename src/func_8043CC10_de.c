#include "common/types_1dc8418c21db.h"
#include "span_166000/code_80426310.h"
#include "types.h"
#if defined(VERSION_EU) || defined(VERSION_EU_X)
extern u8 D_80152789;
#endif
#include "types.h"
/* Shifts the input history, appends the current byte, and advances the history counters. */





extern s32 D_8014DDA0;
extern Entry_func_8043CC10_de D_800E1C50;

s32 func_8043CC10_de(Obj_func_8043CC10_de *arg0) {
    s32 index;
    s32 count;

    D_8014DDA0 = -1;
    D_800E1C50.timer = 0;
    if (D_800E1C50.count == 0x16) {
        return 0;
    }
    index = 0x16;
    if (D_800E1C50.value < 0x16) {
        do {
            D_800E1C50.text[index] = D_800E1C50.text[index - 1];
            index--;
        } while (D_800E1C50.value < index);
    }
    D_800E1C50.text[D_800E1C50.value] =
#if defined(VERSION_EU) || defined(VERSION_EU_X)
        *arg0->unk14[D_80152789];
#else
        **arg0->unk14;
#endif
    count = D_800E1C50.count + 1;
    D_800E1C50.value++;
    D_800E1C50.count = count;
    D_800E1C50.text[count] = 0;
    return 0;
}

/* Shifts the input history, appends the current byte, and advances the history counters. */
#include "basetypes.h"

typedef struct {
    s32 value;
    s32 timer;
    s32 count;
    u8 text[1];
} Entry;

typedef struct {
    char pad[0x14];
    u8 **unk14;
} Obj;

extern s32 D_80154030;
extern Entry D_800E5CA0;

s32 func_8043CDF0(Obj *arg0) {
    s32 index;
    s32 count;

    D_80154030 = -1;
    D_800E5CA0.timer = 0;
    if (D_800E5CA0.count == 0x16) {
        return 0;
    }
    index = 0x16;
    if (D_800E5CA0.value < 0x16) {
        do {
            D_800E5CA0.text[index] = D_800E5CA0.text[index - 1];
            index--;
        } while (D_800E5CA0.value < index);
    }
    D_800E5CA0.text[D_800E5CA0.value] = **arg0->unk14;
    count = D_800E5CA0.count + 1;
    D_800E5CA0.value++;
    D_800E5CA0.count = count;
    D_800E5CA0.text[count] = 0;
    return 0;
}

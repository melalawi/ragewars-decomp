#include "span_1000/code_8025A3EC.h"
#include "types.h"
#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"

/* Returns whether any of the sixteen occupied slots of a record, other than the one its header marks as local, holds the given value at slot offset 0xA8. */







s32 func_8025BA4C_de(Record_func_8025BA4C_de *record, s32 value) {
    s32 i;
    Slot_func_8025BA4C_de *slot = record->slots;

    for (i = 0; i < 16; i++, slot++) {
        if (slot->used != -1 && record->header->local != i && slot->value == value) {
            return 1;
        }
    }
    return 0;
}

extern void func_802B2F00_de(void *arg0, s16 arg1);
extern s32 func_802B2620_de(void *arg0);
extern void func_802B2F60_de(void *arg0);

void func_8025BA9C_de(s32 arg0, s16 arg1) {
    s32 base;
    s32 a0;
    void *s1;

    base = (arg1 * 0xCC) + arg0;
    base = base + 4;
    a0 = ((struct IntegerStateB4 *) base)->unk_B0;
    ((struct IntegerStateB4 *) base)->unk_AC = 1;
    ((struct IntegerStateB4 *) base)->unk_50 = 0;
    s1 = (void *)(a0 + 0x84);
    if (((struct IntegerStateB4 *) base)->unk_10 != ((struct func_80245A10_S1 *) a0)->unk104) {
        s32 idx = ((struct IntegerStateB4 *) base)->unk_0;
        s32 addr = a0 + idx * 2;
        func_802B2F00_de(s1, ((struct func_8025C458_S3 *) addr)->unkDC);
        if (func_802B2620_de(s1) != 0) {
            func_802B2F60_de(s1);
        }
        ((struct IntegerStateB4 *) base)->unk_4 = -1;
    }
}

void func_8025BB3C_de(s32 a) {
    s32 var_v0;
    void *var_a0;
    var_a0 = a + 4;
    var_v0 = 0x10;
    do {
        (((struct Access_s32_50 *) ((s8 *) var_a0))->field) = 0;
        var_v0 -= 1;
        var_a0 += 0xCC;
    } while (var_v0 >= 0);
}

void func_8025BB5C_de(void *arg0, void *arg1, int arg2) {
    ((func_8025BB7C_S1 *)(arg0))->unk44 = *(Triple *)arg1;
    ((func_8025BB7C_S1 *)(arg0))->unk50 = arg2;
}

void func_8025BB7C_de(void *arg0, int arg1) {
    ((func_8025BB9C_S1 *)(arg0))->unkA8 = arg1;
}

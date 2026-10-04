#include "span_1000/code_80283D24.h"
#include "span_1000/types.h"
#include "types.h"








void func_80284FF4_de(void *arg0, s32 arg1, void *arg2) {
    f32 temp_f2;
    s32 count;
    u16 v;
    s8 *record;

    ((func_8024C864_S1 *)(arg2))->unk0 = 0.0f;
    ((func_8024C864_S1 *)(arg2))->unk4 = 0.0f;
    ((func_8024C864_S1 *)(arg2))->unk8 = 0.0f;
    record = ((func_802831FC_S1 *)(arg0))->unkFC3C;
    count = 0;
    if (record != 0) {
        do {
            v = ((func_80284FC8_S3 *)(record))->unk4;
            if (((v == 0x41E) || (v == 0x3EF)) &&
                (((func_80284FC8_S3 *)(record))->unk12C == arg1) &&
                (((func_80284FC8_S3 *)(record))->unk5C & 0x100)) {
                ((func_8024C864_S1 *)(arg2))->unk0 += ((func_80284FC8_S3 *)(record))->unk8;
                ((func_8024C864_S1 *)(arg2))->unk4 += ((func_80284FC8_S3 *)(record))->unkC;
                count += 1;
                ((func_8024C864_S1 *)(arg2))->unk8 += ((func_80284FC8_S3 *)(record))->unk10;
            }
            record = ((func_80284FC8_S3 *)(record))->unk1EC;
        } while (record != 0);
    }
    if (count != 0) {
        temp_f2 = (f32)count;
        ((func_8024C864_S1 *)(arg2))->unk0 = (f32)(((func_8024C864_S1 *)(arg2))->unk0 / temp_f2);
        ((func_8024C864_S1 *)(arg2))->unk4 = (f32)(((func_8024C864_S1 *)(arg2))->unk4 / temp_f2);
        ((func_8024C864_S1 *)(arg2))->unk8 = (f32)(((func_8024C864_S1 *)(arg2))->unk8 / temp_f2);
    }
}

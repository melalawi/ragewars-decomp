#include "span_1000/code_8025A3EC.h"
#include "common/types_8fd754e1e915.h"
#include "common/unused.h"
#if defined(VERSION_EU)
#define func_802B2350 func_802AD520_eu
#else
#define func_802B2350 func_802AD280_de
#endif
#include "span_1000/code_8025A3EC.h"







extern void func_80259C5C_de(void *arg0, void *arg1, s32 arg2);
extern void func_80259F68_de(void *arg0, void *arg1, s32 arg2);
extern void *func_80258BF4_de(void *arg0, s32 arg1);
extern s32 func_80258D2C_de(void *arg0);
extern s16 func_80259B10_de(void *arg0, s32 arg1);
extern f32 func_802B2350(s32 arg0);

void func_8025BB84_de(void *arg0, void *arg1, s32 arg2) {
    f32 first;
    s16 index;
    s16 value;
    void *record;

    func_80259C5C_de(arg0, arg1, arg2);
    func_80259F68_de(arg0, arg1, arg2);
    ((func_8025BBA4_S1 *)(arg0))->unk28 = 0x40;
    index = ((func_8021C9B4_S3 *)(arg1))->unkC;
    if (index != -1) {
        record = func_80258BF4_de(((func_8025BBA4_S1 *)(arg0))->unkB0, index);
        ((func_8025BBA4_S1 *)(arg0))->unk8C = *(Block12 *)record;
        first = func_802B2350(((func_8025BBA4_S3 *)(arg0))->unk8E);
        ((func_8025BBA4_S1 *)(arg0))->unk9C =
            (first - func_802B2350(((func_8025BBA4_S3 *)(arg0))->unk90)) /
            ((func_8025BBA4_S3 *)(arg0))->unk92;
        ((func_8025BBA4_S1 *)(arg0))->unk98 =
            func_802B2350(((func_8025BBA4_S3 *)(arg0))->unk8E);
        ((func_8025BBA4_S1 *)(arg0))->unk28 =
            (s16)(s32)func_802B2350(((func_8025BBA4_S3 *)(arg0))->unk8E);
        ((func_8025BBA4_S1 *)(arg0))->unk88 = 1;
        return;
    }

    ((func_8025BBA4_S1 *)(arg0))->unk88 = 0;
    if (((func_8025BBA4_S1 *)(arg0))->unkA8 < 0x100) {
        if (((func_8025BBA4_S1 *)(arg0))->unkC0 == 0 &&
            func_80258D2C_de(((func_8025BBA4_S1 *)(arg0))->unkB0) != 0) {
            value = ((func_8025BBA4_S4 *)(((func_8025BBA4_S1 *)(arg0))->unkB0))->unk2B94;
            goto store_value;
        }
    } else if (((func_8025BBA4_S1 *)(arg0))->unkC0 == 0 &&
               func_80258D2C_de(((func_8025BBA4_S1 *)(arg0))->unkB0) != 0) {
        value = func_80259B10_de(&((func_8025BBA4_S1 *)(arg0))->unk44,
            ((func_8025BBA4_S4 *)(((func_8025BBA4_S1 *)(arg0))->unkB0))->unk2B98);
store_value:
        ((func_8025BBA4_S1 *)(arg0))->unk28 = value;
    }
}

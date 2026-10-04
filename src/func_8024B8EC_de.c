#include "span_1000/code_8024B644.h"
#include "span_1000/types.h"
#include "types.h"

extern s32 D_800CD72C;
extern void func_8024AA18_de(void *arg0, void *arg1, void *arg2);
extern void func_8024C454_de(void *arg0, void *arg1);
extern void func_8026DA4C_de();






void func_8024B8EC_de(void *arg0, void *arg1, void *arg2) {
    s8 index;
    s32 one;

    index = ((func_8024B8DC_S1 *)(arg0))->unk1;
    if (index != -1) {
        ((func_8024B8DC_S1 *)(arg0))->unk17C = 1 << index;
        if (((func_8024B8DC_S2 *)(arg2))->unk4 != 0) {
            func_8024AA18_de(arg0, arg1, arg2);
        }
        if (*(s32 *)arg2 != 0) {
            one = 1;
            func_8026DA4C_de(((func_8024B8DC_S2 *)(arg2))->unkC,
                          ((func_8024B8DC_S1 *)(arg0))->unkB4, one,
                          (char *)arg0
                              + ((((D_800CD72C << one) + D_800CD72C) << 3)
                                 + 0x140),
                          0, ((func_8024B8DC_S1 *)(arg0))->unk3);
            func_8024C454_de(arg0, arg2);
        }
    }
}

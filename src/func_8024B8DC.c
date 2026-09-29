#include "basetypes.h"

extern s32 D_800D297C;
extern void func_8024AA08(void *arg0, void *arg1, void *arg2);
extern void func_8024C444(void *arg0, void *arg1);
extern void func_8026DA4C();

typedef struct func_8024B8DC_S1 func_8024B8DC_S1;
typedef struct func_8024B8DC_S2 func_8024B8DC_S2;
struct func_8024B8DC_S1 {
    char pad0[0x1];
    s8 unk1;
    char pad1[0x3 - 0x1 - sizeof(s8)];
    s8 unk3;
    char pad3[0xB4 - 0x3 - sizeof(s8)];
    s32 unkB4;
    char padB4[0x17C - 0xB4 - sizeof(s32)];
    s32 unk17C;
};
struct func_8024B8DC_S2 {
    char pad0[0x4];
    s32 unk4;
    char pad4[0xC - 0x4 - sizeof(s32)];
    s32 unkC;
};

void func_8024B8DC(void *arg0, void *arg1, void *arg2) {
    s8 index;
    s32 one;

    index = ((func_8024B8DC_S1 *)(arg0))->unk1;
    if (index != -1) {
        ((func_8024B8DC_S1 *)(arg0))->unk17C = 1 << index;
        if (((func_8024B8DC_S2 *)(arg2))->unk4 != 0) {
            func_8024AA08(arg0, arg1, arg2);
        }
        if (*(s32 *)arg2 != 0) {
            one = 1;
            func_8026DA4C(((func_8024B8DC_S2 *)(arg2))->unkC,
                          ((func_8024B8DC_S1 *)(arg0))->unkB4, one,
                          (char *)arg0
                              + ((((D_800D297C << one) + D_800D297C) << 3)
                                 + 0x140),
                          0, ((func_8024B8DC_S1 *)(arg0))->unk3);
            func_8024C444(arg0, arg2);
        }
    }
}

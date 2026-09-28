#include "basetypes.h"

typedef struct {
    s32 words[6];
} Block24;

typedef struct {
    char pad[0x140];
    Block24 blocks[2];
} Object;

extern s32 D_800D297C;
extern void func_8024AA08(void *arg0, void *arg1, void *arg2);
extern void func_8024C444(void *arg0, void *arg1);
extern void func_8026DA4C();

void func_8024B980(void *arg0, void *arg1, void *arg2, Block24 *arg3) {
    s8 index;
    s32 one;

    ((Object *)arg0)->blocks[D_800D297C] = *arg3;
    index = *(s8 *)((char *)arg0 + 1);
    if (index != -1) {
        *(s32 *)((char *)arg0 + 0x17C) = 1 << index;
        if (*(s32 *)((char *)arg2 + 4) != 0) {
            func_8024AA08(arg0, arg1, arg2);
        }
        if (*(s32 *)arg2 != 0) {
            one = 1;
            func_8026DA4C(*(s32 *)((char *)arg2 + 0xC),
                          *(s32 *)((char *)arg0 + 0xB4), one,
                          (char *)arg0
                              + ((((D_800D297C << one) + D_800D297C) << 3)
                                 + 0x140),
                          0, *(s8 *)((char *)arg0 + 3));
            func_8024C444(arg0, arg2);
        }
    }
}

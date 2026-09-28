#include "basetypes.h"

extern f32 D_800C72C8;
extern f32 D_800C72CC;
extern f32 D_800C72D0;
extern f32 D_800C72D4;
extern s32 D_800CE240[];
extern s32 D_800CE348[];
extern f32 func_80274B00(f32, f32);
extern void func_8024DBB0(void *, s32, s32, s32, s32, f32);

void func_802170A0(void *arg0, s32 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 *entry;

    if ((arg1[0] & arg2) != 0) {
        return;
    }

    arg1[0] |= arg2;
    entry = D_800CE240;
    if (entry[0] != 0) {
        do {
            if ((arg3 & entry[0]) != 0) {
                func_8024DBB0(arg0,
                              *(s32 *)((char *)arg0 + 8),
                              *(s32 *)((char *)arg0 + 0xC),
                              *(s32 *)((char *)arg0 + 0x10),
                              entry[1],
                              func_80274B00(D_800C72C8, D_800C72CC));
            }
            entry += 2;
        } while (entry[0] != 0);
    }

    entry = D_800CE348;
    if (entry[0] != 0) {
        do {
            if ((arg4 & entry[0]) != 0) {
                func_8024DBB0(arg0,
                              *(s32 *)((char *)arg0 + 8),
                              *(s32 *)((char *)arg0 + 0xC),
                              *(s32 *)((char *)arg0 + 0x10),
                              entry[1],
                              func_80274B00(D_800C72D0, D_800C72D4));
            }
            entry += 2;
        } while (entry[0] != 0);
    }
}

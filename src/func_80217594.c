#include "basetypes.h"

extern f32 D_800C72DC;
extern f32 D_800C72E0;
extern f32 func_80274B00(f32, f32);
extern void func_8024DBB0(void *, s32, s32, s32, s32, f32);

void func_80217594(void *arg0, s32 unused1, s32 arg2, s32 *entry) {
    if (entry[0] != 0) {
        do {
            if ((arg2 & entry[0]) != 0) {
                func_8024DBB0(arg0,
                              *(s32 *)((char *)arg0 + 8),
                              *(s32 *)((char *)arg0 + 0xC),
                              *(s32 *)((char *)arg0 + 0x10),
                              entry[1],
                              func_80274B00(D_800C72DC, D_800C72E0));
            }
            entry += 2;
        } while (entry[0] != 0);
    }
}

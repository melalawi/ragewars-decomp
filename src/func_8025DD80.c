#include "basetypes.h"

extern f32 D_800C9120[];
extern f32 D_800C9128;

extern void func_802B3688(s32 arg0, s32 arg1);
extern void func_802B5000(s32 arg0, s32 arg1);
extern void func_802B4F80(s32 arg0, s32 arg1);
extern void func_802B4FB0(s32 arg0, s32 arg1, s8 arg2);
extern void func_802B5030(s32 arg0, s16 arg1);

void func_8025DD80(void *arg0) {
    s32 i;
    f32 scaled;

    i = 0;
    func_802B3688(*(s32 *)((char *)arg0 + 0x10), *(s32 *)((char *)arg0 + 0xC));
    func_802B5000(*(s32 *)((char *)arg0 + 0x14), *(s32 *)((char *)arg0 + 0x10));
    func_802B4F80(*(s32 *)((char *)arg0 + 0x14),
                  *(s32 *)((char *)*(void **)((char *)arg0 + 8) + 4));
    do {
        func_802B4FB0(*(s32 *)((char *)arg0 + 0x14), i & 0xFF, 0);
        i++;
    } while (i < 0x14);

    scaled = (f32)*(s32 *)((char *)arg0 + 0x24) *
             (*(f32 *)((char *)*(void **)arg0 + 0x2BA4) * D_800C9120[1]);
    func_802B5030(*(s32 *)((char *)arg0 + 0x14), (s16)(s32)(scaled * D_800C9128));
    *(f32 *)((char *)arg0 + 0x2C) = scaled;
}

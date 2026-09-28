#include "basetypes.h"

typedef struct {
    u8 bytes[12];
} Block12;

extern void func_80259C7C(void *arg0, void *arg1, s32 arg2);
extern void func_80259F88(void *arg0, void *arg1, s32 arg2);
extern void *func_80258C14(void *arg0, s32 arg1);
extern s32 func_80258D4C(void *arg0);
extern s16 func_80259B30(void *arg0, s32 arg1);
extern f32 func_802B2350(s32 arg0);

void func_8025BBA4(void *arg0, void *arg1, s32 arg2) {
    f32 first;
    s16 index;
    s16 value;
    void *record;

    func_80259C7C(arg0, arg1, arg2);
    func_80259F88(arg0, arg1, arg2);
    *(s16 *)((u8 *)arg0 + 0x28) = 0x40;
    index = *(s16 *)((u8 *)arg1 + 0xC);
    if (index != -1) {
        record = func_80258C14(*(void **)((u8 *)arg0 + 0xB0), index);
        *(Block12 *)((u8 *)arg0 + 0x8C) = *(Block12 *)record;
        first = func_802B2350(*(u16 *)((u8 *)arg0 + 0x8E));
        *(f32 *)((u8 *)arg0 + 0x9C) =
            (first - func_802B2350(*(u16 *)((u8 *)arg0 + 0x90))) /
            *(s16 *)((u8 *)arg0 + 0x92);
        *(f32 *)((u8 *)arg0 + 0x98) =
            func_802B2350(*(u16 *)((u8 *)arg0 + 0x8E));
        *(s16 *)((u8 *)arg0 + 0x28) =
            (s16)(s32)func_802B2350(*(u16 *)((u8 *)arg0 + 0x8E));
        *(s32 *)((u8 *)arg0 + 0x88) = 1;
        return;
    }

    *(s32 *)((u8 *)arg0 + 0x88) = 0;
    if (*(s32 *)((u8 *)arg0 + 0xA8) < 0x100) {
        if (*(s32 *)((u8 *)arg0 + 0xC0) == 0 &&
            func_80258D4C(*(void **)((u8 *)arg0 + 0xB0)) != 0) {
            value = *(s8 *)((u8 *)*(void **)((u8 *)arg0 + 0xB0) + 0x2B94);
            goto store_value;
        }
    } else if (*(s32 *)((u8 *)arg0 + 0xC0) == 0 &&
               func_80258D4C(*(void **)((u8 *)arg0 + 0xB0)) != 0) {
        value = func_80259B30((u8 *)arg0 + 0x44,
            *(s32 *)((u8 *)*(void **)((u8 *)arg0 + 0xB0) + 0x2B98));
store_value:
        *(s16 *)((u8 *)arg0 + 0x28) = value;
    }
}

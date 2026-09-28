#include "basetypes.h"

/** Store a new history slot (pointer + selected byte/word fields) into the ring buffer at arg0+0x60. */
void func_802B6B90(void *arg0, void *arg1, s32 arg2) {
    s32 stride = arg2 * 0x10;

    *(void **)((u8 *)(stride + *(s32 *)((u8 *)arg0 + 0x60))) = arg1;
    *(u8 *)((u8 *)(stride + *(s32 *)((u8 *)arg0 + 0x60)) + 7) = *(u8 *)((u8 *)arg1 + 1);
    *(u8 *)((u8 *)(stride + *(s32 *)((u8 *)arg0 + 0x60)) + 9) = *(u8 *)((u8 *)arg1 + 0);
    *(u8 *)((u8 *)(stride + *(s32 *)((u8 *)arg0 + 0x60)) + 8) = *(u8 *)((u8 *)arg1 + 2);
    *(u16 *)((u8 *)(stride + *(s32 *)((u8 *)arg0 + 0x60)) + 4) = *(u16 *)((u8 *)arg1 + 0xC);
}

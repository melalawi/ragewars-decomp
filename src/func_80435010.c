/* Advances the current player's name-entry character one step forward, defaulting an unset slot to 'A' and wrapping past 'Z' back to a space. */
#include "basetypes.h"

extern char *D_800E54A4;
extern void *func_8041B87C(s32, s32);

void func_80435010(s32 arg0) {
    char *base;
    char *entry;
    u8 value;
    s32 *index;
    char *flags;

    flags = D_800E54A4 + arg0 * 4;
    *(s32 *)(flags + 0x2C) = 0;
    func_8041B87C(*(s32 *)(D_800E54A4 + 4), arg0);
    index = (s32 *)((arg0 * 0xB68 + D_800E54A4) + 0xB9C);
    entry = (*index * 2 + arg0 * 0xB68) + D_800E54A4;
    if (*(u8 *)(entry + 0xB8C) == 0) {
        *(u8 *)(entry + 0xB8C) = 0x41;
    }
    base = arg0 * 0xB68 + D_800E54A4;
    entry = (*(s32 *)(base + 0xB9C) * 2 + arg0 * 0xB68) + D_800E54A4;
    value = *(u8 *)(entry + 0xB8C);
    value = value + 1;
    if (value >= 0x5B) {
        value = 0x20;
    }
    *(u8 *)(entry + 0xB8C) = value;
}

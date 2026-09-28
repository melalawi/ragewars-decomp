#include "basetypes.h"

/** Shift the trailing state-history slots down and clear the newest slot. */
void func_802644C8(void *arg0) {
    u8 *o = (u8 *)arg0;
    u8 t_c4;
    u8 t_c5;
    s32 t_b0;
    s32 t_18;
    s32 t_1c;
    s32 t_20;
    s32 t_24;
    s32 t_28;

    t_c4 = *(u8 *)(o + 0xC4);
    t_c5 = *(u8 *)(o + 0xC5);
    t_b0 = *(s32 *)(o + 0xB0);
    t_18 = *(s32 *)(o + 0x18);
    t_1c = *(s32 *)(o + 0x1C);
    t_20 = *(s32 *)(o + 0x20);
    t_24 = *(s32 *)(o + 0x24);
    t_28 = *(s32 *)(o + 0x28);
    *(s32 *)(o + 0x1C) = 0;
    *(s32 *)(o + 0x20) = 0;
    *(s32 *)(o + 0x24) = 0;
    *(s32 *)(o + 0x28) = 0;
    *(u8 *)(o + 0xC6) = t_c4;
    *(u8 *)(o + 0xC7) = t_c5;
    *(s32 *)(o + 0xAC) = t_b0;
    *(s32 *)(o + 0xB0) = t_18;
    *(s32 *)(o + 0xB4) = t_1c;
    *(s32 *)(o + 0xB8) = t_20;
    *(s32 *)(o + 0xBC) = t_24;
    *(s32 *)(o + 0xC0) = t_28;
}

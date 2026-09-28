#include "basetypes.h"

/* Resets an object to the given type, clearing its words and bytes, filling thirty-two four-byte slots with 0, 0, 0x30, 0, storing at offset 0 whether bit 3 of the type's D_8010FBE3 entry is clear, calling func_80285A94 on its two blocks at 0x140 and 0x16C and returning that word. Adapted from func_80263D10 with the type passed as an argument, the guard and final store removed and the word at offset 0 returned and the object taken directly as a char pointer changed. */
extern u8 D_8010FBE3[];
extern s32 func_80285A94(void *arg0, void *arg1, s32 arg2);

s32 func_8044BC58(char *o, s32 type) {
    s32 bit2;
    s32 i;

    i = 0;
    *(s8 *) (o + 4) = type;
    *(s32 *) (o + 0) = 0;
    *(s32 *) (o + 0xC8) = 0;
    *(s32 *) (o + 0xCC) = 0;
    *(s32 *) (o + 0x220) = 0;
    *(s32 *) (o + 8) = 0;
    *(s32 *) (o + 0xC) = 0;
    *(s32 *) (o + 0x10) = 0;
    *(s8 *) (o + 0xC4) = 0;
    *(s8 *) (o + 0xC5) = 0;
    *(s8 *) (o + 0xC6) = 0;
    *(s8 *) (o + 0xC7) = 0;
    *(s32 *) (o + 0x14) = 0;
    *(s32 *) (o + 0x18) = 0;
    *(s32 *) (o + 0x1C) = 0;
    *(s32 *) (o + 0x20) = 0;
    *(s32 *) (o + 0x24) = 0;
    *(s32 *) (o + 0x28) = 0;
    do {
        *(s8 *) (o + 0x2C + i * 4) = 0;
        *(s8 *) (o + 0x2D + i * 4) = 0;
        *(s8 *) (o + 0x2E + i * 4) = 0x30;
        *(s8 *) (o + 0x2F + i * 4) = 0;
        i += 1;
    } while (i < 0x20);
    bit2 = ((D_8010FBE3[type * 4] >> 3) ^ 1) & 1;
    *(s32 *) (o + 0xD0) = 0;
    *(s32 *) (o + 0xD4) = 0;
    *(s32 *) (o + 0) = bit2;
    func_80285A94(o + 0x140, o + 0x16C, 3);
    return *(s32 *) (o + 0);
}

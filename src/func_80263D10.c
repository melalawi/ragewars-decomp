#include "basetypes.h"

extern u8 D_8010FBE3[];
extern s32 func_80285A94(void *arg0, void *arg1, s32 arg2);

void func_80263D10(void *arg0) {
    char *o = (char *) arg0;
    s32 type;
    s32 bit;
    s32 bit2;
    s32 i;

    type = *(s8 *) (o + 4);
    bit = ((D_8010FBE3[type * 4] >> 3) ^ 1) & 1;
    if (bit != 0 && *(s32 *) (o + 0) == 0) {
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
    }
    *(s32 *) (o + 0) = bit;
}

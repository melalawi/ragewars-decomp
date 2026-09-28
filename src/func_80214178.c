#include "basetypes.h"
typedef void (*Callback)(void *, void *);

#define AT(type, base, offset) (*(type *)((char *)(base) + (offset)))

extern s32 D_8011FE88;
extern void func_80217388(void *, void *);

s32 func_80214178(void *arg0, void *arg1, s32 arg2) {
    void *node;
    s32 *entry;
    s32 *scan;
    s32 flags;

    if (D_8011FE88 == 2) {
        return 1;
    }
    if (D_8011FE88 == 4) {
        AT(u32, arg0, 0x100) |= 0x100;
    }

    AT(u8, arg1, 0x36) = AT(u8, arg1, 0x34);
    AT(u8, arg0, 0x10F) = 1;
    AT(u8, arg0, 0x123) = 1;
    if ((AT(void *, arg1, 0x30) != 0) && (AT(s8, arg1, 0x34) == arg2)) {
        return 1;
    }

    node = AT(void *, arg1, 0x2C);
    entry = 0;
    AT(s8, arg1, 0x34) = arg2;
    AT(s32, arg1, 0x40) = 0;
    while (node != 0) {
        scan = (s32 *)((char *)node + 0x20);
        if (*scan != -1) {
            while (*scan != -1) {
                if (*scan == arg2) {
                    entry = scan;
                    node = 0;
                    break;
                }
                scan = (s32 *)((char *)scan + 0x20);
            }
        }
        if (node != 0) {
            node = AT(void *, node, 0);
        }
    }

    if (entry == 0) {
        return 0;
    }

    AT(s32 *, arg1, 0x30) = entry;
    AT(u32, arg0, 0x2E0) &= 0x1F80007F;
    if ((AT(u32, arg0, 0x100) & 0x08000000) == 0) {
        AT(u8, arg1, 0xCB) = 0;
        AT(u32, arg1, 0) &= ~1U;
    }
    if (AT(s32, arg1, 0xFC) != 0) {
        func_80217388(arg0, arg1);
    }
    if (AT(Callback, entry, 4) != 0) {
        AT(Callback, entry, 4)(arg0, arg1);
    }
    flags = entry[7];
    AT(s32, arg1, 0x3C) = flags;
    if (flags & 4) {
        AT(s32, arg0, 0x1C) = 0;
        AT(s32, arg0, 0x20) = 0;
        AT(s32, arg0, 0x24) = 0;
    }
    return AT(s8, arg1, 0x34) == arg2;
}

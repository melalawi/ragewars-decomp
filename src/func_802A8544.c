#include "basetypes.h"

/* Returns whether an address may be modified: never inside the 16-byte block D_800D2F80 or at the guard word D_8014D330, always when that guard word is set, and otherwise only outside the protected blocks D_8010FC40, D_801462C8, D_800FD1F0, D_800F81F0 and D_801468A0; func_802A8644 that follows is an empty function. */

#define IN_RANGE(a, base, size) ((a) >= (u32)&(base) && (a) < (u32)&(base) + (size))

extern char D_800D2F80;
extern s32 D_8014D330;
extern char D_8010FC40;
extern char D_801462C8;
extern char D_800FD1F0;
extern char D_800F81F0;
extern char D_801468A0;

s32 func_802A8544(u32 address) {
    address |= 0x80000000;
    if (IN_RANGE(address, D_800D2F80, 0x10) || address == (u32)&D_8014D330) {
        return 0;
    }
    if (D_8014D330 != 0) {
        return 1;
    }
    if (IN_RANGE(address, D_8010FC40, 0x430)) {
        return 0;
    }
    if (IN_RANGE(address, D_801462C8, 0x584)) {
        return 0;
    }
    if (IN_RANGE(address, D_800FD1F0, 0x5800)) {
        return 0;
    }
    if (IN_RANGE(address, D_800F81F0, 0x5000)) {
        return 0;
    }
    if (address >= (u32)&D_801468A0 && address <= (u32)&D_801468A0 + 0xB0) {
        return 0;
    }
    return 1;
}

void func_802A8644(void) {
}

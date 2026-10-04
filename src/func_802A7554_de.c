#include "span_1000/code_802A776C.h"
#include "types.h"

/* Returns whether an address may be modified: never inside the 16-byte block D_800CDD10 or at the guard word D_801470B0, always when that guard word is set, and otherwise only outside the protected blocks D_8010BC40, D_80142208_de, D_800F91F0, D_800F41F0 and D_801427E0; func_802A7654_de that follows is an empty function. */

#define IN_RANGE(a, base, size) ((a) >= (u32)&(base) && (a) < (u32)&(base) + (size))

extern char D_800CDD10;
extern s32 D_801470B0;
extern char D_8010BC40;
extern char D_80142208_de;
extern char D_800F91F0;
extern char D_800F41F0;
extern char D_801427E0;

s32 func_802A7554_de(u32 address) {
    address |= 0x80000000;
    if (IN_RANGE(address, D_800CDD10, 0x10) || address == (u32)&D_801470B0) {
        return 0;
    }
    if (D_801470B0 != 0) {
        return 1;
    }
    if (IN_RANGE(address, D_8010BC40, 0x430)) {
        return 0;
    }
    if (IN_RANGE(address, D_80142208_de, 0x584)) {
        return 0;
    }
    if (IN_RANGE(address, D_800F91F0, 0x5800)) {
        return 0;
    }
    if (IN_RANGE(address, D_800F41F0, 0x5000)) {
        return 0;
    }
    if (address >= (u32)&D_801427E0 && address <= (u32)&D_801427E0 + 0xB0) {
        return 0;
    }
    return 1;
}

void func_802A7654_de(void) {
}

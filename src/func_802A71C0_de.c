#include "span_1000/code_8029193C.h"
#include "span_1000/code_802A776C.h"
#include "span_1000/code_802BF740.h"
#include "types.h"
/* Soft-resets the game: checks the "systembootdone" marker (copied from D_800C5F10_de and zero-padded with the memset func_802A001C_de) through func_80293440_de (recording the result in D_801470B0 and re-arming it through func_802934C0_de), and on a cold boot copies the resident code and data back from the cartridge word by word after each PI idle wait, then clears the BSS from D_800E4000 to D_80166000, in both passes skipping the marker, its flag and, when not cold booting, the preserved save, settings and pad regions; finally reinitialises through func_802BAE40_de and func_80292F24_de. */



extern Marker_func_802A71C0_de D_800C5F10_de;
extern void func_802A001C_de(char *dst, s32 value, s32 size);
extern char D_800CDD10;
extern s32 D_801470B0;
extern char D_8010BC40;
extern char D_80142208_de;
extern char D_800F91F0;
extern char D_800F41F0;
extern s32 D_800E4000;
extern s32 D_80166000;
extern s32 func_80293440_de(char *marker, char *name);
extern void func_802934C0_de(char *marker, char *name);



static inline s32 is_restorable(u32 address) {
    if (address >= (u32)&D_800CDD10 && address < (u32)&D_800CDD10 + 0x10) {
        return 0;
    }
    if (address == (u32)&D_801470B0) {
        return 0;
    }
    if (D_801470B0 != 0) {
        return 1;
    }
    if (address >= (u32)&D_8010BC40 && address < (u32)&D_8010BC40 + 0x430) {
        return 0;
    }
    if (address >= (u32)&D_80142208_de && address < (u32)&D_80142208_de + 0x584) {
        return 0;
    }
    if (address >= (u32)&D_800F91F0 && address < (u32)&D_800F91F0 + 0x5800) {
        return 0;
    }
    if (address >= (u32)&D_800F41F0 && address < (u32)&D_800F41F0 + 0x5000) {
        return 0;
    }
    if (address >= (u32)&D_80142208_de + 0x5D8 && address <= (u32)&D_80142208_de + 0x688) {
        return 0;
    }
    return 1;
}

s32 func_802A71C0_de(void) {
    u32 *src;
    u32 *dst;
    s32 count;
    u32 status;
    u32 *piStatus;
    char name[16];

    *(Marker_func_802A71C0_de *)name = D_800C5F10_de;
    func_802A001C_de(&name[15], 0, 1);

    if (func_80293440_de(&D_800CDD10, name) == 0) {
        D_801470B0 = 0;
    } else {
        D_801470B0 = 1;
        func_802934C0_de(&D_800CDD10, name);
    }
    if (D_801470B0 == 0) {
        src = (u32 *)0xB0001000;
        dst = (u32 *)0x80000400;
        piStatus = (u32 *)0xA4600010;
        count = 0x3FFFF;
        do {
            status = *piStatus & 3;
            while (status != 0) {
            }
            if (is_restorable((u32)dst | 0x80000000)) {
                *dst = *src;
            }
            dst++;
            src++;
        } while (count-- != 0);
    }
    for (dst = (u32 *)&D_800E4000; (u32)dst < (u32)&D_80166000; dst++) {
        if (is_restorable((u32)dst | 0x80000000)) {
            *dst = 0;
        }
    }
    func_802BAE40_de();
    func_80292F24_de();
    return 0;
}

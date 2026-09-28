/* Soft-resets the game: checks the "systembootdone" marker (copied from D_800CB0A0 and zero-padded with the memset func_802A101C) through func_80293424 (recording the result in D_8014D330 and re-arming it through func_802934A4), and on a cold boot copies the resident code and data back from the cartridge word by word after each PI idle wait, then clears the BSS from D_800E8000 to D_8016E000, in both passes skipping the marker, its flag and, when not cold booting, the preserved save, settings and pad regions; finally reinitialises through func_802BFF30 and func_80292F08. */
#include "basetypes.h"

typedef struct {
    char text[15];
} Marker;

extern Marker D_800CB0A0;
extern void func_802A101C(char *dst, s32 value, s32 size);
extern char D_800D2F80;
extern s32 D_8014D330;
extern char D_8010FC40;
extern char D_801462C8;
extern char D_800FD1F0;
extern char D_800F81F0;
extern s32 D_800E8000;
extern s32 D_8016E000;
extern s32 func_80293424(char *marker, char *name);
extern void func_802934A4(char *marker, char *name);
extern void func_802BFF30(void);
extern void func_80292F08(void);

static inline s32 is_restorable(u32 address) {
    if (address >= (u32)&D_800D2F80 && address < (u32)&D_800D2F80 + 0x10) {
        return 0;
    }
    if (address == (u32)&D_8014D330) {
        return 0;
    }
    if (D_8014D330 != 0) {
        return 1;
    }
    if (address >= (u32)&D_8010FC40 && address < (u32)&D_8010FC40 + 0x430) {
        return 0;
    }
    if (address >= (u32)&D_801462C8 && address < (u32)&D_801462C8 + 0x584) {
        return 0;
    }
    if (address >= (u32)&D_800FD1F0 && address < (u32)&D_800FD1F0 + 0x5800) {
        return 0;
    }
    if (address >= (u32)&D_800F81F0 && address < (u32)&D_800F81F0 + 0x5000) {
        return 0;
    }
    if (address >= (u32)&D_801462C8 + 0x5D8 && address <= (u32)&D_801462C8 + 0x688) {
        return 0;
    }
    return 1;
}

s32 func_802A81B0(void) {
    u32 *src;
    u32 *dst;
    s32 count;
    u32 status;
    u32 *piStatus;
    char name[16];

    *(Marker *)name = D_800CB0A0;
    func_802A101C(&name[15], 0, 1);

    if (func_80293424(&D_800D2F80, name) == 0) {
        D_8014D330 = 0;
    } else {
        D_8014D330 = 1;
        func_802934A4(&D_800D2F80, name);
    }
    if (D_8014D330 == 0) {
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
    for (dst = (u32 *)&D_800E8000; (u32)dst < (u32)&D_8016E000; dst++) {
        if (is_restorable((u32)dst | 0x80000000)) {
            *dst = 0;
        }
    }
    func_802BFF30();
    func_80292F08();
    return 0;
}

/* Saves the selected player record to the controller pak when an existing file or sufficient space is available and marks the player slot failed otherwise; scheduler lever: the status is copied into a flag before the ready test so the join keeps its own status test, as the cartridge does. */
#include "basetypes.h"
typedef struct { s32 state; char pad04[0x10]; s32 saveState; char record[0xB4C]; s32 checksum; } PakSlot;
typedef struct { char pad0[0x58]; PakSlot slots[4]; char pad2DF8[0x30]; char buffer[0x640]; s32 checksum; s32 crc; } PakState;
extern PakState *D_800E54A4;
extern s32 D_800D7700, D_800D770C;
extern void func_802A125C(void *, s32);
extern void func_802A1724(void *, void *, s32);
extern s32 func_80404858(s32,s32);
extern s32 func_80404958(s32,s32,void *,void *,void *,s32);
extern s32 func_80404BE8(s32,s32,s32 *);
extern s32 func_804050CC(s32,s32 *);
extern s32 func_80405160(s32,s32 *);
extern s32 func_80405454(s32,void *);
extern s32 func_804057EC(s32);
extern s32 func_804057F8(void *,s32,s32);
extern void func_80432488(s32);
extern s32 func_80435600(void);
typedef struct { s32 file; s32 ready; s32 used; s32 free; } PakStatus;
s32 func_80434604(s32 arg0) {
    char sp18[8];
    s8 sp20[16];
    PakStatus pak;
    s32 temp_a0;
    s32 var_a1;
    s32 var_s0;
    s32 var_s2;
    s32 ok;
    s8 *var_a0;
    void *temp_s1;
    void *temp_s1_2;

    var_s2 = 0;
    if (func_80404BE8(D_800D7700, arg0, &pak.file) == 1) {
        var_s2 = func_80404858(arg0, pak.file) == 0;
    } else {
        pak.ready = 0;
        var_s0 = func_80405160(arg0, &pak.used);
        if (var_s0 == 0) {
            var_s0 = func_804050CC(arg0, &pak.free);
        }
        if (var_s0 == 0) {
            temp_a0 = func_804057EC(func_80435600());
            if (pak.free == 0 || pak.used < temp_a0) {
                pak.ready = 0;
            } else {
                pak.ready = 1;
            }
        }
        ok = var_s0 == 0;
        if (ok && pak.ready == 1) {
            var_s2 = 1;
        }
    }
    if (var_s2 == 1) {
        var_s2 = 0;
        if (func_80405454(arg0, sp18) == 0) {
            temp_s1 = (char *)D_800E54A4 + 0x2E28;
            func_802A1724(temp_s1, D_800E54A4->slots[arg0].record, 0x640);
            D_800E54A4->checksum = D_800E54A4->slots[arg0].checksum;
            D_800E54A4->crc = func_804057F8(temp_s1, 0x640, 7);
            var_a1 = 0xF;
            var_a0 = &sp20[15];
            temp_s1_2 = (char *)D_800E54A4 + 0x2E28;
            do {
                *var_a0 = 0;
                var_a1 -= 1;
                var_a0 -= 1;
            } while (var_a1 >= 0);
            func_802A125C(sp20, D_800D7700);
            if (func_80404958(arg0, 0x648, temp_s1_2, sp20, sp18, D_800D770C) == 0) {
                var_s2 = 1;
            }
        }
    }
    if (var_s2 == 0) {
        D_800E54A4->slots[arg0].saveState = 2;
        D_800E54A4->slots[arg0].state = 2;
        func_80432488(arg0);
    }
    return var_s2;
}

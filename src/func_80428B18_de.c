#include "span_16E000/code_80425BC0.h"
#include "span_16E000/code_804288E0.h"
#include "span_16E000/types.h"
#include "types.h"

/* Moves the menu cursor on event 1: when the current slot's successor in the 28-byte slot table
   (word at D_800E0654) exists and func_80265650_de reports it set in the menu's flags at 0xA74, it
   plays sound 0xE7D, shades the old window 0x46 or 0xAA by whether the old slot is set in the
   flags at 0xA79, opens the successor's window (halfword at D_800E0646_de) under arg0, refreshes
   through func_804280BC_de and, by the mode byte at 0xD of D_80142208_de, through func_804281A8_de and
   func_80427B08_de unless the mode is 2 and func_804279B8_de when it is 4; returns zero. Adapted from func_80428850_de with the successor word changed. */




extern struct Menu_func_80428850_de *D_800E0640_de;
extern u16 D_800E0646_de[];
extern s32 D_800E0654[];
extern u8 D_80142208_de[];
extern void func_8029973C_de(void);
extern s32 func_80265650_de(u8 *, s32);
extern void func_8025DF34_de(s32);
extern struct Resource_func_80419E54_de *func_8040EC30_de(void *, s32);


extern void func_80427B08_de(void);
extern void func_804279B8_de(void);

s32 func_80428B18_de(void *parent, s32 arg1, s32 arg2, s32 event) {
    s32 next;
    s32 set;
    u8 *options;

    func_8029973C_de();
    if (event != 1) {
        return 0;
    }
    next = D_800E0654[D_800E0640_de->current * 7];
    if (next == -1) {
        return 0;
    }
    set = func_80265650_de(D_800E0640_de->reachable, next);
    if (set != 1) {
        return 0;
    }
    func_8025DF34_de(0xE7D);
    if (func_80265650_de(D_800E0640_de->visited, D_800E0640_de->current) == set) {
        D_800E0640_de->window->value = 0x46;
    } else {
        D_800E0640_de->window->value = 0xAA;
    }
    D_800E0640_de->current = next;
    D_800E0640_de->window = func_8040EC30_de(parent, D_800E0646_de[next * 14]);
    func_804280BC_de();
    options = D_80142208_de;
    if (options[0xD] != 2) {
        func_804281A8_de();
        D_800E0640_de->idle = 0;
        func_80427B08_de();
    }
    if (options[0xD] == 4) {
        func_804279B8_de();
    }
    return 0;
}

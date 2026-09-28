/* Main menu choice handler: after func_8029A73C it acts on the entry func_8029AA08 reports
   (0x45 to 0x4C), setting the next state of screen D_800E4600, the player count D_801462D5 and the
   player status records in D_80146398 (joining players and resetting unsaved records through
   func_8022F1F4), then closes the menu through func_8041A4B0. Returns zero. */
#include "basetypes.h"

struct State {
    void *menu;
    char pad4[0x18 - 4];
    s32 next;
};

struct Status {
    char pad0[0x78];
    u8 joined;
    char pad79[0x7F - 0x79];
    u8 slot;
    char pad80[0x96 - 0x80];
};

extern struct State *D_800E4600;
extern s32 D_800E4680;
extern u8 D_801462C8[];
extern char D_80102B00[];
extern s8 D_80102B0D[];

extern void func_8029A73C(void);
extern s32 func_8029AA08(void);
extern void func_8022F1F4(s32);
extern void func_8022EF20(char *);
extern void func_80435190(s32);
extern void func_8022F594(char *, s32);
extern void func_8041A4B0(void *, s32);

s32 func_80424128(void) {
    struct Status *status;
    u8 *settings;
    s32 i;

    func_8029A73C();
    switch (func_8029AA08()) {
    case 0x45:
        D_800E4600->next = 0x1A;
        D_801462C8[0xD] = 0;
        break;
    case 0x49:
        settings = D_801462C8;
        status = (struct Status *)(settings + 0xD0);
        D_800E4600->next = 7;
        settings[0xD] = 2;
        for (i = 0; i < 2; i++) {
            status[i].joined = 1;
            status[i].slot = i;
            if (D_80102B0D[i * 400] < 0) {
                func_8022F1F4(i);
            }
        }
        break;
    case 0x46:
        status = (struct Status *)(D_801462C8 + 0xD0);
        status->joined = 1;
        status->slot = 0;
        func_8022EF20(D_80102B00);
        func_80435190(7);
        D_800E4600->next = 0x13;
        D_801462C8[0xD] = 1;
        break;
    case 0x4B:
        D_800E4600->next = 0x1B;
        break;
    case 0x47:
        D_800E4600->next = 4;
        break;
    case 0x4C:
        D_800E4600->next = 0x10;
        break;
    case 0x48:
        status = (struct Status *)(D_801462C8 + 0xD0);
        D_800E4600->next = 7;
        status->joined = 1;
        status->slot = 0;
        if (D_80102B0D[0] < 0) {
            func_8022F1F4(0);
            for (i = 0; i < 20; i++) {
                func_8022F594(D_80102B00, i);
            }
        }
        D_801462C8[0xD] = 3;
        break;
    case 0x4A:
        status = (struct Status *)(D_801462C8 + 0xD0);
        D_800E4600->next = 0xA;
        status->joined = 1;
        status->slot = 0;
        if (D_80102B0D[0] < 0) {
            func_8022F1F4(0);
        }
        D_801462C8[0xD] = 4;
        D_800E4680 = 0;
        break;
    default:
        return 0;
    }
    func_8041A4B0(D_800E4600->menu, 2);
    return 0;
}

/* Releases temporary profile buffers and opens the controller-pak prompt for the selected player and channel, labelling the port prompt by channel. */
#include "basetypes.h"

#include "../include/shared/player.h"
typedef SharedPlayer Player;

typedef struct Slot {
    char pad0[4];
    s8 channel;
} Slot;

typedef struct Menu {
    char pad0[0x1C];
    Player *player;
    Slot *slot;
} Menu;

extern char D_44F148[];
extern char D_450758[];
extern char D_450BD0[];
extern char D_451820[];
extern char D_451844[];
extern char D_451868[];
extern char D_45188C[];
extern char D_80145040[];
extern char D_8014561C[];
extern s32 D_80146D60;
extern s32 D_80146D6C;
extern s32 D_8014AD9C;
extern s32 D_8014ADA0;
extern s32 D_80153710;
extern s32 D_80153750;
extern s32 D_8015375C;
extern s32 D_80153760;
extern s32 D_8015377C;
extern s32 D_80153784;
extern s32 D_800E28B0;
extern s32 D_800E28B4;
extern s32 D_800E28B8;
extern s32 D_800E28BC;
extern s32 D_800E28C8;
extern Player *func_8022A5B0(void *profiles, Slot *slot);
extern void func_802537D8(s32 heap, s32 block);
extern void func_802538A8(s32 heap);
extern void func_804426E4(void *buffer, char *message, Player *player, char *title, s32 channel);

static inline void get_channel(Menu *menu, s32 *channel) {
    if (D_8015375C != 0) {
        *channel = D_800E28C8;
    } else {
        *channel = menu->slot->channel;
    }
}

s32 func_804085E0(void *unused, Menu *menu) {
    s32 channel;
    char *label;
    s8 port;
    Player *target;
    Player *player;

    if (D_800E28B0 != 0 || D_800E28B4 != 0) {
        func_802538A8(0);
    }
    if (D_800E28B0 != 0) {
        func_802537D8(0, D_800E28B0);
    }
    if (D_800E28B4 != 0) {
        func_802537D8(0, D_800E28B4);
    }
    D_800E28B0 = 0;
    D_800E28B4 = 0;
    D_800E28B8 = 0;
    D_800E28BC = 0;
    D_80153710 = 0;
    get_channel(menu, &channel);
    if (D_8015375C != 0) {
        D_8014ADA0 = 0;
        D_80146D60 = 0;
        D_8014AD9C = 1;
        D_80146D6C = 0;
        func_804426E4(D_8014561C, D_44F148, 0, (char *)menu->slot, 0);
        return 1;
    }
    if (D_8015377C != 0) {
        if (D_80153760 != 0) {
            D_80153784 = 1;
            target = func_8022A5B0(D_80145040, menu->slot);
            func_804426E4(target->views5DC.view5DC_6.storage + 0x554, D_450758, target, target->views5E8.view698_38.title, channel);
            return 1;
        }
        if (D_80153750 != 0) {
            D_80153784 = 1;
            port = menu->slot->channel;
            player = menu->player;
            channel = port;
            target = player;
            switch (channel) {
            default:
            case 0:
                label = D_451820;
                break;
            case 1:
                label = D_451844;
                break;
            case 2:
                label = D_451868;
                break;
            case 3:
                label = D_45188C;
                break;
            }
            func_804426E4(target->views5DC.view5DC_6.storage + 0x554, label, target, target->views5E8.view698_38.title, channel);
            return 1;
        }
    } else {
        target = func_8022A5B0(D_80145040, menu->slot);
        if (D_80153760 != 0) {
            D_80153784 = 1;
            func_804426E4(D_80145040 + 0x5DC, D_450BD0, target, target->views5E8.view698_38.title, channel);
            return 1;
        }
        if (D_80153750 != 0) {
            D_80153784 = 1;
            return 1;
        }
    }
    return 0;
}

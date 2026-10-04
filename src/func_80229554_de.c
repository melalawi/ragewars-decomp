#include "span_1000/code_80228934.h"
#include "span_1000/code_802A137C.h"
#include "span_1000/types.h"
#include "types.h"




























/* Gives a player an amount of one ammunition type and announces it: the count at 0x5F4 of that type
   rises by the amount up to the type's maximum (none for type -1, the character's table at 0x108 in
   multiplayer, otherwise D_800CE3E8 plus the profile's bonus bytes in D_80102B00 unless ammunition is
   unlimited at 0x1450), and the message "<amount> <type name>" with a plural suffix for more than one
   is built and shown through func_8022B75C_de. */


#define MIN(a, b) ((a) < (b) ? (a) : (b))






extern s32 D_800C9198_de[];
extern Profile_func_80229554_de D_800FEB00[];
extern u8 D_80142215;
extern char D_800C2C50_de[];
extern char D_800C2C54_de[];

extern void func_802A025C_de(char *, char *);
extern void func_802A02E8_de(char *, char *);
extern char *func_80232764_de(s32);
extern void func_8022B75C_de(SharedPlayer_func_80229554_de *, char *, f32);

static inline s32 max_ammo(SharedPlayer_func_80229554_de *player, s32 type) {
    s32 max;

    if (type == -1) {
        return 0;
    }
    if (D_80142215 != 1) {
        max = player->views18.view18_4.character->caps[type];
    } else {
        max = D_800C9198_de[type];
        if (player->views1450.view1450_3.unlimited == 0) {
            if (type == 0) {
                max += D_800FEB00[player->views1C.view5D4_47.profile].bonus0;
            } else if (type == 1) {
                max += D_800FEB00[player->views1C.view5D4_47.profile].bonus1;
            } else if (type == 2) {
                max += D_800FEB00[player->views1C.view5D4_47.profile].bonus2;
            }
        }
    }
    return max;
}

void func_80229554_de(SharedPlayer_func_80229554_de *player, s32 type, s32 amount) {
    char number[8];
    char message[32];

    if (amount != 0) {
        player->views5E8.view5F4_12.ammo[type] = MIN(player->views5E8.view5F4_12.ammo[type] + amount, max_ammo(player, type));
        func_802A066C_de(amount, number);
        func_802A025C_de(message, number);
        func_802A02E8_de(message, D_800C2C50_de);
        func_802A02E8_de(message, func_80232764_de(type));
        if (amount >= 2) {
            func_802A02E8_de(message, D_800C2C54_de);
        }
        func_8022B75C_de(player, message, 1.0f);
    }
}

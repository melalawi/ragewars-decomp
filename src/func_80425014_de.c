#include "span_16E000/code_804251F4.h"
#include "types.h"

/* Applies event *D_800E4680 to player record D_80102B00[index] once per D_8015402C: when that bit
   of the record's current slot flags is already set it returns -1; otherwise it sets the bit and,
   for an event code below 58, dispatches through jtbl_800E1790 to the effect for that code and
   returns the code plus 5000 (5001 when the second effect's test clears bit 0), or -1 for a code
   the table marks unknown. The dispatch and return sit in a one-pass loop; that weighting gives
   the result its saved register ahead of the key pointer, as the cartridge has it. */


extern struct Player_func_80425014_de D_80102B00[];
extern s32 D_8015402C;
extern u8 *D_800E4680;
extern void *jtbl_800DD760[];
extern s32 func_80265650_de(u8 *, s32);
extern void func_80265688_de(u8 *, s32, s32);
extern void func_8022F3F8_de(struct Player_func_80425014_de *, s32);
extern s32 func_8022F454_de(struct Player_func_80425014_de *, s32);
extern void func_8022F4BC_de(struct Player_func_80425014_de *, s32);
extern void func_8022F514_de(struct Player_func_80425014_de *, s32);
extern void func_8022F31C_de(struct Player_func_80425014_de *);
extern void func_8022F340_de(struct Player_func_80425014_de *);
extern void func_8022F364_de(struct Player_func_80425014_de *);
extern void func_8022F388_de(struct Player_func_80425014_de *);

s32 func_80425014_de(s32 index) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&effect_0, &&effect_1, &&effect_2, &&effect_3, &&effect_4, &&effect_5, &&effect_6, &&effect_7,
        &&effect_8, &&effect_9, &&effect_10, &&effect_11, &&effect_12, &&effect_13, &&effect_14, &&effect_15,
        &&effect_16, &&effect_17, &&effect_18, &&effect_19, &&effect_20, &&effect_21, &&effect_22, &&effect_23,
        &&effect_24, &&effect_25, &&effect_26, &&effect_27, &&effect_28, &&effect_29, &&effect_30, &&effect_31,
        &&effect_32, &&effect_33, &&effect_34, &&effect_35, &&unknown, &&done
    };
    s32 result = -1;
    struct Player_func_80425014_de *player = &D_80102B00[index];
    s32 *key = &D_8015402C;
    u32 code;

    if (func_80265650_de(player->flags[player->slot], *key) != 0) {
        goto done;
    }
    func_80265688_de(player->flags[player->slot], *key, 1);
    code = *D_800E4680;
    result = code + 5000;
    do {
        if (code >= 58) {
            goto unknown;
        }
        goto *jtbl_800DD760[code];
    effect_0:
        func_8022F3F8_de(player, player->slot);
        func_8022F3F8_de(player, player->slot);
        goto done;
    effect_1:
        func_8022F3F8_de(player, player->slot);
        if ((func_8022F454_de(player, player->slot) & 1) == 0) {
            result = 5001;
        }
        goto done;
    effect_2:
        func_8022F4BC_de(player, 4);
        goto done;
    effect_3:
        func_8022F514_de(player, 2);
        goto done;
    effect_4:
        func_8022F4BC_de(player, 14);
        goto done;
    effect_5:
        func_8022F514_de(player, 6);
        goto done;
    effect_6:
        func_8022F4BC_de(player, 7);
        goto done;
    effect_7:
        func_8022F514_de(player, 16);
        goto done;
    effect_8:
        func_8022F514_de(player, 5);
        goto done;
    effect_9:
        func_8022F514_de(player, 17);
        goto done;
    effect_10:
        func_8022F4BC_de(player, 6);
        goto done;
    effect_11:
        func_8022F514_de(player, 14);
        goto done;
    effect_12:
        func_8022F514_de(player, 4);
        goto done;
    effect_13:
        func_8022F4BC_de(player, 12);
        goto done;
    effect_14:
        func_8022F4BC_de(player, 10);
        goto done;
    effect_15:
        func_8022F31C_de(player);
        goto done;
    effect_16:
        func_8022F514_de(player, 8);
        goto done;
    effect_17:
        func_8022F4BC_de(player, 8);
        goto done;
    effect_18:
        func_8022F4BC_de(player, 15);
        goto done;
    effect_19:
        func_8022F514_de(player, 11);
        goto done;
    effect_20:
        func_8022F514_de(player, 10);
        goto done;
    effect_21:
        func_8022F514_de(player, 3);
        goto done;
    effect_22:
        func_8022F364_de(player);
        goto done;
    effect_23:
        func_8022F340_de(player);
        goto done;
    effect_24:
        func_8022F4BC_de(player, 13);
        goto done;
    effect_25:
        func_8022F4BC_de(player, 9);
        goto done;
    effect_26:
        func_8022F514_de(player, 1);
        goto done;
    effect_27:
        func_8022F514_de(player, 9);
        goto done;
    effect_28:
        func_8022F514_de(player, 7);
        goto done;
    effect_29:
        func_8022F514_de(player, 13);
        goto done;
    effect_30:
        func_8022F4BC_de(player, 5);
        goto done;
    effect_31:
        func_8022F4BC_de(player, 1);
        goto done;
    effect_32:
        func_8022F514_de(player, 0);
        goto done;
    effect_33:
        func_8022F4BC_de(player, 11);
        goto done;
    effect_34:
        player->count++;
        goto done;
    effect_35:
        func_8022F388_de(player);
        goto done;
    unknown:
        result = -1;
    done:
        return result;
    } while (0);
}

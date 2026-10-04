#include "span_16E000/code_804233DC.h"
#include "types.h"

/* Applies event *D_800E4680 to player record D_80102B00[index] once per D_8015402C: when that bit
   of the record's current slot flags is already set it returns -1; otherwise it sets the bit and,
   for an event code below 58, dispatches through jtbl_800E1790 to the effect for that code and
   returns the code plus 5000 (5001 when the second effect's test clears bit 0), or -1 for a code
   the table marks unknown. The dispatch and return sit in a one-pass loop; that weighting gives
   the result its saved register ahead of the key pointer, as the cartridge has it. */


extern struct Player_func_80425014_de D_800FEB00[];
extern s32 D_8014DD9C;
extern u8 *D_800E0630;
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
    struct Player_func_80425014_de *player = &D_800FEB00[index];
    s32 *key = &D_8014DD9C;
    u32 code;

    if (func_80265650_de(player->flags[player->slot], *key) != 0) {
        goto done;
    }
    func_80265688_de(player->flags[player->slot], *key, 1);
    code = *D_800E0630;
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC410_E8[] = {0x00425588U, 0x004252A8U, 0x004252C8U, 0x004252F4U, 0x00425308U, 0x0042531CU, 0x00425330U, 0x00425344U, 0x00425358U, 0x0042536CU, 0x00425380U, 0x00425394U, 0x004253A8U, 0x004253BCU, 0x004253D0U, 0x004253E4U, 0x004253F8U, 0x00425408U, 0x0042541CU, 0x00425430U, 0x00425444U, 0x00425458U, 0x0042546CU, 0x00425480U, 0x00425490U, 0x004254A0U, 0x004254B4U, 0x004254C8U, 0x004254DCU, 0x004254F0U, 0x00425504U, 0x00425518U, 0x00425588U, 0x0042552CU, 0x00425540U, 0x00425588U, 0x00425588U, 0x00425554U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x0042558CU, 0x00425568U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425578U};
#elif defined(VERSION_US_REV1)
const unsigned int unbake_rodata_800E1790_E8[] = {0x00425588U, 0x004252A8U, 0x004252C8U, 0x004252F4U, 0x00425308U, 0x0042531CU, 0x00425330U, 0x00425344U, 0x00425358U, 0x0042536CU, 0x00425380U, 0x00425394U, 0x004253A8U, 0x004253BCU, 0x004253D0U, 0x004253E4U, 0x004253F8U, 0x00425408U, 0x0042541CU, 0x00425430U, 0x00425444U, 0x00425458U, 0x0042546CU, 0x00425480U, 0x00425490U, 0x004254A0U, 0x004254B4U, 0x004254C8U, 0x004254DCU, 0x004254F0U, 0x00425504U, 0x00425518U, 0x00425588U, 0x0042552CU, 0x00425540U, 0x00425588U, 0x00425588U, 0x00425554U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425588U, 0x0042558CU, 0x00425568U, 0x00425588U, 0x00425588U, 0x00425588U, 0x00425578U};
#elif defined(VERSION_EU)
const unsigned int unbake_rodata_800EDDE0_E8[] = {0x00425C9CU, 0x004259BCU, 0x004259DCU, 0x00425A08U, 0x00425A1CU, 0x00425A30U, 0x00425A44U, 0x00425A58U, 0x00425A6CU, 0x00425A80U, 0x00425A94U, 0x00425AA8U, 0x00425ABCU, 0x00425AD0U, 0x00425AE4U, 0x00425AF8U, 0x00425B0CU, 0x00425B1CU, 0x00425B30U, 0x00425B44U, 0x00425B58U, 0x00425B6CU, 0x00425B80U, 0x00425B94U, 0x00425BA4U, 0x00425BB4U, 0x00425BC8U, 0x00425BDCU, 0x00425BF0U, 0x00425C04U, 0x00425C18U, 0x00425C2CU, 0x00425C9CU, 0x00425C40U, 0x00425C54U, 0x00425C9CU, 0x00425C9CU, 0x00425C68U, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425CA0U, 0x00425C7CU, 0x00425C9CU, 0x00425C9CU, 0x00425C9CU, 0x00425C8CU};
#elif defined(VERSION_EU_X)
const unsigned int unbake_rodata_800E8FA0_E8[] = {0x00425DECU, 0x00425B0CU, 0x00425B2CU, 0x00425B58U, 0x00425B6CU, 0x00425B80U, 0x00425B94U, 0x00425BA8U, 0x00425BBCU, 0x00425BD0U, 0x00425BE4U, 0x00425BF8U, 0x00425C0CU, 0x00425C20U, 0x00425C34U, 0x00425C48U, 0x00425C5CU, 0x00425C6CU, 0x00425C80U, 0x00425C94U, 0x00425CA8U, 0x00425CBCU, 0x00425CD0U, 0x00425CE4U, 0x00425CF4U, 0x00425D04U, 0x00425D18U, 0x00425D2CU, 0x00425D40U, 0x00425D54U, 0x00425D68U, 0x00425D7CU, 0x00425DECU, 0x00425D90U, 0x00425DA4U, 0x00425DECU, 0x00425DECU, 0x00425DB8U, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DF0U, 0x00425DCCU, 0x00425DECU, 0x00425DECU, 0x00425DECU, 0x00425DDCU};
#elif defined(VERSION_DE)
const unsigned int unbake_rodata_800DD760_E8[] = {0x004253A8U, 0x004250C8U, 0x004250E8U, 0x00425114U, 0x00425128U, 0x0042513CU, 0x00425150U, 0x00425164U, 0x00425178U, 0x0042518CU, 0x004251A0U, 0x004251B4U, 0x004251C8U, 0x004251DCU, 0x004251F0U, 0x00425204U, 0x00425218U, 0x00425228U, 0x0042523CU, 0x00425250U, 0x00425264U, 0x00425278U, 0x0042528CU, 0x004252A0U, 0x004252B0U, 0x004252C0U, 0x004252D4U, 0x004252E8U, 0x004252FCU, 0x00425310U, 0x00425324U, 0x00425338U, 0x004253A8U, 0x0042534CU, 0x00425360U, 0x004253A8U, 0x004253A8U, 0x00425374U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x004253ACU, 0x00425388U, 0x004253A8U, 0x004253A8U, 0x004253A8U, 0x00425398U};
#endif

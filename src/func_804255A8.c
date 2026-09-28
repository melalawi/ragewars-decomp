#include "basetypes.h"

/* Returns the message text for an event result from func_804251F4: for results 5001 to 5057 the
   text pointer jtbl_800E1878 selects for the result, where result 5002 picks between two texts by
   bit 0 of func_8022F444 for the first player's current slot; zero for any other result. The
   dispatch and return sit in a one-pass loop, whose weighting gives the text its register as the
   cartridge has it. */
struct Player {
    char pad0[0xF];
    u8 slot;
};

extern struct Player D_80102B00[];
extern void *jtbl_800E1878[];
extern char *D_800D7510;
extern char *D_800D7514;
extern char *D_800D7518;
extern char *D_800D751C;
extern char *D_800D7520;
extern char *D_800D7524;
extern char *D_800D7528;
extern char *D_800D752C;
extern char *D_800D7530;
extern char *D_800D7534;
extern char *D_800D7538;
extern char *D_800D753C;
extern char *D_800D7540;
extern char *D_800D7544;
extern char *D_800D7548;
extern char *D_800D754C;
extern char *D_800D7550;
extern char *D_800D7554;
extern char *D_800D7558;
extern char *D_800D755C;
extern char *D_800D7560;
extern char *D_800D7564;
extern char *D_800D7568;
extern char *D_800D756C;
extern char *D_800D7570;
extern char *D_800D7574;
extern char *D_800D7578;
extern char *D_800D757C;
extern char *D_800D7580;
extern char *D_800D7584;
extern char *D_800D7588;
extern char *D_800D758C;
extern char *D_800D7590;
extern char *D_800D7594;
extern char *D_800D7598;
extern char *D_800D759C;
extern char *D_800D75A0;
extern s32 func_8022F444(struct Player *, s32);

char *func_804255A8(s32 result) {
    static void *labels[0] __attribute__((section(".sdata"))) = {
        &&text_0, &&text_1, &&text_2, &&text_3, &&text_4, &&text_5, &&text_6, &&text_7,
        &&text_8, &&text_9, &&text_10, &&text_11, &&text_12, &&text_13, &&text_14, &&text_15,
        &&text_16, &&text_17, &&text_18, &&text_19, &&text_20, &&text_21, &&text_22, &&text_23,
        &&text_24, &&text_25, &&text_26, &&text_27, &&text_28, &&text_29, &&text_30, &&text_31,
        &&text_32, &&text_33, &&text_34, &&text_35, &&done
    };
    struct Player *player = D_80102B00;
    char *text = 0;
    u32 index;

    do {
        if (result < 0) {
            goto done;
        }
        index = result - 5001;
        if (index >= 57) {
            goto done;
        }
        goto *jtbl_800E1878[index];
    text_0:
        text = D_800D7510;
        goto done;
    text_1:
        if ((func_8022F444(player, player->slot) & 1) == 0) {
            text = D_800D7518;
        } else {
            text = D_800D7514;
        }
        goto done;
    text_2:
        text = D_800D753C;
        goto done;
    text_3:
        text = D_800D757C;
        goto done;
    text_4:
        text = D_800D7590;
        goto done;
    text_5:
        text = D_800D7548;
        goto done;
    text_6:
        text = D_800D7554;
        goto done;
    text_7:
        text = D_800D7538;
        goto done;
    text_8:
        text = D_800D7550;
        goto done;
    text_9:
        text = D_800D758C;
        goto done;
    text_10:
        text = D_800D7580;
        goto done;
    text_11:
        text = D_800D7594;
        goto done;
    text_12:
        text = D_800D7570;
        goto done;
    text_13:
        text = D_800D7540;
        goto done;
    text_14:
        text = D_800D751C;
        goto done;
    text_15:
        text = D_800D756C;
        goto done;
    text_16:
        text = D_800D7568;
        goto done;
    text_17:
        text = D_800D7578;
        goto done;
    text_18:
        text = D_800D7564;
        goto done;
    text_19:
        text = D_800D7544;
        goto done;
    text_20:
        text = D_800D7574;
        goto done;
    text_21:
        text = D_800D7524;
        goto done;
    text_22:
        text = D_800D7520;
        goto done;
    text_23:
        text = D_800D7598;
        goto done;
    text_24:
        text = D_800D7558;
        goto done;
    text_25:
        text = D_800D7588;
        goto done;
    text_26:
        text = D_800D755C;
        goto done;
    text_27:
        text = D_800D754C;
        goto done;
    text_28:
        text = D_800D759C;
        goto done;
    text_29:
        text = D_800D7534;
        goto done;
    text_30:
        text = D_800D7584;
        goto done;
    text_31:
        text = D_800D75A0;
        goto done;
    text_32:
        text = D_800D7560;
        goto done;
    text_33:
        text = D_800D7528;
        goto done;
    text_34:
        text = D_800D752C;
        goto done;
    text_35:
        text = D_800D7530;
    done:
        return text;
    } while (0);
}

#include "common/types_1dc8418c21db.h"
#include "common/types_8a8189af7b05.h"
#include "common/types_8fd754e1e915.h"
#include "span_1000/code_80225D10.h"
#include "types.h"

/* Returns the leading team: for each player in the list from 0x20 it adds the player's kills of the
   seven other players (the shorts at 0x3C of its stats at 0x5D8) to the total of its team byte at
   0x92, returning 0 at once for a player without a team (0xFF), then returns the first team 0 to 4
   with the highest total. */










s32 func_80229A80_de(void *game) {
    s32 total0;
    s32 total1;
    s32 total2;
    s32 total3;
    s32 total4;
    char *player;
    char *stats;
    s32 self;
    s32 other;
    s32 best;
    s32 leader;

    total4 = 0;
    total3 = 0;
    total2 = 0;
    total1 = 0;
    total0 = 0;
    for (player = ((func_80229A54_S1 *)(game))->unk20; player != 0; player = ((func_80229A54_S2 *)(player))->unk16E0) {
        self = (u32) (player - ((func_80229A54_S1 *)(game))->unk4) / 0x16E8;
        for (other = 0; other < 8; other++) {
            if (other == self) {
                continue;
            }
            stats = ((func_80229A54_S2 *)(player))->unk5D8;
            switch (((Record *)(stats))->team) {
            case 0xFF:
                return 0;
            case 0:
                total0 += ((Stats *) stats)->kills[other];
                break;
            case 1:
                total1 += ((Stats *) stats)->kills[other];
                break;
            case 2:
                total2 += ((Stats *) stats)->kills[other];
                break;
            case 3:
                total3 += ((Stats *) stats)->kills[other];
                break;
            case 4:
                total4 += ((Stats *) stats)->kills[other];
                break;
            }
        }
    }
    do {
        best = leader = -1;
    } while (0);
    if (best < total0) {
        best = total0;
        leader = 0;
    }
    if (best < total1) {
        best = total1;
        leader = 1;
    }
    if (best < total2) {
        best = total2;
        leader = 2;
    }
    if (best < total3) {
        best = total3;
        leader = 3;
    }
    if (best < total4) {
        best = total4;
        leader = 4;
    }
    return leader;
}

extern s32 D_80142850;

extern void *jtbl_800C2C80[];






/** Return the animation-table offset selected by the actor state. */
s32 func_80229C0C_de(void *arg0, s32 arg1) {
    s32 *types = &D_800C922C;
    u16 type = ((func_80229BE0_S1 *)(arg0))->unkE4;
    char *state;
    s32 offset;

    if (type == types[0]) {
        switch (D_80142850) {
        case 0:
            offset = 0x514;
            break;
        case 1:
            offset = 0x5DC;
            break;
        case 2:
            offset = 0x578;
            break;
        default:
            D_80142850 = 0;
            offset = 0x514;
            break;
        }
    } else if (type == types[-2]) {
        offset = 0x190;
    } else if (type == types[-1]) {
        offset = 0x3E8;
    } else {
        state = ((func_80229BE0_S1 *)(arg0))->unk5D8;
        {
        static void *sw_state_labels[0] __attribute__((section(".sdata"))) = {
            &&sw_state_1, &&sw_state_2, &&sw_state_3,
            &&sw_state_4, &&sw_state_5, &&sw_state_6, &&sw_state_7,
            &&sw_state_8, &&sw_state_9, &&sw_state_15, &&sw_state_10,
            &&sw_state_11, &&sw_state_12, &&sw_state_13,
            &&sw_state_16, &&sw_state_14
        };
        s32 sw_state_value = ((func_80229BE0_S2 *)(state))->unk80;
        if ((unsigned int)sw_state_value > 16) {
            goto sw_state_invalid;
        }
        goto *jtbl_800C2C80[sw_state_value];
    }
    do {
        sw_state_invalid:
            ((func_80229BE0_S2 *)(state))->unk80 = 0;
            offset = 0;
            break;
        sw_state_1:
            offset = 0x44C;
            break;
        sw_state_2:
            offset = 0xC8;
            break;
        sw_state_3:
            offset = 0x12C;
            break;
        sw_state_4:
            offset = 0x4B0;
            break;
        sw_state_5:
            offset = 0x64;
            break;
        sw_state_6:
            offset = 0x258;
            break;
        sw_state_7:
            offset = 0x384;
            break;
        sw_state_8:
            offset = 0x320;
            break;
        sw_state_9:
        sw_state_15:
            offset = 0x2BC;
            break;
        sw_state_10:
            offset = 0x1F4;
            break;
        sw_state_11:
            offset = 0x640;
            break;
        sw_state_12:
            offset = 0x6A4;
            break;
        sw_state_13:
        sw_state_16:
            offset = 0x708;
            break;
        sw_state_14:
            offset = 0x76C;
            break;
    
    } while (0);
    }
    return arg1 + offset;
}

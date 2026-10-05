#include "common/types_1dc8418c21db.h"
#include "common/unused.h"
#include "span_16E000/code_80405DC0.h"
#include "span_16E000/code_8042F988.h"
#include "types.h"

/* Steps player arg2's menu state machine at 0x58 of its 0xB68-byte record in the block D_800E1454_de points to
   on the event func_8041B810_de reports: each state accepts its events, moves to the next state (by the game
   mode at 0x54 where it matters), updates the player's name records, and refreshes the player through
   func_804322AC_de. Returns zero. */

#if defined(VERSION_EU_X)
#define EV_1_A 0x2E9
#define EV_1_B 0x2EA
#define EV_3_A 0x2DF
#define EV_3_B 0x2DD
#define EV_3_C 0x2DE
#define EV_F_A 0x2EC
#define EV_F_B 0x2ED
#define EV_10_A 0x2C4
#define EV_10_B 0x2C3
#define EV_B_A 0x2D8
#define EV_B_B 0x2D7
#define EV_4_A 0x2F5
#define EV_4_B 0x2F6
#define EV_8_A 0x2E2
#define EV_8_B 0x2E1
#define EV_7_A 0x2E6
#define EV_7_B 0x2E5
#define EV_9_A 0x2AB
#define EV_9_B 0x2AC
#define EV_D_A 0x2FD
#define EV_D_1 0x2F8
#define EV_D_2 0x2FC
#define EV_D_3 0x2FB
#define EV_16_0 0x294
#define EV_16_1 0x296
#define EV_16_2 0x298
#define EV_16_3 0x29A
#define EV_16_X 0x293
#define EV_1B_X 0x29E
#define EV_1B_0 0x29F
#define EV_1B_1 0x2A1
#define EV_1B_2 0x2A3
#define EV_1B_3 0x2A5
#define EV_6_A 0x2CA
#define EV_6_B 0x2C9
#define EV_15_A 0x2DB
#define EV_15_B 0x2DA
#define EV_17_A 0x2BF
#define EV_17_B 0x2C0
#define EV_18_A 0x2B0
#define EV_18_B 0x2AF
#define EV_19_A 0x2BD
#define EV_1A_A 0x2BA
#define EV_1A_B 0x2BB
#define EV_1D_A 0x2CC
#define EV_1C_A 0x2CE
#define EV_1C_B 0x2CF
#define NODE_C 0x2B2
#define NODE_16 0x2F9
#elif defined(VERSION_DE)
#define EV_1_A 0x2D0
#define EV_1_B 0x2D1
#define EV_3_A 0x2D8
#define EV_3_B 0x2D7
#define EV_3_C 0x2D6
#define EV_F_A 0x2C4
#define EV_F_B 0x2C5
#define EV_10_A 0x2B6
#define EV_10_B 0x2B5
#define EV_B_A 0x2D3
#define EV_B_B 0x2D4
#define EV_4_A 0x2E8
#define EV_4_B 0x2E7
#define EV_8_A 0x2F4
#define EV_8_B 0x2F5
#define EV_7_A 0x2F0
#define EV_7_B 0x2F1
#define EV_9_A 0x2B1
#define EV_9_B 0x2B2
#define EV_D_A 0x2CD
#define EV_D_1 0x2CB
#define EV_D_2 0x2CC
#define EV_D_3 0x2C8
#define EV_16_0 0x28C
#define EV_16_1 0x28E
#define EV_16_2 0x290
#define EV_16_3 0x292
#define EV_16_X 0x28B
#define EV_1B_X 0x295
#define EV_1B_0 0x296
#define EV_1B_1 0x298
#define EV_1B_2 0x29A
#define EV_1B_3 0x29C
#define EV_6_A 0x2AE
#define EV_6_B 0x2AF
#define EV_15_A 0x2A8
#define EV_15_B 0x2A7
#define EV_17_A 0x2B8
#define EV_17_B 0x2B9
#define EV_18_A 0x2BE
#define EV_18_B 0x2BD
#define EV_19_A 0x2BB
#define EV_1A_A 0x2C0
#define EV_1A_B 0x2C1
#define EV_1C_A 0x2A2
#define EV_1C_B 0x2A3
#define EV_1D_A 0x2A5
#define NODE_C 0x2DA
#define NODE_16 0x2C9
#else
#define EV_1_A 0x2ED
#define EV_1_B 0x2EE
#define EV_3_A 0x2BD
#define EV_3_B 0x2BC
#define EV_3_C 0x2BE
#define EV_F_A 0x2F0
#define EV_F_B 0x2F1
#define EV_10_A 0x2B8
#define EV_10_B 0x2B9
#define EV_B_A 0x2D2
#define EV_B_B 0x2D3
#define EV_4_A 0x2DA
#define EV_4_B 0x2D9
#define EV_8_A 0x2D0
#define EV_8_B 0x2CF
#define EV_7_A 0x2CD
#define EV_7_B 0x2CC
#define EV_9_A 0x2C9
#define EV_9_B 0x2C8
#define EV_D_A 0x2B5
#define EV_D_1 0x2B3
#define EV_D_2 0x2B0
#define EV_D_3 0x2B4
#define EV_16_0 0x28B
#define EV_16_1 0x28D
#define EV_16_2 0x28F
#define EV_16_3 0x291
#define EV_16_X 0x28A
#define EV_1B_X 0x298
#define EV_1B_0 0x299
#define EV_1B_1 0x29B
#define EV_1B_2 0x29D
#define EV_1B_3 0x29F
#define EV_6_A 0x2E9
#define EV_6_B 0x2E8
#define EV_15_A 0x2E2
#define EV_15_B 0x2E3
#define EV_17_A 0x2AD
#define EV_17_B 0x2AE
#define EV_18_A 0x2AB
#define EV_18_B 0x2AA
#define EV_19_A 0x2EB
#define EV_1A_A 0x2A7
#define EV_1A_B 0x2A8
#define EV_1C_A 0x2DF
#define EV_1C_B 0x2E0
#define EV_1D_A 0x2C0
#define NODE_C 0x2F3
#define NODE_16 0x2B1
#endif

#if defined(VERSION_EU) || defined(VERSION_EU_X)
#define LOCALIZED_FIXED D_800E25A4[D_80152789]
#else
#define LOCALIZED_FIXED D_800D36D4
#endif
#define PL D_800E1454_de->players[p]

extern PakMenuController *D_800E1454_de;
extern u8 D_800FEB00[];
extern u8 D_801422D8[];
extern s32 D_800D36D4;
extern s32 D_800E25A4[];
extern u8 D_80152789;

extern void func_8029973C_de(void);
extern s32 func_8041B810_de(s32, s32);
extern void func_8041B7B4_de(s32, s32, s32);
extern void func_804322AC_de(s32);
extern void func_80434D70_de(s32);
extern s32 func_80435384_de(s32, s32 *);
extern s32 func_80434428_de(s32);
extern s32 func_80435128_de(s32);
extern void func_8043599C_de(s32, s32, s32);
extern void func_804356BC_de(s32);
extern void func_8043577C_de(s32);
extern void *func_8040EC30_de(s32, s32);
extern void func_8040E8D8_de(void *, s32);
extern s32 func_802A05D0_de(u8 *);
extern s32 func_80404858_de(s32, s32);
extern s32 func_802A03F4_de(s32, u8 *);
extern s32 func_804358C0_de(s32, s32);
extern void func_8022EF30_de(void *);
extern void func_80404E28_de(s32);
extern void func_80433610_de(s32);
extern void func_802A0724_de(void *, void *, s32);
extern void func_80433BCC_de(s32);

extern void func_8022F204_de(s32);
extern s32 func_80405290_de(s32);

s32 func_804306D8_de(s32 arg0, s32 arg1, s32 arg2) {
    s32 answer;
    s32 i;
    s32 j;
    s32 p;
    s32 event;
    s32 slot;
    s32 other;
    s32 q;
    s32 found;
    u8 *node;
    u8 *next;
    u8 *settings;
    u8 c;
    s32 sub;
    s32 mode;

    func_8029973C_de();
    i = 0;
    p = arg2 & 0xFFFF;
    event = func_8041B810_de(D_800E1454_de->root, p);
    switch (PL.state) {
    case 1:
        switch (event) {
        case EV_1_A:
            PL.back = 2;
            PL.state = 2;
            func_804322AC_de(p);
            break;
        case EV_1_B:
            switch (D_800E1454_de->phase) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
                PL.state = 0xE;
                func_804322AC_de(p);
                break;
            case 2:
                if (PL.host == 1) {
                    func_80434D70_de(p);
                } else {
                    PL.state = 0xE;
                }
                func_804322AC_de(p);
                break;
            case 7:
                PL.state = 0x1A;
                PL.next = 1;
                func_804322AC_de(p);
                break;
            }
            break;
        }
        break;
    case 3:
        switch (event) {
        case EV_3_A:
            switch (D_800E1454_de->phase) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
                PL.state = 0xE;
                func_804322AC_de(p);
                break;
            case 7:
                PL.state = 0x1A;
                PL.next = 1;
                func_804322AC_de(p);
                break;
            case 2:
                if (PL.host == 1) {
                    func_80434D70_de(p);
                } else {
                    PL.state = 0xE;
                }
                func_804322AC_de(p);
                break;
            }
            break;
        case EV_3_B:
            PL.state = 0x1C;
            func_804322AC_de(p);
            break;
        case EV_3_C:
            PL.back = 2;
            PL.state = 2;
            func_804322AC_de(p);
            break;
        }
        break;
    case 15:
        switch (event) {
        case EV_F_A:
            if (func_80435384_de(p, &answer) == 0) {
                if (answer == 1) {
                    PL.state = 0xC;
                } else {
                    PL.state = 0xB;
                }
            } else {
                PL.back = 2;
                PL.state = 2;
            }
            func_804322AC_de(p);
            break;
        case EV_F_B:
            if (D_800E1454_de->phase == 7) {
                PL.state = 0x1A;
                PL.next = 0xF;
            } else {
                PL.state = 0xE;
            }
            func_804322AC_de(p);
            break;
        }
        break;
    case 16:
        switch (event) {
        case EV_10_A:
            PL.records[PL.record].owner = (u8) PL.record;
            PL.records[PL.record].player = p;
            PL.records[PL.record].time = PL.profile;
            if (D_800E1454_de->phase == 7) {
                settings = D_801422D8;
                PL.records[PL.record].setting[0] = settings[0x7B];
                PL.records[PL.record].setting[1] = settings[0x7D];
                PL.records[PL.record].setting[2] = settings[0x79];
                PL.records[PL.record].setting[3] = settings[0x7A];
                PL.records[PL.record].setting[4] = settings[0x82];
            }
            if (func_80434428_de(p) == 1) {
                switch (D_800E1454_de->phase) {
                case 0:
                    if (func_80435128_de(p) >= 0) {
                        PL.state = 0x17;
                    } else {
                        PL.state = 0xE;
                    }
                    break;
                case 7:
                    func_8043599C_de(p, 0, 0);
                    func_804356BC_de(0);
                    func_8029973C_de();
                    func_8043577C_de(9);
                    return 0;
                default:
                    PL.state = 0xD;
                    break;
                }
                func_804322AC_de(p);
            }
            break;
        case EV_10_B:
            switch (D_800E1454_de->phase) {
            case 0:
                PL.state = 0x17;
                break;
            case 1:
                PL.state = 0x17;
                break;
            case 7:
                PL.state = 0x17;
                break;
            default:
                PL.state = 0xD;
                break;
            }
            func_804322AC_de(p);
            break;
        }
        break;
    case 12:
        slot = func_80435128_de(p);
        if (slot >= 0) {
            node = func_8040EC30_de(PL.menu, NODE_C);
            for (j = 0; ((Shared_Item *) node)->flags & 0x10; j++) {
                PL.records[slot].name[j] = *(u8 *) ((Shared_Item *) node)->label->unk38;
                next = (u8 *) ((Shared_Item *) node)->next;
                if (next == 0) {
                    break;
                }
                node = next;
            }
            for (j = 6; j > 0; j--) {
                c = PL.records[slot].name[j];
                if (c != 0 && c != ' ') {
                    break;
                }
                PL.records[slot].name[j] = 0;
            }
            PL.state = 0x10;
            PL.record = slot;
        } else {
            PL.state = 3;
        }
        func_804322AC_de(p);
        break;
    case 11:
        switch (event) {
        case EV_B_A:
            PL.state = 4;
            func_804322AC_de(p);
            break;
        case EV_B_B:
            switch (D_800E1454_de->phase) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
                PL.state = 0xE;
                func_804322AC_de(p);
                break;
            case 2:
                if (PL.host == 1) {
                    func_80434D70_de(p);
                } else {
                    PL.state = 0xE;
                }
                func_804322AC_de(p);
                break;
            case 7:
                PL.state = 0x1A;
                PL.next = 0xB;
                func_804322AC_de(p);
                break;
            }
            break;
        }
        break;
    case 4:
        switch (event) {
        case EV_4_A:
            switch (D_800E1454_de->phase) {
            case 0:
                PL.state = 0xF;
                break;
            case 2:
                PL.back = 2;
                PL.state = 2;
                break;
            case 7:
                PL.back = 2;
                PL.state = 2;
                break;
            case 1:
            case 4:
            case 6:
                PL.state = 0xE;
                break;
            }
            func_804322AC_de(p);
            break;
        case EV_4_B:
            i = PL.slot;
            if (func_802A05D0_de(PL.names[i].text) > 0) {
                PL.state = 8;
                func_804322AC_de(p);
            }
            break;
        }
        break;
    case 8:
        switch (event) {
        case EV_8_A:
            if (func_80404858_de(p, PL.slot) == 0) {
                if (func_802A03F4_de(LOCALIZED_FIXED,
                                     PL.names[PL.slot].code) == 0) {
                    for (j = 0; j < 4; j++) {
                        found = func_804358C0_de(PL.profile, PL.records[j].owner);
                        if (found != -1) {
                            func_8022EF30_de(&((Record_func_80433914_de *) D_800FEB00)[found]);
                        }
                    }
                }
                PL.state = 4;
                func_804322AC_de(p);
            } else {
                func_80404E28_de(p);
                func_80433610_de(p);
            }
            break;
        case EV_8_B:
            PL.state = 4;
            func_804322AC_de(p);
            break;
        }
        break;
    case 7:
        switch (event) {
        case EV_7_A:
            i = PL.choice;
            other = func_804358C0_de(PL.profile, PL.records[i].owner);
            if (other != -1) {
                func_8022EF30_de(&((Record_func_80433914_de *) D_800FEB00)[other]);
            }
            func_8022EF30_de(&PL.records[i]);
            if (func_80434428_de(p) == 1) {
                if (PL.sub == 5) {
                    switch (D_800E1454_de->phase) {
                    case 0:
                        PL.back = 2;
                        PL.state = 2;
                        PL.next = 0xC;
                        PL.sub = 0;
                        break;
                    case 2:
                        PL.next = 9;
                        PL.back = 2;
                        PL.state = 2;
                        PL.sub = 3;
                        break;
                    default:
                        PL.state = 0xD;
                        break;
                    }
                } else {
                    PL.state = 0xD;
                }
                func_804322AC_de(p);
            }
            break;
        case EV_7_B:
            PL.state = 0xD;
            func_804322AC_de(p);
            break;
        }
        break;
    case 9:
        switch (event) {
        case EV_9_A:
            slot = func_80435128_de(p);
            if (slot >= 0) {
                func_802A0724_de(&PL.records[slot],
                                 &D_800E1454_de->players[D_800E1454_de->source].records[D_800E1454_de->sourceRecord],
                                 0x190);
                PL.record = slot;
                PL.records[slot].owner = slot;
                PL.records[slot].time = PL.profile;
            }
            if (func_80434428_de(p) == 1) {
                if (D_800E1454_de->phase == 2) {
                    if (PL.host == 1) {
                        func_80434D70_de(p);
                    } else {
                        PL.state = 0xE;
                    }
                } else {
                    PL.state = 0xD;
                }
                func_804322AC_de(p);
            }
            break;
        case EV_9_B:
            if (D_800E1454_de->phase == 2) {
                if (PL.host == 1) {
                    func_80434D70_de(p);
                } else {
                    PL.state = 0xE;
                }
            } else {
                PL.state = 0xD;
            }
            func_804322AC_de(p);
            break;
        }
        break;
    case 13:
        if (event == EV_D_A) {
            sub = PL.sub;
            switch (sub) {
            case 3:
                PL.state = 0x11;
                q = func_80434750_de((u8 *) D_800E1454_de + p * sizeof(Shared_Player_func_80433F14));
                if (q >= 0) {
                    D_800E1454_de->players[q].back = 2;
                    D_800E1454_de->players[q].state = 2;
                    D_800E1454_de->players[q].next = 0xD;
                    D_800E1454_de->players[q].sub = 3;
                    func_804322AC_de(q);
                }
                break;
            case 6:
                switch (D_800E1454_de->phase) {
                case 1:
                    PL.state = 0x11;
                    q = func_80434750_de((u8 *) D_800E1454_de + p * sizeof(Shared_Player_func_80433F14));
                    if (q >= 0) {
                        D_800E1454_de->players[q].back = 2;
                        D_800E1454_de->players[q].state = 2;
                        D_800E1454_de->players[q].next = 0xD;
                        D_800E1454_de->players[q].sub = sub;
                        func_804322AC_de(q);
                    }
                    break;
                case 7:
                    PL.state = 0x1A;
                    PL.next = 0xD;
                    break;
                }
                break;
            case 0:
                PL.state = 0xE;
                break;
            case 5:
                mode = D_800E1454_de->phase;
                switch (mode) {
                case 3:
                    PL.state = 0xE;
                    break;
                case 0:
                    PL.back = 2;
                    PL.state = 2;
                    PL.next = 0xC;
                    PL.sub = 0;
                    break;
                case 2:
                    PL.back = mode;
                    PL.state = mode;
                    PL.next = 9;
                    PL.sub = 3;
                    break;
                }
                break;
            }
            func_804322AC_de(p);
            break;
        }
        i = 0;
        switch (event) {
        case EV_D_1:
            i = 1;
            break;
        case EV_D_2:
            i = 2;
            break;
        case EV_D_3:
            i = 3;
            break;
        }
        switch (PL.sub) {
        case 0:
            break;
        case 3:
            if (PL.used[i] == 1) {
                func_8043599C_de(p, i, 0);
                PL.choice = i;
                PL.state = 0x1B;
                func_804322AC_de(p);
            }
            break;
        case 6:
            switch (D_800E1454_de->phase) {
            case 1:
                if (PL.used[i] == 1) {
                    PL.choice = i;
                    PL.state = 0x16;
                    func_804322AC_de(p);
                }
                break;
            case 7:
                if (PL.used[i] == 1) {
                    func_8043599C_de(p, i, 0);
                    func_804356BC_de(0);
                    func_8029973C_de();
                    func_8043577C_de(9);
                    return 0;
                }
                break;
            }
            break;
        case 5:
            switch (D_800E1454_de->phase) {
            case 0:
            case 2:
            case 3:
                if (PL.used[i] != 2) {
                    PL.choice = i;
                    PL.state = 7;
                    func_804322AC_de(p);
                }
                break;
            }
            break;
        }
        break;
    case 22:
        switch (event) {
        case EV_16_0:
            i = 0;
            break;
        case EV_16_1:
            i = 1;
            break;
        case EV_16_2:
            i = 2;
            break;
        case EV_16_3:
            i = 3;
            break;
        case EV_16_X:
            func_8043577C_de(3);
            return 0;
        }
        func_8043599C_de(p, PL.choice, i);
        func_804356BC_de(i);
        func_8040E8D8_de(func_8040EC30_de(PL.notes[PL.choice], NODE_16), 1);
        PL.used[PL.choice] = 0;
        D_800E1454_de->ports[i].active = 0;
        PL.port = i;
        func_80433BCC_de(p);
        PL.state = 0xD;
        func_804322AC_de(p);
        break;
    case 27:
        switch (event) {
        case EV_1B_X:
            func_8043577C_de(3);
            return 0;
        case EV_1B_0:
            i = 0;
            break;
        case EV_1B_1:
            i = 1;
            break;
        case EV_1B_2:
            i = 2;
            break;
        case EV_1B_3:
            i = 3;
            break;
        }
        if (i != p) {
            func_8041B7B4_de(D_800E1454_de->root, p, 1);
            D_800E1454_de->players[i].back = 2;
            D_800E1454_de->players[i].state = 2;
            D_800E1454_de->players[i].next = 9;
            D_800E1454_de->players[i].sub = 3;
            D_800E1454_de->players[i].host = 1;
            func_804322AC_de(i);
        } else {
            PL.state = 9;
            func_804322AC_de(p);
        }
        break;
    case 6:
        switch (event) {
        case EV_6_A:
            PL.state = 0xE;
            func_804322AC_de(p);
            break;
        case EV_6_B:
            func_80434B08_de(p);
            if (func_80434428_de(p) == 1) {
                PL.state = 0xE;
                func_804322AC_de(p);
            }
            break;
        }
        break;
    case 21:
        switch (event) {
        case EV_15_A:
            switch (D_800E1454_de->phase) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                PL.state = 0xE;
                func_804322AC_de(p);
                break;
            }
            break;
        case EV_15_B:
            PL.back = 2;
            PL.state = 2;
            func_804322AC_de(p);
            break;
        }
        break;
    case 23:
        switch (event) {
        case EV_17_A:
            PL.state = 0xC;
            func_804322AC_de(p);
            break;
        case EV_17_B:
            if (D_800E1454_de->phase == 7) {
                PL.state = 0x1A;
                PL.next = 0x17;
            } else {
                PL.state = 0xE;
            }
            func_804322AC_de(p);
            break;
        }
        break;
    case 24:
        switch (event) {
        case EV_18_A:
            PL.state = 0xD;
            PL.sub = 5;
            func_804322AC_de(p);
            break;
        case EV_18_B:
            if (PL.host == 1) {
                func_80434D70_de(p);
            } else {
                PL.state = 0xE;
            }
            func_804322AC_de(p);
            break;
        }
        break;
    case 25:
        if (event == EV_19_A) {
            if (PL.host == 1) {
                func_80434D70_de(p);
            } else {
                PL.state = 0xE;
            }
            func_804322AC_de(p);
        }
        break;
    case 26:
        switch (event) {
        case EV_1A_A:
            D_800E1454_de->players[0].back = 2;
            D_800E1454_de->players[0].state = 2;
            D_800E1454_de->players[0].next = 0xD;
            D_800E1454_de->players[0].sub = 6;
            func_804322AC_de(p);
            break;
        case EV_1A_B:
            func_8022F204_de(0);
            func_8029973C_de();
            func_8043577C_de(9);
            return 0;
        }
        break;
#if defined(VERSION_EU_X)
    case 28:
        switch (event) {
        case EV_1C_A:
            if (func_80405290_de(p) != 0) {
                PL.state = 0x1D;
                func_804322AC_de(p);
            } else {
                PL.back = 2;
                PL.state = 2;
                func_804322AC_de(p);
            }
            break;
        case EV_1C_B:
            PL.back = 2;
            PL.state = 2;
            func_804322AC_de(p);
            break;
        }
        break;
#else
    case 28:
        switch (event) {
        case EV_1C_A:
            PL.back = 2;
            PL.state = 2;
            func_804322AC_de(p);
            break;
        case EV_1C_B:
            if (func_80405290_de(p) != 0) {
                PL.state = 0x1D;
                func_804322AC_de(p);
            } else {
                PL.back = 2;
                PL.state = 2;
                func_804322AC_de(p);
            }
            break;
        }
        break;
#endif
    case 29:
        if (event == EV_1D_A) {
            PL.back = 2;
            PL.state = 2;
            func_804322AC_de(p);
        }
        break;
    }
    return 0;
}

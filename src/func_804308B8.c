#include "shared/block.h"
#include "shared/item.h"
#include "shared/label.h"

/* Steps player arg2's menu state machine at 0x58 of its 0xB68-byte record in the block D_800E54A4 on the event func_8041B890 reports: each state accepts its events, moves to the next state (by the game mode at 0x54 where it matters), updates the player's name records, and refreshes the player through func_80432488. Returns zero. */

typedef Shared_Player_func_80433F14 Player;
typedef Shared_Block Block;

extern Block *D_800E54A4;
extern u8 D_80102B00[];
extern u8 D_80146398[];
#if defined(VERSION_EU)
extern u8 D_80152789;
extern s32 D_800E25A4[];
#elif defined(VERSION_EU_X)
extern u8 D_80152789;
extern s32 D_800DDEB0[];
#else
extern s32 D_800D7700;
#endif

extern void func_8029A73C(void);
extern s32 func_8041B890(s32, s32);
extern void func_8041B834(s32, s32, s32);
extern void func_80432488(s32);
extern void func_80434F4C(s32);
extern s32 func_80435560(s32, s32 *);
extern s32 func_80434604(s32);
extern s32 func_80435304(s32);
extern void func_80435B78(s32, s32, s32);
extern void func_80435898(s32);
extern void func_80435958(s32);
extern void *func_8040ECB0(s32, s32);
extern void func_8040E958(void *, s32);
extern s32 func_802A15D0(u8 *);
extern s32 func_80404858(s32, s32);
extern s32 func_802A13F4(s32, u8 *);
extern s32 func_80435A9C(s32, s32);
extern void func_8022EF20(void *);
extern void func_80404E28(s32);
extern void func_804337EC(s32);
extern void func_802A1724(void *, void *, s32);
extern s32 func_8043492C(void *);
extern void func_80433DA8(s32);
extern void func_80434CE4(s32);
extern void func_8022F1F4(s32);
extern s32 func_80405290(s32);

s32 func_804308B8(s32 arg0, s32 arg1, s32 arg2) {
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

    func_8029A73C();
    i = 0;
    p = arg2 & 0xFFFF;
    event = func_8041B890(D_800E54A4->menu, p);
    switch (D_800E54A4->players[p].state) {
    case 1:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2E9:
#elif defined(VERSION_DE)
        case 0x2D0:
#else
        case 0x2ED:
#endif
            D_800E54A4->players[p].back = 2;
            D_800E54A4->players[p].state = 2;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2EA:
#elif defined(VERSION_DE)
        case 0x2D1:
#else
        case 0x2EE:
#endif
            switch (D_800E54A4->mode) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
                D_800E54A4->players[p].state = 0xE;
                func_80432488(p);
                break;
            case 2:
                if (D_800E54A4->players[p].host == 1) {
                    func_80434F4C(p);
                } else {
                    D_800E54A4->players[p].state = 0xE;
                }
                func_80432488(p);
                break;
            case 7:
                D_800E54A4->players[p].state = 0x1A;
                D_800E54A4->players[p].next = 1;
                func_80432488(p);
                break;
            }
            break;
        }
        break;
    case 3:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2DF:
#elif defined(VERSION_DE)
        case 0x2D8:
#else
        case 0x2BD:
#endif
            switch (D_800E54A4->mode) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
                D_800E54A4->players[p].state = 0xE;
                func_80432488(p);
                break;
            case 7:
                D_800E54A4->players[p].state = 0x1A;
                D_800E54A4->players[p].next = 1;
                func_80432488(p);
                break;
            case 2:
                if (D_800E54A4->players[p].host == 1) {
                    func_80434F4C(p);
                } else {
                    D_800E54A4->players[p].state = 0xE;
                }
                func_80432488(p);
                break;
            }
            break;
#if defined(VERSION_EU_X)
        case 0x2DD:
#elif defined(VERSION_DE)
        case 0x2D7:
#else
        case 0x2BC:
#endif
            D_800E54A4->players[p].state = 0x1C;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2DE:
#elif defined(VERSION_DE)
        case 0x2D6:
#else
        case 0x2BE:
#endif
            D_800E54A4->players[p].back = 2;
            D_800E54A4->players[p].state = 2;
            func_80432488(p);
            break;
        }
        break;
    case 15:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2EC:
#elif defined(VERSION_DE)
        case 0x2C4:
#else
        case 0x2F0:
#endif
            if (func_80435560(p, &answer) == 0) {
                if (answer == 1) {
                    D_800E54A4->players[p].state = 0xC;
                } else {
                    D_800E54A4->players[p].state = 0xB;
                }
            } else {
                D_800E54A4->players[p].back = 2;
                D_800E54A4->players[p].state = 2;
            }
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2ED:
#elif defined(VERSION_DE)
        case 0x2C5:
#else
        case 0x2F1:
#endif
            if (D_800E54A4->mode == 7) {
                D_800E54A4->players[p].state = 0x1A;
                D_800E54A4->players[p].next = 0xF;
            } else {
                D_800E54A4->players[p].state = 0xE;
            }
            func_80432488(p);
            break;
        }
        break;
    case 16:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2C4:
#elif defined(VERSION_DE)
        case 0x2B6:
#else
        case 0x2B8:
#endif
            D_800E54A4->players[p].records[D_800E54A4->players[p].record].owner = (u8) D_800E54A4->players[p].record;
            D_800E54A4->players[p].records[D_800E54A4->players[p].record].player = p;
            D_800E54A4->players[p].records[D_800E54A4->players[p].record].time = D_800E54A4->players[p].profile;
            if (D_800E54A4->mode == 7) {
                settings = D_80146398;
                D_800E54A4->players[p].records[D_800E54A4->players[p].record].setting[0] = settings[0x7B];
                D_800E54A4->players[p].records[D_800E54A4->players[p].record].setting[1] = settings[0x7D];
                D_800E54A4->players[p].records[D_800E54A4->players[p].record].setting[2] = settings[0x79];
                D_800E54A4->players[p].records[D_800E54A4->players[p].record].setting[3] = settings[0x7A];
                D_800E54A4->players[p].records[D_800E54A4->players[p].record].setting[4] = settings[0x82];
            }
            if (func_80434604(p) == 1) {
                switch (D_800E54A4->mode) {
                case 0:
                    if (func_80435304(p) >= 0) {
                        D_800E54A4->players[p].state = 0x17;
                    } else {
                        D_800E54A4->players[p].state = 0xE;
                    }
                    break;
                case 7:
                    func_80435B78(p, 0, 0);
                    func_80435898(0);
                    func_8029A73C();
                    func_80435958(9);
                    return 0;
                default:
                    D_800E54A4->players[p].state = 0xD;
                    break;
                }
                func_80432488(p);
            }
            break;
#if defined(VERSION_EU_X)
        case 0x2C3:
#elif defined(VERSION_DE)
        case 0x2B5:
#else
        case 0x2B9:
#endif
            switch (D_800E54A4->mode) {
            case 0:
                D_800E54A4->players[p].state = 0x17;
                break;
            case 1:
                D_800E54A4->players[p].state = 0x17;
                break;
            case 7:
                D_800E54A4->players[p].state = 0x17;
                break;
            default:
                D_800E54A4->players[p].state = 0xD;
                break;
            }
            func_80432488(p);
            break;
        }
        break;
    case 12:
        slot = func_80435304(p);
        if (slot >= 0) {
#if defined(VERSION_EU_X)
            node = func_8040ECB0(D_800E54A4->players[p].menu, 0x2B2);
#elif defined(VERSION_DE)
            node = func_8040ECB0(D_800E54A4->players[p].menu, 0x2DA);
#else
            node = func_8040ECB0(D_800E54A4->players[p].menu, 0x2F3);
#endif
            for (j = 0; ((Shared_Item *) node)->flags & 0x10; j++) {
                D_800E54A4->players[p].records[slot].name[j] = *(u8 *) ((Shared_Item *) node)->label->text;
                next = (u8 *) ((Shared_Item *) node)->next;
                if (next == 0) {
                    break;
                }
                node = next;
            }
            for (j = 6; j > 0; j--) {
                c = D_800E54A4->players[p].records[slot].name[j];
                if (c != 0 && c != ' ') {
                    break;
                }
                D_800E54A4->players[p].records[slot].name[j] = 0;
            }
            D_800E54A4->players[p].state = 0x10;
            D_800E54A4->players[p].record = slot;
        } else {
            D_800E54A4->players[p].state = 3;
        }
        func_80432488(p);
        break;
    case 11:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2D8:
#elif defined(VERSION_DE)
        case 0x2D3:
#else
        case 0x2D2:
#endif
            D_800E54A4->players[p].state = 4;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2D7:
#elif defined(VERSION_DE)
        case 0x2D4:
#else
        case 0x2D3:
#endif
            switch (D_800E54A4->mode) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
                D_800E54A4->players[p].state = 0xE;
                func_80432488(p);
                break;
            case 2:
                if (D_800E54A4->players[p].host == 1) {
                    func_80434F4C(p);
                } else {
                    D_800E54A4->players[p].state = 0xE;
                }
                func_80432488(p);
                break;
            case 7:
                D_800E54A4->players[p].state = 0x1A;
                D_800E54A4->players[p].next = 0xB;
                func_80432488(p);
                break;
            }
            break;
        }
        break;
    case 4:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2F5:
#elif defined(VERSION_DE)
        case 0x2E8:
#else
        case 0x2DA:
#endif
            switch (D_800E54A4->mode) {
            case 0:
                D_800E54A4->players[p].state = 0xF;
                break;
            case 2:
                D_800E54A4->players[p].back = 2;
                D_800E54A4->players[p].state = 2;
                break;
            case 7:
                D_800E54A4->players[p].back = 2;
                D_800E54A4->players[p].state = 2;
                break;
            case 1:
            case 4:
            case 6:
                D_800E54A4->players[p].state = 0xE;
                break;
            }
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2F6:
#elif defined(VERSION_DE)
        case 0x2E7:
#else
        case 0x2D9:
#endif
            i = D_800E54A4->players[p].slot;
            if (func_802A15D0(D_800E54A4->players[p].names[i].text) > 0) {
                D_800E54A4->players[p].state = 8;
                func_80432488(p);
            }
            break;
        }
        break;
    case 8:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2E2:
#elif defined(VERSION_DE)
        case 0x2F4:
#else
        case 0x2D0:
#endif
            if (func_80404858(p, D_800E54A4->players[p].slot) == 0) {
                if (func_802A13F4(
#if defined(VERSION_EU)
                                  D_800E25A4[D_80152789],
#elif defined(VERSION_EU_X)
                                  D_800DDEB0[D_80152789],
#else
                                  D_800D7700,
#endif
                                  D_800E54A4->players[p].names[D_800E54A4->players[p].slot].code) == 0) {
                    for (j = 0; j < 4; j++) {
                        found = func_80435A9C(D_800E54A4->players[p].profile, D_800E54A4->players[p].records[j].owner);
                        if (found != -1) {
                            func_8022EF20(&((Record *) D_80102B00)[found]);
                        }
                    }
                }
                D_800E54A4->players[p].state = 4;
                func_80432488(p);
            } else {
                func_80404E28(p);
                func_804337EC(p);
            }
            break;
#if defined(VERSION_EU_X)
        case 0x2E1:
#elif defined(VERSION_DE)
        case 0x2F5:
#else
        case 0x2CF:
#endif
            D_800E54A4->players[p].state = 4;
            func_80432488(p);
            break;
        }
        break;
    case 7:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2E6:
#elif defined(VERSION_DE)
        case 0x2F0:
#else
        case 0x2CD:
#endif
            i = D_800E54A4->players[p].choice;
            other = func_80435A9C(D_800E54A4->players[p].profile, D_800E54A4->players[p].records[i].owner);
            if (other != -1) {
                func_8022EF20(&((Record *) D_80102B00)[other]);
            }
            func_8022EF20(&D_800E54A4->players[p].records[i]);
            if (func_80434604(p) == 1) {
                if (D_800E54A4->players[p].sub == 5) {
                    switch (D_800E54A4->mode) {
                    case 0:
                        D_800E54A4->players[p].back = 2;
                        D_800E54A4->players[p].state = 2;
                        D_800E54A4->players[p].next = 0xC;
                        D_800E54A4->players[p].sub = 0;
                        break;
                    case 2:
                        D_800E54A4->players[p].next = 9;
                        D_800E54A4->players[p].back = 2;
                        D_800E54A4->players[p].state = 2;
                        D_800E54A4->players[p].sub = 3;
                        break;
                    default:
                        D_800E54A4->players[p].state = 0xD;
                        break;
                    }
                } else {
                    D_800E54A4->players[p].state = 0xD;
                }
                func_80432488(p);
            }
            break;
#if defined(VERSION_EU_X)
        case 0x2E5:
#elif defined(VERSION_DE)
        case 0x2F1:
#else
        case 0x2CC:
#endif
            D_800E54A4->players[p].state = 0xD;
            func_80432488(p);
            break;
        }
        break;
    case 9:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2AB:
#elif defined(VERSION_DE)
        case 0x2B1:
#else
        case 0x2C9:
#endif
            slot = func_80435304(p);
            if (slot >= 0) {
                func_802A1724(&D_800E54A4->players[p].records[slot],
                              &D_800E54A4->players[D_800E54A4->source].records[D_800E54A4->sourceRecord], 0x190);
                D_800E54A4->players[p].record = slot;
                D_800E54A4->players[p].records[slot].owner = slot;
                D_800E54A4->players[p].records[slot].time = D_800E54A4->players[p].profile;
            }
            if (func_80434604(p) == 1) {
                if (D_800E54A4->mode == 2) {
                    if (D_800E54A4->players[p].host == 1) {
                        func_80434F4C(p);
                    } else {
                        D_800E54A4->players[p].state = 0xE;
                    }
                } else {
                    D_800E54A4->players[p].state = 0xD;
                }
                func_80432488(p);
            }
            break;
#if defined(VERSION_EU_X)
        case 0x2AC:
#elif defined(VERSION_DE)
        case 0x2B2:
#else
        case 0x2C8:
#endif
            if (D_800E54A4->mode == 2) {
                if (D_800E54A4->players[p].host == 1) {
                    func_80434F4C(p);
                } else {
                    D_800E54A4->players[p].state = 0xE;
                }
            } else {
                D_800E54A4->players[p].state = 0xD;
            }
            func_80432488(p);
            break;
        }
        break;
    case 13:
        if (event ==
#if defined(VERSION_EU_X)
            0x2FD
#elif defined(VERSION_DE)
            0x2CD
#else
            0x2B5
#endif
        ) {
            sub = D_800E54A4->players[p].sub;
            switch (sub) {
            case 3:
                D_800E54A4->players[p].state = 0x11;
                q = func_8043492C((u8 *) D_800E54A4 + p * sizeof(Player));
                if (q >= 0) {
                    D_800E54A4->players[q].back = 2;
                    D_800E54A4->players[q].state = 2;
                    D_800E54A4->players[q].next = 0xD;
                    D_800E54A4->players[q].sub = 3;
                    func_80432488(q);
                }
                break;
            case 6:
                switch (D_800E54A4->mode) {
                case 1:
                    D_800E54A4->players[p].state = 0x11;
                    q = func_8043492C((u8 *) D_800E54A4 + p * sizeof(Player));
                    if (q >= 0) {
                        D_800E54A4->players[q].back = 2;
                        D_800E54A4->players[q].state = 2;
                        D_800E54A4->players[q].next = 0xD;
                        D_800E54A4->players[q].sub = sub;
                        func_80432488(q);
                    }
                    break;
                case 7:
                    D_800E54A4->players[p].state = 0x1A;
                    D_800E54A4->players[p].next = 0xD;
                    break;
                }
                break;
            case 0:
                D_800E54A4->players[p].state = 0xE;
                break;
            case 5:
                mode = D_800E54A4->mode;
                switch (mode) {
                case 3:
                    D_800E54A4->players[p].state = 0xE;
                    break;
                case 0:
                    D_800E54A4->players[p].back = 2;
                    D_800E54A4->players[p].state = 2;
                    D_800E54A4->players[p].next = 0xC;
                    D_800E54A4->players[p].sub = 0;
                    break;
                case 2:
                    D_800E54A4->players[p].back = mode;
                    D_800E54A4->players[p].state = mode;
                    D_800E54A4->players[p].next = 9;
                    D_800E54A4->players[p].sub = 3;
                    break;
                }
                break;
            }
            func_80432488(p);
            break;
        }
        i = 0;
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2F8:
#elif defined(VERSION_DE)
        case 0x2CB:
#else
        case 0x2B3:
#endif
            i = 1;
            break;
#if defined(VERSION_EU_X)
        case 0x2FC:
#elif defined(VERSION_DE)
        case 0x2CC:
#else
        case 0x2B0:
#endif
            i = 2;
            break;
#if defined(VERSION_EU_X)
        case 0x2FB:
#elif defined(VERSION_DE)
        case 0x2C8:
#else
        case 0x2B4:
#endif
            i = 3;
            break;
        }
        switch (D_800E54A4->players[p].sub) {
        case 0:
            break;
        case 3:
            if (D_800E54A4->players[p].used[i] == 1) {
                func_80435B78(p, i, 0);
                D_800E54A4->players[p].choice = i;
                D_800E54A4->players[p].state = 0x1B;
                func_80432488(p);
            }
            break;
        case 6:
            switch (D_800E54A4->mode) {
            case 1:
                if (D_800E54A4->players[p].used[i] == 1) {
                    D_800E54A4->players[p].choice = i;
                    D_800E54A4->players[p].state = 0x16;
                    func_80432488(p);
                }
                break;
            case 7:
                if (D_800E54A4->players[p].used[i] == 1) {
                    func_80435B78(p, i, 0);
                    func_80435898(0);
                    func_8029A73C();
                    func_80435958(9);
                    return 0;
                }
                break;
            }
            break;
        case 5:
            switch (D_800E54A4->mode) {
            case 0:
            case 2:
            case 3:
                if (D_800E54A4->players[p].used[i] != 2) {
                    D_800E54A4->players[p].choice = i;
                    D_800E54A4->players[p].state = 7;
                    func_80432488(p);
                }
                break;
            }
            break;
        }
        break;
    case 22:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x294:
#elif defined(VERSION_DE)
        case 0x28C:
#else
        case 0x28B:
#endif
            i = 0;
            break;
#if defined(VERSION_EU_X)
        case 0x296:
#elif defined(VERSION_DE)
        case 0x28E:
#else
        case 0x28D:
#endif
            i = 1;
            break;
#if defined(VERSION_EU_X)
        case 0x298:
#elif defined(VERSION_DE)
        case 0x290:
#else
        case 0x28F:
#endif
            i = 2;
            break;
#if defined(VERSION_EU_X)
        case 0x29A:
#elif defined(VERSION_DE)
        case 0x292:
#else
        case 0x291:
#endif
            i = 3;
            break;
#if defined(VERSION_EU_X)
        case 0x293:
#elif defined(VERSION_DE)
        case 0x28B:
#else
        case 0x28A:
#endif
            func_80435958(3);
            return 0;
        }
        func_80435B78(p, D_800E54A4->players[p].choice, i);
        func_80435898(i);
#if defined(VERSION_EU_X)
        func_8040E958(func_8040ECB0(D_800E54A4->players[p].notes[D_800E54A4->players[p].choice], 0x2F9), 1);
#elif defined(VERSION_DE)
        func_8040E958(func_8040ECB0(D_800E54A4->players[p].notes[D_800E54A4->players[p].choice], 0x2C9), 1);
#else
        func_8040E958(func_8040ECB0(D_800E54A4->players[p].notes[D_800E54A4->players[p].choice], 0x2B1), 1);
#endif
        D_800E54A4->players[p].used[D_800E54A4->players[p].choice] = 0;
        D_800E54A4->ports[i].active = 0;
        D_800E54A4->players[p].port = i;
        func_80433DA8(p);
        D_800E54A4->players[p].state = 0xD;
        func_80432488(p);
        break;
    case 27:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x29E:
#elif defined(VERSION_DE)
        case 0x295:
#else
        case 0x298:
#endif
            func_80435958(3);
            return 0;
#if defined(VERSION_EU_X)
        case 0x29F:
#elif defined(VERSION_DE)
        case 0x296:
#else
        case 0x299:
#endif
            i = 0;
            break;
#if defined(VERSION_EU_X)
        case 0x2A1:
#elif defined(VERSION_DE)
        case 0x298:
#else
        case 0x29B:
#endif
            i = 1;
            break;
#if defined(VERSION_EU_X)
        case 0x2A3:
#elif defined(VERSION_DE)
        case 0x29A:
#else
        case 0x29D:
#endif
            i = 2;
            break;
#if defined(VERSION_EU_X)
        case 0x2A5:
#elif defined(VERSION_DE)
        case 0x29C:
#else
        case 0x29F:
#endif
            i = 3;
            break;
        }
        if (i != p) {
            func_8041B834(D_800E54A4->menu, p, 1);
            D_800E54A4->players[i].back = 2;
            D_800E54A4->players[i].state = 2;
            D_800E54A4->players[i].next = 9;
            D_800E54A4->players[i].sub = 3;
            D_800E54A4->players[i].host = 1;
            func_80432488(i);
        } else {
            D_800E54A4->players[p].state = 9;
            func_80432488(p);
        }
        break;
    case 6:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2CA:
#elif defined(VERSION_DE)
        case 0x2AE:
#else
        case 0x2E9:
#endif
            D_800E54A4->players[p].state = 0xE;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2C9:
#elif defined(VERSION_DE)
        case 0x2AF:
#else
        case 0x2E8:
#endif
            func_80434CE4(p);
            if (func_80434604(p) == 1) {
                D_800E54A4->players[p].state = 0xE;
                func_80432488(p);
            }
            break;
        }
        break;
    case 21:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2DB:
#elif defined(VERSION_DE)
        case 0x2A8:
#else
        case 0x2E2:
#endif
            switch (D_800E54A4->mode) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                D_800E54A4->players[p].state = 0xE;
                func_80432488(p);
                break;
            }
            break;
#if defined(VERSION_EU_X)
        case 0x2DA:
#elif defined(VERSION_DE)
        case 0x2A7:
#else
        case 0x2E3:
#endif
            D_800E54A4->players[p].back = 2;
            D_800E54A4->players[p].state = 2;
            func_80432488(p);
            break;
        }
        break;
    case 23:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2BF:
#elif defined(VERSION_DE)
        case 0x2B8:
#else
        case 0x2AD:
#endif
            D_800E54A4->players[p].state = 0xC;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2C0:
#elif defined(VERSION_DE)
        case 0x2B9:
#else
        case 0x2AE:
#endif
            if (D_800E54A4->mode == 7) {
                D_800E54A4->players[p].state = 0x1A;
                D_800E54A4->players[p].next = 0x17;
            } else {
                D_800E54A4->players[p].state = 0xE;
            }
            func_80432488(p);
            break;
        }
        break;
    case 24:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2B0:
#elif defined(VERSION_DE)
        case 0x2BE:
#else
        case 0x2AB:
#endif
            D_800E54A4->players[p].state = 0xD;
            D_800E54A4->players[p].sub = 5;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2AF:
#elif defined(VERSION_DE)
        case 0x2BD:
#else
        case 0x2AA:
#endif
            if (D_800E54A4->players[p].host == 1) {
                func_80434F4C(p);
            } else {
                D_800E54A4->players[p].state = 0xE;
            }
            func_80432488(p);
            break;
        }
        break;
    case 25:
        if (event ==
#if defined(VERSION_EU_X)
            0x2BD
#elif defined(VERSION_DE)
            0x2BB
#else
            0x2EB
#endif
        ) {
            if (D_800E54A4->players[p].host == 1) {
                func_80434F4C(p);
            } else {
                D_800E54A4->players[p].state = 0xE;
            }
            func_80432488(p);
        }
        break;
    case 26:
        switch (event) {
#if defined(VERSION_EU_X)
        case 0x2BA:
#elif defined(VERSION_DE)
        case 0x2C0:
#else
        case 0x2A7:
#endif
            D_800E54A4->players[0].back = 2;
            D_800E54A4->players[0].state = 2;
            D_800E54A4->players[0].next = 0xD;
            D_800E54A4->players[0].sub = 6;
            func_80432488(p);
            break;
#if defined(VERSION_EU_X)
        case 0x2BB:
#elif defined(VERSION_DE)
        case 0x2C1:
#else
        case 0x2A8:
#endif
            func_8022F1F4(0);
            func_8029A73C();
            func_80435958(9);
            return 0;
        }
        break;
/* EU-X orders the profile confirmation before cancellation. */
#if defined(VERSION_EU_X)
    case 28:
        switch (event) {
        case 0x2CE:
            if (func_80405290(p) != 0) {
                D_800E54A4->players[p].state = 0x1D;
                func_80432488(p);
            } else {
                D_800E54A4->players[p].back = 2;
                D_800E54A4->players[p].state = 2;
                func_80432488(p);
            }
            break;
        case 0x2CF:
            D_800E54A4->players[p].back = 2;
            D_800E54A4->players[p].state = 2;
            func_80432488(p);
            break;
        }
        break;
#else
    case 28:
        switch (event) {
#if defined(VERSION_DE)
        case 0x2A2:
#else
        case 0x2DF:
#endif
            D_800E54A4->players[p].back = 2;
            D_800E54A4->players[p].state = 2;
            func_80432488(p);
            break;
#if defined(VERSION_DE)
        case 0x2A3:
#else
        case 0x2E0:
#endif
            if (func_80405290(p) != 0) {
                D_800E54A4->players[p].state = 0x1D;
                func_80432488(p);
            } else {
                D_800E54A4->players[p].back = 2;
                D_800E54A4->players[p].state = 2;
                func_80432488(p);
            }
            break;
        }
        break;
#endif
    case 29:
        if (event ==
#if defined(VERSION_EU_X)
            0x2CC
#elif defined(VERSION_DE)
            0x2A5
#else
            0x2C0
#endif
        ) {
            D_800E54A4->players[p].back = 2;
            D_800E54A4->players[p].state = 2;
            func_80432488(p);
        }
        break;
    }
    return 0;
}

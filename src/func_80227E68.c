/* Advances an elimination round when rule D_80146918 is on and not paused (func_80245774,
   func_80245788): counts the players still in, clears D_800F7D10 while one is waiting, then by the
   round state at 0x84 of D_801468A0 revives the first waiting player (crediting a point in state 1,
   scheduling D_80146924 = 3 otherwise) or moves to state 2, and ends the round through func_8022A738
   when func_802282C8 reports it over. */
#include "basetypes.h"

extern s32 D_80146918;
extern s32 D_801468BC;
extern s32 D_80146924;
extern s32 D_800F7D10;

typedef struct {
    char pad0[0x84];
    s32 unk84;
} StateBlock;
extern StateBlock D_801468A0;

typedef struct ActorNode ActorNode;

typedef struct {
    char pad0[4];
    u16 unk4;
    char pad6[0x8F - 6];
    u8 unk8F;
    u8 unk90;
} SubActor;

struct ActorNode {
    char pad0[0x5D8];
    SubActor *unk5D8;
    char pad1[0x16E0 - 0x5D8 - 4];
    ActorNode *unk16E0;
};

typedef struct {
    char pad0[0x20];
    ActorNode *players;
} Round;

s32 func_802282C8(Round *arg0);
void func_8022A738(Round *arg0);
s32 func_80245774(void);
s32 func_80245788(void);

void func_80227E68(Round *arg0) {
    s32 count;
    s32 count2;
    ActorNode *node;
    SubActor *temp;
    StateBlock *state;
    s32 three; /* FAKEMATCH: constant-holding local places the li */
    s32 found; /* FAKEMATCH: flag local keeps the loop exit from being threaded past the found check */

    if ((D_80146918 != 0) && (func_80245774() == 0) && (func_80245788() == 0)) {
        node = arg0->players;
        count = 0;
        if (node != 0) {
            do {
                if (node->unk5D8->unk90 == 0) {
                    count += 1;
                }
                node = node->unk16E0;
            } while (node != 0);
        }
        count2 = count;
        if (count2 > 0) {
            for (node = arg0->players; node != 0; node = node->unk16E0) {
                if ((node->unk5D8->unk8F == 1) || (node->unk5D8->unk90 == 1)) {
                    break;
                }
            }
            three = 3;
            if (node != 0) {
                D_800F7D10 = 0;
            }
            state = &D_801468A0;
            switch (state->unk84) {
            case 0:
            default:
                if (count2 > 0) {
                    for (node = arg0->players; node != 0; node = node->unk16E0) {
                        if ((node->unk5D8->unk8F == 1) || (node->unk5D8->unk90 == 1)) {
                            break;
                        }
                    }
                    three = 3;
                    if (node != 0) {
                        node->unk5D8->unk90 = 0;
                        D_80146924 = three;
                    }
                } else {
                    state->unk84 = 2;
                }
                break;
            case 1:
                state->unk84 = 2;
                for (node = arg0->players; node != 0; node = node->unk16E0) {
                    if ((node->unk5D8->unk8F == 1) || (node->unk5D8->unk90 == 1)) {
                        break;
                    }
                }
                found = node != 0;
                if (found) {
                    node->unk5D8->unk90 = 0;
                    do {
                        temp = node->unk5D8;
                        temp->unk4 = (u16) (temp->unk4 + 1);
                    } while (0);
                    D_800F7D10 = 0;
                }
                break;
            case 2:
            case 3:
                break;
            }
            if ((func_802282C8(arg0) != 0) && (D_801468BC == 0)) {
                func_8022A738(arg0);
            }
        }
    }
}

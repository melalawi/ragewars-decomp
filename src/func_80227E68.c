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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C521C_4 = 3.40282347e+38f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA3DC_4 = 3.40282347e+38f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C5104_4 = 1.41421354f;
const float unbake_rodata_800C5108_4 = 0.5f;
#elif defined(VERSION_EU_X)
const float unbake_rodata_800C50F4_4 = 6.28318548f;
const float unbake_rodata_800C50F8_4 = 262144.0f;
const float unbake_rodata_800C50FC_4 = 262144.0f;
const unsigned int unbake_rodata_800C5100_1C[] = {0x00280394U, 0x002803A0U, 0x002803ACU, 0x002803E0U, 0x0028040CU, 0x00280388U, 0x00280380U};
const float unbake_rodata_800C511C_4 = 0.09765625f;
const float unbake_rodata_800C5120_4 = 2.85714293f;
const float unbake_rodata_800C5124_4 = (-1.0f);
const float unbake_rodata_800C5128_4 = 0.418879062f;
const float unbake_rodata_800C512C_4 = 255.0f;
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800C5210_D[] = {0x67, 0x72, 0x69, 0x64, 0x20, 0x73, 0x65, 0x63, 0x74, 0x69, 0x6F, 0x6E, 0x00};
#endif

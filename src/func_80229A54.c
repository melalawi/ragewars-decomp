/* Returns the leading team: for each player in the list from 0x20 it adds the player's kills of the
   seven other players (the shorts at 0x3C of its stats at 0x5D8) to the total of its team byte at
   0x92, returning 0 at once for a player without a team (0xFF), then returns the first team 0 to 4
   with the highest total. */
#include "basetypes.h"

typedef struct {
    char pad0[0x3C];
    s16 kills[8];
} Stats;

typedef struct func_80229A54_S1 func_80229A54_S1;
typedef struct func_80229A54_S2 func_80229A54_S2;
typedef struct func_80229A54_S3 func_80229A54_S3;
struct func_80229A54_S1 {
    char pad0[0x4];
    char* unk4;
    char pad4[0x20 - 0x4 - sizeof(char*)];
    char* unk20;
};
struct func_80229A54_S2 {
    char pad0[0x5D8];
    char* unk5D8;
    char pad5D8[0x16E0 - 0x5D8 - sizeof(char*)];
    char* unk16E0;
};
struct func_80229A54_S3 {
    char pad0[0x92];
    u8 unk92;
};

s32 func_80229A54(void *game) {
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
            switch (((func_80229A54_S3 *)(stats))->unk92) {
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

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const float unbake_rodata_800C5304_4 = 16.0f;
const float unbake_rodata_800C5308_4 = 1.0f;
const float unbake_rodata_800C530C_4 = 255.0f;
const float unbake_rodata_800C5310_4 = 256.0f;
const float unbake_rodata_800C5314_4 = 0.00281690131f;
const float unbake_rodata_800C5318_4 = 0.00450450461f;
const float unbake_rodata_800C531C_4 = 0.045045048f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800CA4C4_4 = 16.0f;
const float unbake_rodata_800CA4C8_4 = 1.0f;
const float unbake_rodata_800CA4CC_4 = 255.0f;
const float unbake_rodata_800CA4D0_4 = 256.0f;
const float unbake_rodata_800CA4D4_4 = 0.00281690131f;
const float unbake_rodata_800CA4D8_4 = 0.00450450461f;
const float unbake_rodata_800CA4DC_4 = 0.045045048f;
#elif defined(VERSION_EU)
const float unbake_rodata_800C54BC_4 = 3000.0f;
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800C54D8_B[] = {0x67, 0x72, 0x61, 0x70, 0x68, 0x69, 0x63, 0x73, 0x65, 0x74, 0x00};
#elif defined(VERSION_DE)
const float unbake_rodata_800C5390_4 = 122.879997f;
#endif

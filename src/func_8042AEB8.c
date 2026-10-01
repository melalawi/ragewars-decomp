/* Starts the next stage of the current cup D_80154010 unless func_8042B11C reports the cup over:
   draws random stage numbers below the cup's size (5, 7, 17 or 11 stages) until one not yet marked
   in the played set at D_80154018 turns up (giving up after 15000 draws), marks it, counts the stage in
   D_80154014, maps it through the cup's stage table to an arena id, finds that id among the 40
   arena entries at D_800E4F64 and starts the cup with the entry's value through func_8042EB80.
   Returns 1 when a stage was started, else 0. */
#include "basetypes.h"

struct Arena {
    s32 id;
    s32 pad4;
    s32 pad8;
    s32 value;
};

struct Cup {
    s32 index;
    s32 stages;
    u8 played[4];
};

extern struct Cup D_80154010;
extern s32 D_800E51E4[];
extern s32 D_800E51F8[];
extern s32 D_800E5214[];
extern s32 D_800E5240[];
extern struct Arena D_800E4F64[];

extern s32 func_8042B11C(void);
extern s32 func_80274544(void);
extern s32 func_80265670(u8 *, s32);
extern void func_802656A8(u8 *, s32, s32);
extern void func_8042EB80(s32, s32);

static inline s32 cup_stages(s32 cup) {
    switch (cup) {
    case 0:
        return 5;
    case 1:
        return 7;
    case 3:
        return 11;
    case 2:
        return 17;
    }
    return 0;
}

static inline s32 stage_arena(s32 cup, s32 stage) {
    s32 *table;
    s32 id;
    s32 value;
    s32 found;
    s32 i;

    value = 0;
    if (stage == 0) {
        stage = 1;
    }
    switch (cup) {
    case 0:
        table = D_800E51E4;
        break;
    case 1:
        table = D_800E51F8;
        break;
    case 3:
        table = D_800E5214;
        break;
    case 2:
        table = D_800E5240;
        break;
    default:
        return 0;
    }
    id = table[stage];
    found = 0;
    i = 0;
    do {
        if (id == D_800E4F64[i].id) {
            found = 1;
            value = D_800E4F64[i].value;
        }
        i++;
    } while (i < 40 && !found);
    return value;
}

s32 func_8042AEB8(void) {
    s32 started;
    s32 found;
    s32 stage;
    s32 draws;
    s32 size;

    started = 0;
    if (func_8042B11C() == 0) {
        started = 1;
        stage = 0;
        draws = 0;
        found = 0;
        size = cup_stages(D_80154010.index) - 1;
        while (!found) {
            stage = func_80274544() % size + 1;
            if (func_80265670(D_80154010.played, stage) == 0) {
                found = 1;
                func_802656A8(D_80154010.played, stage, found);
            }
            draws++;
            if (draws >= 15001) {
                found = 1;
            }
        }
        D_80154010.stages++;
        func_8042EB80(D_80154010.index, stage_arena(D_80154010.index, stage));
    }
    return started;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800DFEA0_2[] = {0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800E5240_2[] = {0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800F1860_2[] = {0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800ECA40_2[] = {0x00, 0x00};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800E11F0_2[] = {0x00, 0x00};
#endif

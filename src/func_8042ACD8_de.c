#include "common/types.h"
#include "span_16E000/code_8042ACB0.h"
#include "types.h"
/* Starts the next stage of the current cup D_80154010 unless func_8042AF3C_de reports the cup over:
   draws random stage numbers below the cup's size (5, 7, 17 or 11 stages) until one not yet marked
   in the played set at D_80154018 turns up (giving up after 15000 draws), marks it, counts the stage in
   D_80154014, maps it through the cup's stage table to an arena id, finds that id among the 40
   arena entries at D_800E4F64 and starts the cup with the entry's value through func_8042E9A0_de.
   Returns 1 when a stage was started, else 0. */





extern struct Cup D_8014DD80;
extern s32 D_800E1194[];
extern s32 D_800E11A8_de[];
extern s32 D_800E11C4[];
extern s32 D_800E11F0_de[];
extern struct Shape_typemap_165 D_800E0F14_de[];


extern s32 func_802744D4_de(void);
extern s32 func_80265650_de(u8 *, s32);
extern void func_80265688_de(u8 *, s32, s32);
extern void func_8042E9A0_de(s32, s32);

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
        table = D_800E1194;
        break;
    case 1:
        table = D_800E11A8_de;
        break;
    case 3:
        table = D_800E11C4;
        break;
    case 2:
        table = D_800E11F0_de;
        break;
    default:
        return 0;
    }
    id = table[stage];
    found = 0;
    i = 0;
    do {
        if (id == D_800E0F14_de[i].field_0) {
            found = 1;
            value = D_800E0F14_de[i].field_C;
        }
        i++;
    } while (i < 40 && !found);
    return value;
}

s32 func_8042ACD8_de(void) {
    s32 started;
    s32 found;
    s32 stage;
    s32 draws;
    s32 size;

    started = 0;
    if (func_8042AF3C_de() == 0) {
        started = 1;
        stage = 0;
        draws = 0;
        found = 0;
        size = cup_stages(D_8014DD80.index) - 1;
        while (!found) {
            stage = func_802744D4_de() % size + 1;
            if (func_80265650_de(D_8014DD80.played, stage) == 0) {
                found = 1;
                func_80265688_de(D_8014DD80.played, stage, found);
            }
            draws++;
            if (draws >= 15001) {
                found = 1;
            }
        }
        D_8014DD80.stages++;
        func_8042E9A0_de(D_8014DD80.index, stage_arena(D_8014DD80.index, stage));
    }
    return started;
}

/* Resets a pool of 128 0x1F8-byte entries: marks each in state 2 with handler D_8011EE70 and clears
   three of its words, sets up the pool's free list and puts every entry on it, sets up the second
   list and three more through func_80255C40, then fills the four direction records of D_8011F038
   (signs and angles per quadrant), rebuilds D_8011EFF8 at a quarter turn through func_802736B8 and
   stores arg1 in the pool. */
#include "basetypes.h"

typedef struct {
    s8 state;
    u8 pad1[0x17];
    void *handler;
    u8 pad1C[0x40];
    s32 unk5C;
    u8 pad60[0x17C];
    s32 unk1DC;
    u8 pad1E0[4];
    s32 unk1E4;
    u8 pad1E8[0x10];
} PoolEntry;

typedef struct {
    u8 data[0x14];
} PoolList;

typedef struct {
    PoolEntry entries[128];
    PoolList freeList;
    PoolList usedList;
    PoolList lists[3];
    s32 unkFC64;
    s32 unkFC68;
} Pool;

typedef struct {
    s16 x;
    s16 y;
    s16 unk4;
    s16 unk6;
    s16 angleX;
    s16 angleY;
    u8 unkC[4];
} DirRecord;

extern char D_8011EE70;
extern char D_8011EFF8;
extern DirRecord D_8011F038[4];

extern void func_80255C40(void *, s32, s32);
extern s32 func_80255CB4(void *, void *);
extern void func_80219460(void *);
extern void func_802736B8(void *, f32);

void func_8044C050(Pool *pool, s32 arg1)
{
    s32 i;
    s32 j;
    DirRecord *d;

    for (i = 0; i < 128; i++) {
        pool->entries[i].handler = &D_8011EE70;
        pool->entries[i].state = 2;
        pool->entries[i].unk5C = 0;
        pool->entries[i].unk1DC = 0;
        pool->entries[i].unk1E4 = 0;
    }
    func_80255C40(&pool->freeList, 0x1E8, 0x1EC);
    for (i = 0; i < 128; i++) {
        func_80255CB4(&pool->freeList, &pool->entries[i]);
    }
    func_80255C40(&pool->usedList, 0x1F0, 0x1F4);
    for (i = 0; i < 3; i++) {
        func_80255C40(&pool->lists[i], 0x1E8, 0x1EC);
    }
    func_80219460(&D_8011EE70);
    for (j = 0; j < 4; j++) {
        d = &D_8011F038[j];
        switch (j) {
        case 0:
            d->x = -1;
            d->y = 1;
            d->angleX = -0x8000;
            d->angleY = -0x8000;
            break;
        case 1:
            d->x = 1;
            d->y = 1;
            d->angleX = 0;
            d->angleY = -0x8000;
            break;
        case 2:
            d->x = 1;
            d->y = -1;
            d->angleX = 0;
            d->angleY = 0;
            break;
        case 3:
            d->x = -1;
            d->y = -1;
            d->angleX = -0x8000;
            d->angleY = 0;
            break;
        }
        d->unk4 = 0;
        d->unk6 = 0;
        d->unkC[0] = 0xFF;
        d->unkC[1] = 0xFF;
        d->unkC[2] = 0xFF;
        d->unkC[3] = 0xFF;
    }
    func_802736B8(&D_8011EFF8, 1.5707964f);
    pool->unkFC64 = arg1;
    pool->unkFC68 = 0;
}

/* Initializes the game state: clears the whole state block and fills its slot and lookup tables
   with 0xFF, resets the 24 player entries and queue slots, sets up the three lists and the stream
   descriptor for the ROM data at D_16E000, loads the expansion-pak data when more memory is present,
   and builds the eight channels, the message pool and the sprite queue. */
#include "basetypes.h"

typedef struct Slot {
    s32 a;
    s32 b;
    char pad8[2];
    u8 index;
    char padB[5];
} Slot;

typedef struct Entry {
    u16 id;
    u8 team;
    u8 slot;
} Entry;

typedef struct Channel {
    char pad0[0x1C];
} Channel;

typedef struct State {
    char pad0[0x20];
    s16 f20;
    char pad22[2];
    char list0[0x3C - 0x24];
    char list0Data[0xC0 - 0x3C];
    char queue[0x2F0 - 0xC0];
    char pool[0x4F0 - 0x2F0];
    char queueData[0x920 - 0x4F0];
    Slot slots[24];
    char list1[0xAB8 - 0xAA0];
    char list1Data[0xAD8 - 0xAB8];
    char list2[0xAF0 - 0xAD8];
    char list2Data[0xB10 - 0xAF0];
    Channel channels[8];
    s32 fBF0;
    s32 fBF4;
    u8 lookup[0x100];
    Entry entries[24];
    s32 fD58;
    s16 fD5C;
    s16 fD5E;
    u32 romAddr;
    char padD64[4];
    u8 *lookupPtr;
    char padD6C[4];
    s16 fD70;
    s16 fD72;
    char padD74[4];
} State;

extern State D_80103230;
extern char D_16E000[];
extern char D_52860[];
extern char D_23C914[];
extern char D_801051B8[];

extern void func_8023CB50(s32 *base, Slot *slot);
extern void func_8025631C(void *dst, void *rom, void *size, u32 extra);
extern u32 func_80265370(void);
extern void func_802A101C(void *pool, s32 count, s32 size);
extern void func_802B2440(s32 arg0, s32 arg1, s32 arg2, u32 addr, s32 arg4, s32 arg5);
extern void func_802BFD50(void *list, void *data, s32 count);
extern void func_802BFD80(void *queue, s32 count, void *arg2, s32 arg3, void *data, s32 arg5);
extern void func_802C0510(void *list, void *item, s32 arg2);
extern void func_802C0640(s32 count, void *list, s16 *arg2);
extern void func_802C0840(void *queue);
extern void func_802C2320(void);

static inline void fill(void *dst, u8 value, s32 n) {
    u8 *p = dst;

    while (n--) {
        *p++ = value;
    }
}

void func_8023B9A0(void) {
    u32 extra;
    u32 i;

    extra = func_80265370() + 0x80000000;
    if (extra <= 0x80400000) {
        extra = 0;
    }
    fill(&D_80103230, 0, sizeof(State));
    fill(D_80103230.lookup, 0xFF, sizeof(D_80103230.lookup));
    fill(D_80103230.slots, 0xFF, sizeof(D_80103230.slots));
    func_802C2320();
    for (i = 0; i < 24; i++) {
        D_80103230.entries[i].id = 0xFFFF;
        D_80103230.entries[i].team = 0xFF;
        D_80103230.entries[i].slot = 0xFF;
    }
    D_80103230.fBF4 = 0;
    D_80103230.fBF0 = 0;
    for (i = 0; i < 24; i++) {
        D_80103230.slots[i].a = 0;
        D_80103230.slots[i].b = 0;
        func_8023CB50(&D_80103230.fBF0, &D_80103230.slots[i]);
        D_80103230.slots[i].index = i;
    }
    func_802BFD50(D_80103230.list0, D_80103230.list0Data, 0x21);
    func_802BFD50(D_80103230.list1, D_80103230.list1Data, 8);
    func_802BFD50(D_80103230.list2, D_80103230.list2Data, 8);
    D_80103230.fD5C = 0x400;
    D_80103230.fD5E = 0x100;
    D_80103230.lookupPtr = D_80103230.lookup;
    D_80103230.fD58 = 0;
    D_80103230.romAddr = (u32) D_16E000 | 0xB0000000;
    D_80103230.fD72 = 0;
    if (func_80265370() > 0x4FFFFF) {
        func_8025631C(D_801051B8, D_16E000, D_52860, extra);
    }
    if (extra != 0) {
        func_802B2440(0, 0x1FE000, 0x400000, extra + 0x80000000, -1, 7);
        D_80103230.fD70 = 1;
        D_80103230.fD72 = 1;
    }
    for (i = 0; i < 8; i++) {
        func_802C0510(D_80103230.list1, &D_80103230.channels[i], 1);
    }
    D_80103230.f20 = 0;
    func_802C0640(0xC, D_80103230.list0, &D_80103230.f20);
    func_802A101C(D_80103230.pool, 0x63, 0x200);
    func_802BFD80(D_80103230.queue, 0x63, D_23C914, 0, D_80103230.queueData, 0x93);
    func_802C0840(D_80103230.queue);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned int unbake_rodata_800DC150_1C[] = {0x0041D1E4U, 0x0041D26CU, 0x0041D410U, 0x0041D2C8U, 0x0041D330U, 0x0041D384U, 0x0041D410U};
const float unbake_rodata_800DC16C_4 = 0.00333333341f;
const float unbake_rodata_800DC170_4 = 30.0f;
const float unbake_rodata_800DC174_4 = 220.0f;
const float unbake_rodata_800DC178_4 = 2.14748365e+09f;
#elif defined(VERSION_US_REV1)
const float unbake_rodata_800E1430_4 = 1.0f;
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E20A4_10[] = {0x80, 0x0D, 0x07, 0x20, 0x80, 0x0D, 0x4F, 0xA0, 0x80, 0x0D, 0xAA, 0xA4, 0x80, 0x0D, 0xE8, 0x64};
const unsigned char unbake_rodata_800E20B4_40[] = {0x80, 0x0D, 0x07, 0x50, 0x80, 0x0D, 0x4F, 0xD4, 0x80, 0x0D, 0xAA, 0xD4, 0x80, 0x0D, 0xE8, 0x94, 0x80, 0x0D, 0x07, 0x80, 0x80, 0x0D, 0x50, 0x0C, 0x80, 0x0D, 0xAB, 0x04, 0x80, 0x0D, 0xE8, 0xC4, 0x80, 0x0D, 0x07, 0x88, 0x80, 0x0D, 0x50, 0x14, 0x80, 0x0D, 0xAB, 0x10, 0x80, 0x0D, 0xE8, 0xCC, 0x80, 0x0D, 0x07, 0xA0, 0x80, 0x0D, 0x50, 0x2C, 0x80, 0x0D, 0xAB, 0x28, 0x80, 0x0D, 0xE8, 0xE4};
#endif

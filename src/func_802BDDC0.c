#include "basetypes.h"

typedef struct QueueEntry {
    s16 type;
    s8 subtype;
    s8 pad03;
    s32 arg6;
    s32 arg4;
    s32 arg3;
    s32 arg5;
    s32 zero14;
} QueueEntry;

typedef struct Queue Queue;

extern s32 D_800D8390;
extern Queue *func_802BDE70(void);
extern s32 func_802C0250(Queue *, void *, s32);
extern s32 func_802C0510(Queue *, s32, s32);

typedef struct func_802BDDC0_S1 func_802BDDC0_S1;
struct func_802BDDC0_S1 {
    s16 unk0;
    char pad0[0x2 - 0x0 - sizeof(s16)];
    s8 unk2;
    char pad2[0x4 - 0x2 - sizeof(s8)];
    s32 unk4;
    char pad4[0x8 - 0x4 - sizeof(s32)];
    s32 unk8;
    char pad8[0xC - 0x8 - sizeof(s32)];
    s32 unkC;
    char padC[0x10 - 0xC - sizeof(s32)];
    s32 unk10;
    char pad10[0x14 - 0x10 - sizeof(s32)];
    s32 unk14;
};

s32 func_802BDDC0(void *entry, s32 subtype, s32 arg2, s32 arg3,
                   s32 arg4, s32 arg5, s32 arg6) {
    s16 type;

    if (D_800D8390 == 0) {
        return -1;
    }
    type = 12;
    if (arg2 == 0) {
        type = 11;
    }
    ((func_802BDDC0_S1 *)(entry))->unk0 = type;
    ((func_802BDDC0_S1 *)(entry))->unk2 = subtype;
    ((func_802BDDC0_S1 *)(entry))->unk4 = arg6;
    ((func_802BDDC0_S1 *)(entry))->unk8 = arg4;
    ((func_802BDDC0_S1 *)(entry))->unkC = arg3;
    ((func_802BDDC0_S1 *)(entry))->unk10 = arg5;
    ((func_802BDDC0_S1 *)(entry))->unk14 = 0;
    if (subtype != 1) {
        return func_802C0510(func_802BDE70(), (s32)entry, 0);
    }
    return func_802C0250(func_802BDE70(), entry, 0);
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D3010_1C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D8390_1C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU)
const unsigned char unbake_rodata_800E49E0_1C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#elif defined(VERSION_EU_X)
const unsigned char unbake_rodata_800DFBA0_1C[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#endif

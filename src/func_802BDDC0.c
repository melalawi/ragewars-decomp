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
    *(s16 *)((s8 *)entry + 0) = type;
    *(s8 *)((s8 *)entry + 2) = subtype;
    *(s32 *)((s8 *)entry + 4) = arg6;
    *(s32 *)((s8 *)entry + 8) = arg4;
    *(s32 *)((s8 *)entry + 0xC) = arg3;
    *(s32 *)((s8 *)entry + 0x10) = arg5;
    *(s32 *)((s8 *)entry + 0x14) = 0;
    if (subtype != 1) {
        return func_802C0510(func_802BDE70(), (s32)entry, 0);
    }
    return func_802C0250(func_802BDE70(), entry, 0);
}

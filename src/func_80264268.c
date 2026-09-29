/* Reinitializes a present controller pak entry under the pak queue lock, resets its counters and label, retries initialization, and releases the lock; an unsigned pointer local and a queue address relative to the adjacent status byte separate address lifetimes and preserve register scheduling. */
#include "basetypes.h"

typedef struct {
    s32 present;
    s8 channel;
} PakEntry;

extern u8 D_800D0E50;
extern s32 D_800D0E5C;
extern s8 D_8010FBB8;
extern char D_8010FBC0;
extern char D_8010FC00;
extern s32 func_802C0390(void *, void *, s32);
extern s32 func_802C0510(void *, void *, s32);
extern s32 func_802BFE70(void *);
extern void func_80263760(void);
extern s32 func_80285A94(void *, void *, s32);
extern s32 func_802BD0A8(void *, void *, s32);
extern u32 func_802BCD20(void *);

typedef struct func_80264268_S1 func_80264268_S1;
typedef struct func_80264268_S2 func_80264268_S2;
struct func_80264268_S1 {
    char pad0[0xC8];
    s32 unkC8;
    char padC8[0xCC - 0xC8 - sizeof(s32)];
    s32 unkCC;
    char padCC[0xD0 - 0xCC - sizeof(s32)];
    s32 unkD0;
    char padD0[0xD4 - 0xD0 - sizeof(s32)];
    s32 unkD4;
};
struct func_80264268_S2 {
    char pad0[0x8];
    char unk8;
};

void func_80264268(PakEntry *arg0) {
    u32 address=(u32)arg0;
    char *o=(char *)address;

    if (D_800D0E50 != 0 && *(s32 *)address != 0) {
        if (func_802C0390(&D_8010FBC0, 0, 1) == 0) {
            D_800D0E5C = func_802BFE70(0);
        }
        func_80263760();
        D_8010FBB8 = 2;
        ((func_80264268_S1 *)(o))->unkCC = 0;
        ((func_80264268_S1 *)(o))->unkD0 = 0;
        ((func_80264268_S1 *)(o))->unkD4 = 0;
        func_80285A94(o + 0x140, o + 0x16C, 3);
        func_802BD0A8(&D_8010FC00, o + 0xD8, arg0->channel);
        func_802BCD20((char *)o + 0xD8);
        func_802BCD20((char *)o + 0xD8);
        if (func_802BD0A8(&D_8010FC00, o + 0xD8, arg0->channel) == 0) {
            ((func_80264268_S1 *)(o))->unkC8 = 1;
        }
        D_8010FBB8 = 2;
        D_800D0E5C = -1;
        func_802C0510(&((func_80264268_S2 *)(&D_8010FBB8))->unk8, 0, 1);
    }
}

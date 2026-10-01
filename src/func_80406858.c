/* Rates the Controller Pak on channel ch as a save target: when one of its 16 notes is named
   D_800D7700 or D_800D7704 it selects the pak with score 123 and returns 1; otherwise it reads the
   pak's free space and note count and, when the pak is readable but has no notes or lacks the
   space the save image needs, records the pak as the best candidate if that need beats the
   current score and returns 0; a readable pak with room returns 1 and a read error returns 0. */
#include "basetypes.h"

extern char *D_800D7700;
extern char *D_800D7704;
extern s32 D_800E28C8;
extern s32 D_8011FECC;

extern void func_80405338(s32 ch, s32 index, s32 *state);
extern void func_80405648(s32 state, char *name, s32 size);
extern s32 func_802A137C(char *a, char *b);
extern s32 func_80405160(s32 ch, s32 *freeSpace);
extern s32 func_804050CC(s32 ch, s32 *noteCount);
extern s32 func_804057EC(s32 size);

s32 func_80406858(void *unused, s32 ch, s32 *bestCh, s32 *bestScore) {
    char name[16];
    s32 state0;
    s32 state1;
    s32 freeSpace;
    s32 noteCount;
    s32 found0;
    s32 found1;
    s32 i;
    s32 result;
    s32 need;
    char *wanted;

    wanted = D_800D7700;
    for (i = 0; i < 16; i++) {
        func_80405338(ch, i, &state0);
        func_80405648(state0, name, 16);
        if (func_802A137C(name, wanted) == 0) {
            found0 = 1;
            goto search1;
        }
    }
    found0 = 0;
search1:
    wanted = D_800D7704;
    for (i = 0; i < 16; i++) {
        func_80405338(ch, i, &state1);
        func_80405648(state1, name, 16);
        if (func_802A137C(name, wanted) == 0) {
            found1 = 1;
            goto check;
        }
    }
    found1 = 0;
check:
    if (found0 || found1) {
        *bestCh = ch;
        *bestScore = 123;
        return 1;
    }
    result = func_80405160(D_800E28C8, &freeSpace);
    if (result == 0) {
        result = func_804050CC(D_800E28C8, &noteCount);
        if (result == 0) {
            need = func_804057EC(D_8011FECC + 0x610);
            if (noteCount == 0 || freeSpace < need) {
                if (*bestScore < need) {
                    *bestScore = need;
                    *bestCh = ch;
                }
                return 0;
            }
        }
    }
    return result == 0;
}

/* Native resident constant storage; absolute access symbols retain their addresses. */
#if defined(VERSION_US)
const unsigned char unbake_rodata_800D2384_4[] = {0x80, 0x0C, 0xFF, 0x68};
#elif defined(VERSION_US_REV1)
const unsigned char unbake_rodata_800D7704_4[] = {0x80, 0x0D, 0x52, 0xE8};
#elif defined(VERSION_DE)
const unsigned char unbake_rodata_800D36D8_4[] = {0x80, 0x0D, 0x18, 0xF8};
#endif

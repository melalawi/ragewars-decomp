#include "span_16E000/code_80405DC0.h"
#include "common/unused.h"
#include "span_16E000/code_80405DC0.h"
/* Rates the Controller Pak on channel ch as a save target: when one of its 16 notes is named
   D_800D36D4 or D_800D36D8 it selects the pak with score 123 and returns 1; otherwise it reads the
   pak's free space and note count and, when the pak is readable but has no notes or lacks the
   space the save image needs, records the pak as the best candidate if that need beats the
   current score and returns 0; a readable pak with room returns 1 and a read error returns 0. */
#include "types.h"

#if defined(VERSION_EU) || defined(VERSION_EU_X)


extern char *D_800E25B4[];


#else




#endif


extern s32 D_8011BE0C;

extern s32 func_80405338_de(s32 ch, s32 index, u8 **state);
extern void func_80405648_de(u8 *state, u8 *name, s32 size);
extern s32 func_802A037C_de(const void *a, const void *b);
extern s32 func_80405160_de(s32 ch, s32 *freeSpace);
extern s32 func_804050CC_de(s32 ch, s32 *noteCount);
extern u32 func_804057EC_de(u32 size);

s32 func_80406858_de(void *unused, s32 ch, s32 *bestCh, s32 *bestScore) {
    u8 name[16];
    u8 *state0;
    u8 *state1;
    s32 freeSpace;
    s32 noteCount;
    s32 found0;
    s32 found1;
    s32 i;
    s32 result;
    s32 need;
    char *wanted;

#if defined(VERSION_EU) || defined(VERSION_EU_X)
    wanted = D_800E25A4[D_80152789];
#else
    wanted = D_800D36D4;
#endif
    for (i = 0; i < 16; i++) {
        func_80405338_de(ch, i, &state0);
        func_80405648_de(state0, name, 16);
        if (func_802A037C_de(name, wanted) == 0) {
            found0 = 1;
            goto search1;
        }
    }
    found0 = 0;
search1:
#if defined(VERSION_EU) || defined(VERSION_EU_X)
    wanted = D_800E25B4[D_80152789];
#else
    wanted = D_800D36D8;
#endif
    for (i = 0; i < 16; i++) {
        func_80405338_de(ch, i, &state1);
        func_80405648_de(state1, name, 16);
        if (func_802A037C_de(name, wanted) == 0) {
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
    result = func_80405160_de(D_800DE878, &freeSpace);
    if (result == 0) {
        result = func_804050CC_de(D_800DE878, &noteCount);
        if (result == 0) {
            need = func_804057EC_de(D_8011BE0C + 0x610);
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


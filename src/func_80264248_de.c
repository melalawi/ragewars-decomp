#include "common/types_1dc8418c21db.h"
#include "span_1000/code_802636D0.h"
#include "types.h"
/* Reinitializes a present controller pak entry under the pak queue lock, resets its counters and label, retries initialization, and releases the lock; an unsigned pointer local and a queue address relative to the adjacent status byte separate address lifetimes and preserve register scheduling. */



extern u8 D_800CBC10;
extern s32 D_800CBC1C;
extern s8 D_8010BBB8;
extern char D_8010BBC0;
extern char D_8010BC00;
extern s32 func_802BB2A0_de(void *, void *, s32);
extern s32 func_802BB420_de(void *, void *, s32);
extern s32 func_802BAD80_de(void *);
extern void func_80263740_de(void);
extern s32 func_80285AC4_de(void *, void *, s32);
extern s32 func_802B7FD8_de(void *, void *, s32);
extern u32 
#if defined(VERSION_EU)
func_802B7EF0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B7F30_eu_x
#elif defined(VERSION_US)
func_802B7B80_us
#else
func_802B7C50_de
#endif
(void *);






void func_80264248_de(Shape *arg0) {
    u32 address=(u32)arg0;
    char *o=(char *)address;

    if (D_800CBC10 != 0 && *(s32 *)address != 0) {
        if (func_802BB2A0_de(&D_8010BBC0, 0, 1) == 0) {
            D_800CBC1C = func_802BAD80_de(0);
        }
        func_80263740_de();
        D_8010BBB8 = 2;
        ((func_80264268_S1 *)(o))->unkCC = 0;
        ((func_80264268_S1 *)(o))->unkD0 = 0;
        ((func_80264268_S1 *)(o))->unkD4 = 0;
        func_80285AC4_de(o + 0x140, o + 0x16C, 3);
        func_802B7FD8_de(&D_8010BC00, o + 0xD8, arg0->enabled);
        
#if defined(VERSION_EU)
func_802B7EF0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B7F30_eu_x
#elif defined(VERSION_US)
func_802B7B80_us
#else
func_802B7C50_de
#endif
((char *)o + 0xD8);
        
#if defined(VERSION_EU)
func_802B7EF0_eu
#elif defined(VERSION_EU_X) || defined(VERSION_US_REV1)
func_802B7F30_eu_x
#elif defined(VERSION_US)
func_802B7B80_us
#else
func_802B7C50_de
#endif
((char *)o + 0xD8);
        if (func_802B7FD8_de(&D_8010BC00, o + 0xD8, arg0->enabled) == 0) {
            ((func_80264268_S1 *)(o))->unkC8 = 1;
        }
        D_8010BBB8 = 2;
        D_800CBC1C = -1;
        func_802BB420_de(&((func_8020CC0C_S1 *)(&D_8010BBB8))->unk8, 0, 1);
    }
}

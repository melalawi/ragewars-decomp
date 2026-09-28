#include "basetypes.h"

#ifdef VERSION_EU_MUL
#define VV_0273 0x278
#define VV_0272 0x277
#elif defined(VERSION_DE)
#define VV_0273 0x26F
#define VV_0272 0x26E
#else
#define VV_0273 0x273
#define VV_0272 0x272
#endif

/* Runs the screen D_800E5830 each frame until stage 1 of D_800E28E0: on its first frame it marks
   the word at 0x90, passes 0x272 to func_8029A1D4, or 0x273 when func_8040EC50
   reports zero for item 0x273 of the window argument, also 0x272 when D_80146948 is clear, and calls func_802A3358; then, once the
   reply pair ending at D_80154024 is marked, it clears the mark and either hides the item at 0x24,
   clears the word at 0x1C0, calls func_8029A73C and leaves through func_80299368 with the reply,
   or for a reply of -1 shows the item again and sets 0x1C0 to one. Returns zero. Written from the
   assembly; the conditional tests the zero case first. */

struct State {
    char pad[0x24];
    void *item;
    char pad28[0x90 - 0x28];
    s32 started;
    char pad94[0x1C0 - 0x94];
    s32 busy;
};

extern s32 D_800E28E0;
extern struct State *D_800E5830;
extern s32 D_80146948;
extern s32 D_80154024;
extern void *func_8040ECB0(void *, s32);
extern s32 func_8040EC50(void *);
extern void func_8029A1D4(s32);
extern void func_802A3358();
extern void func_8040E958(void *, s32);
extern void func_8029A73C();
extern void func_80299368(s32);

s32 func_80438E64(void *window) {
    s32 *pair;
    s32 marked;

    if (D_800E28E0 > 0) {
        return 0;
    }
    if (D_800E5830->started == 0) {
        D_800E5830->started = 1;
        func_8029A1D4(func_8040EC50(func_8040ECB0(window, VV_0273)) == 0 ? VV_0273 : VV_0272);
        if (D_80146948 == 0) {
            func_8029A1D4(VV_0272);
        }
        func_802A3358();
    }
    pair = &D_80154024;
    marked = pair[0];
    if (marked == 1) {
        pair[0] = 0;
        if (pair[-1] != -1) {
            func_8040E958(D_800E5830->item, 0);
            D_800E5830->busy = 0;
            func_8029A73C();
            func_80299368(pair[-1]);
            return 0;
        }
        func_8040E958(D_800E5830->item, 1);
        D_800E5830->busy = marked;
    }
    return 0;
}

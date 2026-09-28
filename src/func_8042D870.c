/* Runs one frame of the screen D_800E53C0's confirmation prompt while D_800E28E0 is not positive:
   on the first frame it marks the prompt open at 0x320 and asks func_8029A1D4 for message 0x238,
   or 0x237 when func_8040EC50 rejects the object loaded for 0x238, then calls func_802A3358. Once
   the choice word D_80154020[1] reads one it clears it and either enables the prompt's object at
   0xE4 and records the choice at 0x328, when the pending action D_80154020[0] is -1, or disables
   the object, clears 0x328 and hands the pending action to func_80299368 through func_8029A73C.
   Returns zero. On eu-mul both message ids are renumbered 5 higher. */
#include "basetypes.h"

struct Screen {
    char pad0[0xE4];
    void *object;
    char padE8[0x320 - 0xE8];
    s32 open;
    char pad324[0x328 - 0x324];
    s32 choice;
};

extern struct Screen *D_800E53C0;
extern s32 D_800E28E0;
extern s32 D_80154020[];

extern void *func_8040ECB0(s32, s32);
extern s32 func_8040EC50(void *);
extern void func_8029A1D4(s32);
extern void func_802A3358();
extern void func_8040E958(void *, s32);
extern void func_8029A73C();
extern void func_80299368(s32);

#ifdef VERSION_EU_MUL
#define MSG_SHIFT 5
#else
#define MSG_SHIFT 0
#endif

s32 func_8042D870(s32 context) {
    s32 *choice;
    s32 taken;
    s32 message;

    if (D_800E28E0 <= 0) {
        if (D_800E53C0->open == 0) {
            D_800E53C0->open = 1;
            if (func_8040EC50(func_8040ECB0(context, 0x238 + MSG_SHIFT)) == 0) {
                message = 0x238 + MSG_SHIFT;
            } else {
                message = 0x237 + MSG_SHIFT;
            }
            func_8029A1D4(message);
            func_802A3358();
        }
        choice = &D_80154020[1];
        taken = choice[0];
        if (taken == 1) {
            choice[0] = 0;
            if (choice[-1] != -1) {
                func_8040E958(D_800E53C0->object, 0);
                D_800E53C0->choice = 0;
                func_8029A73C();
                func_80299368(choice[-1]);
                return 0;
            }
            func_8040E958(D_800E53C0->object, 1);
            D_800E53C0->choice = taken;
        }
    }
    return 0;
}

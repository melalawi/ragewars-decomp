#include "basetypes.h"

/* Handles the menu message func_8029AA08 reports after func_8029A73C unless func_8043C4E8 reports
   screen D_800E4EF0 busy: 0x36B closes the menu through func_804296A4, sends code -1 to
   func_8042EB68 and calls func_8029A8A8; 0x369 does the same with page reset func_80429834(0)
   and code 0x17 when func_802A2B18 reports the screen's list at 0x34 non-empty; 0x36A always does
   it with func_8041E668 and code 0x19, then calls func_802A338C. Returns zero. */

#if defined(VERSION_DE)
#define VALUE_369 0x365
#define VALUE_36A 0x366
#define VALUE_36B 0x367
#elif defined(VERSION_EU_MUL)
#define VALUE_369 0x36D
#define VALUE_36A 0x36E
#define VALUE_36B 0x36F
#else
#define VALUE_369 0x369
#define VALUE_36A 0x36A
#define VALUE_36B 0x36B
#endif

struct Screen {
    char pad0[0x34];
    s32 list;
};

extern struct Screen *D_800E4EF0;
extern void func_8029A73C(void);
extern s32 func_8043C4E8(struct Screen *);
extern s32 func_8029AA08(void);
extern void func_804296A4(void);
extern void func_80429834(s32);
extern void func_8042EB68(s32);
extern void func_8029A8A8(void);
extern s32 func_802A2B18(s32);
extern void func_8041E668(void);
extern void func_802A338C(void);

s32 func_804299D8(void) {
    func_8029A73C();
    if (func_8043C4E8(D_800E4EF0) == 1) {
        return 0;
    }
    switch (func_8029AA08()) {
    case VALUE_36B:
        func_804296A4();
        func_8042EB68(-1);
        func_8029A8A8();
        break;
    case VALUE_369:
        if (func_802A2B18(D_800E4EF0->list) > 0) {
            func_804296A4();
            func_80429834(0);
            func_8042EB68(0x17);
            func_8029A8A8();
        }
        break;
    case VALUE_36A:
        func_804296A4();
        func_80429834(0);
        func_8041E668();
        func_8042EB68(0x19);
        func_8029A8A8();
        func_802A338C();
        break;
    }
    return 0;
}

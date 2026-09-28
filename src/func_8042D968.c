#include "basetypes.h"

/* Handles the answer on the screen D_800E53C0. */

#if defined(VERSION_DE)
#define VALUE_239 0x235
#elif defined(VERSION_EU_MUL)
#define VALUE_239 0x23E
#else
#define VALUE_239 0x239
#endif

struct Screen {
    char pad[0x1C];
    s32 word1C;
};

extern struct Screen *D_800E53C0;
extern s32 D_80146894;
extern s32 D_80146918;
extern s32 D_801468F4;
extern void func_8029A73C();
extern s32 func_8043C4E8(struct Screen *);
extern s32 func_8029AA08();
extern void func_8043C458(struct Screen *);
extern void func_80435190(s32);
extern s32 func_8042B108();
extern void func_8042EB68(s32);
extern void func_80299368(s32);

s32 func_8042D968(void) {
    s32 *paused;

    func_8029A73C();
    if (func_8043C4E8(D_800E53C0) == 1) {
        return 0;
    }
    paused = &D_80146894;
    *paused = 0;
    switch (func_8029AA08()) {
    case VALUE_239 - 2:
        if (((u8 *)paused)[-0x5BF] == 0) {
            func_8043C458(D_800E53C0);
            D_800E53C0->word1C = 0;
        } else {
            D_80146918 = 0;
            D_801468F4 = 0;
            func_80299368(0xF);
        }
        break;
    case VALUE_239 - 1:
        func_80435190(5);
        func_80299368(0x13);
        break;
    case VALUE_239 + 3:
        if (func_8042B108() == 1) {
            func_8042EB68(0x21);
            return 0;
        }
        if (((u8 *)paused)[-0x5BF] == 0) {
            func_80299368(0x14);
        } else {
            func_80299368(0xF);
        }
        break;
    default:
        return 0;
    }
    return 0;
}

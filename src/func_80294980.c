#include "basetypes.h"

extern s32 D_800D29D0;
extern s32 D_8011FAB0;
extern f32 D_8014AD78;
extern s32 D_80146958;
extern s32 D_800D29D4;
extern s8 D_800E28D0[];
extern s8 D_80145040;
extern s32 D_801462C8;

extern int func_8022A404(void *arg0);
extern void func_8028D8E8(void);
extern void func_8029397C(s32 arg0, s32 arg1);

/* Initializes the game state for a new game phase with arg0 and updates the game state flag. */
void func_80294980(s32 arg0) {
    s8 *base = &D_801462C8;

    *(s8 *)(base + 0x1D) = 0;
    D_800D29D0 = 0;
    D_8011FAB0 = 0;
    D_8014AD78 = (f32)(*(s32 *)(D_800E28D0 + 4));
    D_80146958 = 0;
    func_8022A404(base - 0x1288);
    D_800D29D4 = 0;
    func_8028D8E8();
    func_8029397C(arg0, 0x82);
    D_800D29D0 = 1;
    D_800D29D4 = 0;
}

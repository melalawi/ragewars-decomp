#include "basetypes.h"

extern s32 D_800D29D0;
extern s32 D_8011FAB0;
extern f32 D_8014AD78;
extern s32 D_80146958;
extern s32 D_800D29D4;
typedef struct func_8029485C_S1 func_8029485C_S1;
struct func_8029485C_S1 {
    char pad0[0x4];
    s32 unk4;
};

extern func_8029485C_S1 D_800E28D0;
extern s8 D_80145040;

extern int func_8022A404(void *arg0);
extern void func_8028D8E8(void);
extern void func_8029397C(s32 arg0, s32 arg1);

/* Initializes the game state for a new game phase with arg0 as the phase identifier. */
void func_8029485C(s32 arg0) {
    D_800D29D0 = 0;
    D_8011FAB0 = 0;
    D_8014AD78 = (f32)(D_800E28D0.unk4);
    D_80146958 = 0;
    func_8022A404(&D_80145040);
    D_800D29D4 = 0;
    func_8028D8E8();
    func_8029397C(arg0, 0x82);
}

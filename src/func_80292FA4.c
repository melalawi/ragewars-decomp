#include "basetypes.h"

extern void func_802A101C(s32 arg0, s32 arg1, s32 arg2);
extern void func_802BFD80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802C0840(s32 arg0);
extern s32 func_802C06E0(s32 *, s32);

extern char D_800EBC80[];
extern char D_8011F880[];
extern char D_293518[];
extern char D_800F3C80[];
extern s32 D_800D2B24;
extern s32 D_800D2B10;

typedef struct func_80292FA4_S1 func_80292FA4_S1;
struct func_80292FA4_S1 {
    char pad0[0x26DC8];
    s32 unk26DC8;
};

void func_80292FA4(s32 *arg0, s32 arg1) {
    func_802A101C((s32)D_800EBC80, 1, 0x8000);
    func_802BFD80((s32)D_8011F880, 1, D_293518, arg1, (s32)D_800F3C80, D_800D2B24);
    func_802C0840((s32)D_8011F880);
    {
        s32 temp = D_800D2B10;
        ((func_80292FA4_S1 *)(arg0))->unk26DC8 = 0;
        func_802C06E0(0, temp);
    }
loop_1:
    goto loop_1;
}

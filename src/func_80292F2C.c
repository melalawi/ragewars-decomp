#include "basetypes.h"

extern void func_802A101C(s32 arg0, s32 arg1, s32 arg2);
extern void func_802BFD80(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5);
extern void func_802C0840(s32 arg0);

extern char D_800EBC00[];
extern char D_8011F650[];
extern char D_2934F0[];
extern s32 D_800D2B14;

void func_80292F2C(void) {
    func_802A101C((s32)D_800EBC00, 0, 0x80);
    func_802BFD80((s32)D_8011F650, 0, D_2934F0, 0, (s32)(D_800EBC00 + 0x80), D_800D2B14);
    func_802C0840((s32)D_8011F650);
}

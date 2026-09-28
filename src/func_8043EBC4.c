#include "basetypes.h"

extern void func_802647A8(s32 arg0);
extern void func_80293808(void *arg0, s32 arg1);
extern s32 D_8011FAC0;
extern s32 D_80154048;

typedef struct {
    u8 pad0[4];
    s8 unk4;
} Inner8043EBC4;

typedef struct {
    u8 pad0[0x20];
    Inner8043EBC4 *unk20;
} Outer8043EBC4;

/** Clears the D_8011FAC0 record and D_80154048, then re-registers the target through func_802647A8. */
s32 func_8043EBC4(void *arg0, Outer8043EBC4 *arg1) {
    func_80293808(&D_8011FAC0, 8);
    D_80154048 = 0;
    func_802647A8(arg1->unk20->unk4);
    return 1;
}
